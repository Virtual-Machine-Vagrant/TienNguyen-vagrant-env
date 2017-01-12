<?php

namespace Litecms\Portfolio\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Litecms\Portfolio\Http\Requests\PortfolioAdminRequest;
use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;
use Litecms\Portfolio\Models\Portfolio;

/**
 * Admin web controller class.
 */
class PortfolioAdminController extends BaseController
{
    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    public $guard = 'admin.web';

    /**
     * Initialize portfolio controller.
     *
     * @param type PortfolioRepositoryInterface $portfolio
     *
     * @return type
     */
    public $home = 'admin';

    public function __construct(PortfolioRepositoryInterface $portfolio)
    {
        $this->middleware('web');
        $this->middleware('auth:admin.web');
        $this->setupTheme(config('theme.themes.admin.theme'), config('theme.themes.admin.layout'));
        $this->repository = $portfolio;
        parent::__construct();
    }

    /**
     * Display a list of portfolio.
     *
     * @return Response
     */
    public function index(PortfolioAdminRequest $request)
    {
        $pageLimit = $request->input('pageLimit');

        if ($request->wantsJson()) {
            $portfolios = $this->repository
                ->setPresenter('\\Litecms\\Portfolio\\Repositories\\Presenter\\PortfolioListPresenter')
                ->scopeQuery(function ($query) {
                    return $query->orderBy('title');
                })->paginate($pageLimit);

            $portfolios['recordsTotal'] = $portfolios['meta']['pagination']['total'];
            $portfolios['recordsFiltered'] = $portfolios['meta']['pagination']['total'];
            $portfolios['request'] = $request->all();
            return response()->json($portfolios, 200);

        }

        $this->theme->prependTitle(trans('portfolio::portfolio.names') . ' :: ');
        return $this->theme->of('portfolio::admin.portfolio.index')->render();
    }

    /**
     * Display portfolio.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return Response
     */
    public function show(PortfolioAdminRequest $request, Portfolio $portfolio)
    {

        if (!$portfolio->exists) {
            return response()->view('portfolio::admin.portfolio.new', compact('portfolio'));
        }

        Form::populate($portfolio);
        return response()->view('portfolio::admin.portfolio.show', compact('portfolio'));
    }

    /**
     * Show the form for creating a new portfolio.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(PortfolioAdminRequest $request)
    {

        $portfolio = $this->repository->newInstance([]);

        Form::populate($portfolio);

        return response()->view('portfolio::admin.portfolio.create', compact('portfolio'));

    }

    /**
     * Create new portfolio.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(PortfolioAdminRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id('admin.web');
            $portfolio = $this->repository->create($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('portfolio::portfolio.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/portfolio/portfolio/' . $portfolio->getRouteKey()),
            ], 201);

        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 400,
            ], 400);
        }

    }

    /**
     * Show portfolio for editing.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return Response
     */
    public function edit(PortfolioAdminRequest $request, Portfolio $portfolio)
    {
        Form::populate($portfolio);
        return response()->view('portfolio::admin.portfolio.edit', compact('portfolio'));
    }

    /**
     * Update the portfolio.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return Response
     */
    public function update(PortfolioAdminRequest $request, Portfolio $portfolio)
    {
        try {

            $attributes = $request->all();
            $portfolio->update($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('portfolio::portfolio.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/portfolio/portfolio/' . $portfolio->getRouteKey()),
            ], 201);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/portfolio/portfolio/' . $portfolio->getRouteKey()),
            ], 400);

        }

    }

    /**
     * Remove the portfolio.
     *
     * @param Model   $portfolio
     *
     * @return Response
     */
    public function destroy(PortfolioAdminRequest $request, Portfolio $portfolio)
    {

        try {

            $t = $portfolio->delete();

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('portfolio::portfolio.name')]),
                'code'     => 202,
                'redirect' => trans_url('/admin/portfolio/portfolio/0'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/portfolio/portfolio/' . $portfolio->getRouteKey()),
            ], 400);
        }

    }

}
