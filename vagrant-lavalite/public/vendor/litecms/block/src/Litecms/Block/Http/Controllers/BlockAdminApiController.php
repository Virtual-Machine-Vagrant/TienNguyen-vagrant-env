<?php

namespace Litecms\Block\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Litecms\Block\Http\Requests\BlockAdminApiRequest;
use Litecms\Block\Interfaces\BlockRepositoryInterface;
use Litecms\Block\Models\Block;

/**
 * Admin API controller class.
 */
class BlockAdminApiController extends BaseController
{

    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    protected $guard = 'admin.api';

    /**
     * Initialize block controller.
     *
     * @param type BlockRepositoryInterface $block
     *
     * @return type
     */
    public function __construct(BlockRepositoryInterface $block)
    {
        $this->middleware('api');
        $this->middleware('jwt.auth:admin.api');
        $this->setupTheme(config('theme.themes.admin.theme'), config('theme.themes.admin.layout'));
        $this->repository = $block;
        parent::__construct();
    }

    /**
     * Display a list of block.
     *
     * @return json
     */
    public function index(BlockAdminApiRequest $request)
    {
        $blocks = $this->repository
            ->setPresenter('\\Litecms\\Block\\Repositories\\Presenter\\BlockListPresenter')
            ->scopeQuery(function ($query) {
                return $query->orderBy('id', 'DESC');
            })->all();
        $blocks['code'] = 2000;
        return response()->json($blocks)
            ->setStatusCode(200, 'INDEX_SUCCESS');

    }

    /**
     * Display block.
     *
     * @param Request $request
     * @param Model   Block
     *
     * @return Json
     */
    public function show(BlockAdminApiRequest $request, Block $block)
    {
        $block = $block->presenter();
        $block['code'] = 2001;
        return response()->json($block)
            ->setStatusCode(200, 'SHOW_SUCCESS');

    }

    /**
     * Show the form for creating a new block.
     *
     * @param Request $request
     *
     * @return json
     */
    public function create(BlockAdminApiRequest $request, Block $block)
    {
        $block = $block->presenter();
        $block['code'] = 2002;
        return response()->json($block)
            ->setStatusCode(200, 'CREATE_SUCCESS');

    }

    /**
     * Create new block.
     *
     * @param Request $request
     *
     * @return json
     */
    public function store(BlockAdminApiRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id('admin.api');
            $block = $this->repository->create($attributes);
            $block = $block->presenter();
            $block['code'] = 2004;

            return response()->json($block)
                ->setStatusCode(201, 'STORE_SUCCESS');
        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 4004,
            ])->setStatusCode(400, 'STORE_ERROR');

        }
    }

    /**
     * Show block for editing.
     *
     * @param Request $request
     * @param Model   $block
     *
     * @return json
     */
    public function edit(BlockAdminApiRequest $request, Block $block)
    {
        $block = $block->presenter();
        $block['code'] = 2003;
        return response()->json($block)
            ->setStatusCode(200, 'EDIT_SUCCESS');
    }

    /**
     * Update the block.
     *
     * @param Request $request
     * @param Model   $block
     *
     * @return json
     */
    public function update(BlockAdminApiRequest $request, Block $block)
    {
        try {

            $attributes = $request->all();

            $block->update($attributes);
            $block = $block->presenter();
            $block['code'] = 2005;

            return response()->json($block)
                ->setStatusCode(201, 'UPDATE_SUCCESS');

        } catch (Exception $e) {

            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 4005,
            ])->setStatusCode(400, 'UPDATE_ERROR');

        }
    }

    /**
     * Remove the block.
     *
     * @param Request $request
     * @param Model   $block
     *
     * @return json
     */
    public function destroy(BlockAdminApiRequest $request, Block $block)
    {

        try {

            $t = $block->delete();

            return response()->json([
                'message' => trans('messages.success.delete', ['Module' => trans('block::block.name')]),
                'code'    => 2006,
            ])->setStatusCode(202, 'DESTROY_SUCCESS');

        } catch (Exception $e) {

            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 4006,
            ])->setStatusCode(400, 'DESTROY_ERROR');
        }
    }
}
