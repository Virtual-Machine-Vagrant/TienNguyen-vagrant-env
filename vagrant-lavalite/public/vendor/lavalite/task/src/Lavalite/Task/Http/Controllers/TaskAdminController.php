<?php

namespace Lavalite\Task\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Lavalite\Task\Http\Requests\TaskAdminRequest;
use Lavalite\Task\Interfaces\TaskRepositoryInterface;
use Lavalite\Task\Models\Task;

/**
 * Admin web controller class.
 */
class TaskAdminController extends BaseController
{
    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    public $guard = 'admin.web';

    /**
     * The home page route of admin.
     *
     * @var string
     */
    public $home = 'admin';
    /**
     * Initialize task controller.
     *
     * @param type TaskRepositoryInterface $task
     *
     * @return type
     */
    public function __construct(TaskRepositoryInterface $task)
    {
        $this->repository = $task;
        $this->middleware('web');
        $this->middleware('auth:admin.web');
        $this->setupTheme(config('theme.themes.admin.theme'), config('theme.themes.admin.layout'));
        parent::__construct();
    }

    /**
     * Display a list of task.
     *
     * @return Response
     */
    public function index(TaskAdminRequest $request)
    {
        $tasks  = $this->repository
                ->setPresenter('\\Lavalite\\Task\\Repositories\\Presenter\\TaskListPresenter')
                ->scopeQuery(function ($query) {
                    return $query->orderBy('id', 'DESC');
                })->all();

        $this->theme->prependTitle(trans('task::task.names').' :: ');
        return $this->theme->of('task::admin.task.index', compact('tasks'))->render();
    }

    /**
     * Display task.
     *
     * @param Request $request
     * @param Model   $task
     *
     * @return Response
     */
    public function show(TaskAdminRequest $request, Task $task)
    {
        if (!$task->exists) {
            return response()->view('task::admin.task.new', compact('task'));
        }

        Form::populate($task);
        return response()->view('task::admin.task.show', compact('task'));
    }

    /**
     * Show the form for creating a new task.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(TaskAdminRequest $request)
    {

        $task = $this->repository->newInstance([]);

        Form::populate($task);

        return response()->view('task::admin.task.create', compact('task'));

    }

    /**
     * Create new task.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(TaskAdminRequest $request)
    {
        try {
            $attributes             = $request->all();
            $attributes['user_id']  = user_id('admin.web');
            $task          = $this->repository->create($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('task::task.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/task/task/'.$task->getRouteKey())
            ], 201);


        } catch (Exception $e) {
            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
            ], 400);
        }
    }

    /**
     * Show task for editing.
     *
     * @param Request $request
     * @param Model   $task
     *
     * @return Response
     */
    public function edit(TaskAdminRequest $request, Task $task)
    {
        Form::populate($task);
        return  response()->view('task::admin.task.edit', compact('task'));
    }

    /**
     * Update the task.
     *
     * @param Request $request
     * @param Model   $task
     *
     * @return Response
     */
    public function update(TaskAdminRequest $request, Task $task)
    {
        try {

            $attributes = $request->all();

            $task->update($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('task::task.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/task/task/'.$task->getRouteKey())
            ], 201);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/task/task/'.$task->getRouteKey()),
            ], 400);

        }
    }

    /**
     * Remove the task.
     *
     * @param Model   $task
     *
     * @return Response
     */
    public function destroy(TaskAdminRequest $request, Task $task)
    {

        try {

            $t = $task->delete();

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('task::task.name')]),
                'code'     => 202,
                'redirect' => trans_url('/admin/task/task'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/task/task/'.$task->getRouteKey()),
            ], 400);
        }
    }
}
