<?php

namespace Litecms\Portfolio;

class Portfolio
{
    /**
     * $portfolio object.
     */
    protected $portfolio;
    /**
     * $category object.
     */
    protected $category;

    /**
     * Constructor.
     */
    public function __construct(\Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface $portfolio,
        \Litecms\Portfolio\Interfaces\CategoryRepositoryInterface                              $category) {
        $this->portfolio = $portfolio;
        $this->category = $category;
    }

    /**
     * Returns count of portfolio.
     *
     * @param array $filter
     *
     * @return int
     */
    public function count($type)
    {
        $portfolios = $this->$type->all();
        return count($portfolios);
    }

    /**
     * Returns category of portfolio.
     * @return array
     */
    public function getCategory()
    {
        $array = [];
        $categories = $this->category->scopeQuery(function ($query) {
            return $query->orderBy('name')->whereStatus('show');
        })->all();

        foreach ($categories as $key => $category) {
            $array[$category['id']] = ucfirst($category['name']);
        }

        return $array;

    }

    /**
     * get categories for public side
     * @param type|string $view
     * @return type
     */
    public function viewCategories()
    {
        $this->portfolio->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\CategoryPublicCriteria());
        $categories = $this->category->scopeQuery(function ($query) {
            return $query->orderBy('name');
        })->all();

        return view('portfolio::public.category.index', compact('categories'))->render();
    }

    /**
     * get related portfolios
     * @param category_id
     * @return array
     */
    public function getRelated($cid)
    {
        $this->portfolio->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioPublicCriteria());
        $portfolios = $this->portfolio->scopeQuery(function ($query) use ($cid) {
            return $query->orderBy('id', 'DESC')->whereCategory_id($cid)->take(2);
        })->all();

        return $portfolios;
    }

    /**
     * get related portfolios
     * @param category_id
     * @return array
     */
    public function recentPortfolio()
    {
        $this->portfolio->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioPublicCriteria());
        $portfolios = $this->portfolio->scopeQuery(function ($query) {
            return $query->orderBy('id', 'DESC')->take(5);
        })->all();

        return $portfolios;
    }

    /**
     * get related portfolios
     * @param category_id
     * @return array
     */
    public function getCount($cid)
    {
        $this->portfolio->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioPublicCriteria());
        $portfolios = $this->portfolio->scopeQuery(function ($query) use ($cid) {
            return $query->orderBy('id', 'DESC')->whereCategory_id($cid);
        })->all();

        return count($portfolios);
    }

    /**
     * Returns count of portfolio.
     *
     * @param array $filter
     *
     * @return int
     */
    public function countPortfolios()
    {
        $this->portfolio->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioPublicCriteria());
        $portfolios = $this->portfolio->scopeQuery(function ($query) {
            return $query->whereStatus('Show');
        })->all();
        return count($portfolios);
    }

}
