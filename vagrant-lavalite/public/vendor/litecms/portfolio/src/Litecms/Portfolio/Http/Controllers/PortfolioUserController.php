<?php

namespace Litecms\Portfolio\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Litecms\Portfolio\Http\Requests\PortfolioUserRequest;
use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;
use Litecms\Portfolio\Models\Portfolio;

class PortfolioUserController extends BaseController
{

    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    protected $guard = 'web';

    /**
     * Initialize portfolio controller.
     *
     * @param type PortfolioRepositoryInterface $portfolio
     *
     * @return type
     */
    protected $home = 'home';

    public function __construct(PortfolioRepositoryInterface $portfolio)
    {
        $this->middleware('web');
        $this->middleware('auth:web');
        $this->middleware('auth.active:web');
        $this->setupTheme(config('theme.themes.user.theme'), config('theme.themes.user.layout'));
         $this->repository = $portfolio;
        parent::__construct();
    }

    /**
     * Display a listing of the resource.
     *
     * @return Response
     */
    public function index(PortfolioUserRequest $request)
    {
        $this->repository->pushCriteria(new \Litecms\Portfolio\Repositories\Criteria\PortfolioUserCriteria());
        $portfolios = $this->repository->scopeQuery(function ($query) {
            return $query->orderBy('id', 'DESC');
        })->paginate();

        $this->theme->prependTitle(trans('portfolio::portfolio.names') . ' :: ');

        return $this->theme->of('portfolio::user.portfolio.index', compact('portfolios'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     * @param Portfolio $portfolio
     *
     * @return Response
     */
    public function show(PortfolioUserRequest $request, Portfolio $portfolio)
    {
        Form::populate($portfolio);

        return $this->theme->of('portfolio::user.portfolio.show', compact('portfolio'))->render();
    }

    /**
     * Show the form for creating a new resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(PortfolioUserRequest $request)
    {

        $portfolio = $this->repository->newInstance([]);
        Form::populate($portfolio);

        return $this->theme->of('portfolio::user.portfolio.create', compact('portfolio'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(PortfolioUserRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id();
            $portfolio = $this->repository->create($attributes);

            return redirect(trans_url('/user/portfolio/portfolio'))
                ->with('message', trans('messages.success.created', ['Module' => trans('portfolio::portfolio.name')]))
                ->with('code', 201);

        } catch (Exception $e) {
            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);
        }
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param Request $request
     * @param Portfolio $portfolio
     *
     * @return Response
     */
    public function edit(PortfolioUserRequest $request, Portfolio $portfolio)
    {

        Form::populate($portfolio);

        return $this->theme->of('portfolio::user.portfolio.edit', compact('portfolio'))->render();
    }

    /**
     * Update the specified resource.
     *
     * @param Request $request
     * @param Portfolio $portfolio
     *
     * @return Response
     */
    public function update(PortfolioUserRequest $request, Portfolio $portfolio)
    {
        try {
            $attributes = $request->all();
            $attributes['published'] = 'No';
            $this->repository->update($attributes, $portfolio->getRouteKey());
            
            return redirect(trans_url('/user/portfolio/portfolio'))
                ->with('message', trans('messages.success.updated', ['Module' => trans('portfolio::portfolio.name')]))
                ->with('code', 204);

        } catch (Exception $e) {
            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);
        }
    }

    /**
     * Remove the specified resource.
     *
     * @param int $id
     *
     * @return Response
     */
    public function destroy(PortfolioUserRequest $request, Portfolio $portfolio)
    {
        try {
            $this->repository->delete($portfolio->getRouteKey());
            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('portfolio::portfolio.name')]),
                'code'     => 202,
                'redirect' => trans_url('/user/portfolio/portfolio'),
            ], 202);

        } catch (Exception $e) {

            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);

        }
    }
}
