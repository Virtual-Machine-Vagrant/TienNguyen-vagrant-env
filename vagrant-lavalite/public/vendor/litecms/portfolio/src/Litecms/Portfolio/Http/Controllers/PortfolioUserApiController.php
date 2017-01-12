<?php

namespace Litecms\Portfolio\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Litecms\Portfolio\Http\Requests\PortfolioUserApiRequest;
use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;
use Litecms\Portfolio\Models\Portfolio;

/**
 * User API controller class.
 */
class PortfolioUserApiController extends BaseController
{
    /**
     * Initialize portfolio controller.
     *
     * @param type PortfolioRepositoryInterface $portfolio
     *
     * @return type
     */
    protected $guard = 'api';

    public function __construct(PortfolioRepositoryInterface $portfolio)
    {
        $this->middleware('api');
        $this->middleware('jwt.auth:api');
        $this->setupTheme(config('theme.themes.user.theme'), config('theme.themes.user.layout'));
         $this->repository = $portfolio;
        parent::__construct();
    }

    /**
     * Display a list of portfolio.
     *
     * @return json
     */
    public function index(PortfolioUserApiRequest $request)
    {
        $portfolios  = $this->repository
            ->pushCriteria(new \Lavalite\Portfolio\Repositories\Criteria\PortfolioUserCriteria())
            ->setPresenter('\\Litecms\\Portfolio\\Repositories\\Presenter\\PortfolioListPresenter')
            ->scopeQuery(function($query){
                return $query->orderBy('id','DESC');
            })->all();
        $portfolios['code'] = 2000;
        return response()->json($portfolios) 
            ->setStatusCode(200, 'INDEX_SUCCESS');

    }

    /**
     * Display portfolio.
     *
     * @param Request $request
     * @param Model   Portfolio
     *
     * @return Json
     */
    public function show(PortfolioUserApiRequest $request, Portfolio $portfolio)
    {

        if ($portfolio->exists) {
            $portfolio         = $portfolio->presenter();
            $portfolio['code'] = 2001;
            return response()->json($portfolio)
                ->setStatusCode(200, 'SHOW_SUCCESS');;
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }

    }

    /**
     * Show the form for creating a new portfolio.
     *
     * @param Request $request
     *
     * @return json
     */
    public function create(PortfolioUserApiRequest $request, Portfolio $portfolio)
    {
        $portfolio         = $portfolio->presenter();
        $portfolio['code'] = 2002;
        return response()->json($portfolio)
            ->setStatusCode(200, 'CREATE_SUCCESS');
    }

    /**
     * Create new portfolio.
     *
     * @param Request $request
     *
     * @return json
     */
    public function store(PortfolioUserApiRequest $request)
    {
        try {
            $attributes             = $request->all();
            $attributes['user_id']  = user_id('admin.api');
            $portfolio          = $this->repository->create($attributes);
            $portfolio          = $portfolio->presenter();
            $portfolio['code']  = 2004;

            return response()->json($portfolio)
                ->setStatusCode(201, 'STORE_SUCCESS');
        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 4004,
            ])->setStatusCode(400, 'STORE_ERROR');
        }

    }

    /**
     * Show portfolio for editing.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return json
     */
    public function edit(PortfolioUserApiRequest $request, Portfolio $portfolio)
    {
        if ($portfolio->exists) {
            $portfolio         = $portfolio->presenter();
            $portfolio['code'] = 2003;
            return response()-> json($portfolio)
                ->setStatusCode(200, 'EDIT_SUCCESS');;
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }
    }

    /**
     * Update the portfolio.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return json
     */
    public function update(PortfolioUserApiRequest $request, Portfolio $portfolio)
    {
        try {

            $attributes = $request->all();

            $portfolio->update($attributes);
            $portfolio         = $portfolio->presenter();
            $portfolio['code'] = 2005;

            return response()->json($portfolio)
                ->setStatusCode(201, 'UPDATE_SUCCESS');


        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 4005,
            ])->setStatusCode(400, 'UPDATE_ERROR');

        }
    }

    /**
     * Remove the portfolio.
     *
     * @param Request $request
     * @param Model   $portfolio
     *
     * @return json
     */
    public function destroy(PortfolioUserApiRequest $request, Portfolio $portfolio)
    {

        try {

            $t = $portfolio->delete();

            return response()->json([
                'message'  => trans('messages.success.delete', ['Module' => trans('portfolio::portfolio.name')]),
                'code'     => 2006
            ])->setStatusCode(202, 'DESTROY_SUCCESS');

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 4006,
            ])->setStatusCode(400, 'DESTROY_ERROR');
        }
    }
}
