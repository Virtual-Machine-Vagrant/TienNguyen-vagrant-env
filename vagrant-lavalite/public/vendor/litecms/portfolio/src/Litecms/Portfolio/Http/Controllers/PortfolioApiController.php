<?php

namespace Litecms\Portfolio\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;
use Litecms\Portfolio\Repositories\Presenter\PortfolioItemTransformer;

/**
 * Pubic API controller class.
 */
class PortfolioApiController extends BaseController
{
     /**
     * Constructor.
     *
     * @param type \Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface $portfolio
     *
     * @return type
     */
    public function __construct(PortfolioRepositoryInterface $portfolio)
    {
        $this->middleware('api');
         $this->repository = $portfolio;
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
        $portfolios = $this->repository
            ->setPresenter('\\Litecms\\Portfolio\\Repositories\\Presenter\\PortfolioListPresenter')
            ->scopeQuery(function($query){
                return $query->orderBy('id','DESC');
            })->paginate();

        $portfolios['code'] = 2000;
        return response()->json($portfolios)
                ->setStatusCode(200, 'INDEX_SUCCESS');
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
        $portfolio = $this->repository
            ->scopeQuery(function($query) use ($slug) {
            return $query->orderBy('id','DESC')
                         ->where('slug', $slug);
        })->first(['*']);

        if (!is_null($portfolio)) {
            $portfolio         = $this->itemPresenter($module, new PortfolioItemTransformer);
            $portfolio['code'] = 2001;
            return response()->json($portfolio)
                ->setStatusCode(200, 'SHOW_SUCCESS');
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }

    }
}
