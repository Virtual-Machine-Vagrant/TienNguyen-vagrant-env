<?php

namespace Litecms\Portfolio\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Litecms\Portfolio\Interfaces\CategoryRepositoryInterface;
use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;

class PortfolioController extends BaseController
{

    /**
     * Constructor.
     *
     * @param type \Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface $portfolio
     *
     * @return type
     */
    public function __construct(PortfolioRepositoryInterface $portfolio, CategoryRepositoryInterface $category)
    {
        $this->middleware('web');
        $this->setupTheme(config('theme.themes.public.theme'), config('theme.themes.public.layout'));
        $this->repository = $portfolio;
        $this->category = $category;
        parent::__construct();
    }

    /**
     * Show portfolio's list.
     *
     * @param string $slug
     *
     * @return response
     */
    protected function index()
    {
        $this->theme->asset()->container('footer')->add('atvimg', 'packages/atvImg/atvImg-min.js');
        $this->theme->asset()->container('footer')->add('isotop', 'packages/isotope/isotope.pkgd.min.js');

        $portfolios = $this->repository
            ->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioPublicCriteria())
            ->scopeQuery(function ($query) {
                return $query->with('category')->orderBy('title', 'ASC');
            })->all();

        $categories = $this->category
            ->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\CategoryPublicCriteria())
            ->scopeQuery(function ($query) {
                return $query->orderBy('name', 'ASC');
            })->all();

        return $this->theme->of('portfolio::public.portfolio.index', compact('portfolios', 'categories'))->render();
    }

    /**
     * Show portfolio.
     *
     * @param string $slug
     *
     * @return response
     */
    protected function show($slug)
    {
        $portfolio = $this->repository->scopeQuery(function ($query) use ($slug) {
            return $query->orderBy('id', 'DESC')
                ->where('slug', $slug);
        })->first(['*']);
        $this->category->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\CategoryPublicCriteria());
        $categories = $this->category->scopeQuery(function ($query) {
            return $query->orderBy('name', 'ASC');
        })->all();

        return $this->theme->of('portfolio::public.portfolio.show', compact('portfolio', 'categories'))->render();
    }
}
