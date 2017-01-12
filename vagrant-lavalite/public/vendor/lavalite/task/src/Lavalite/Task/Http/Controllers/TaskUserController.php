<?php

namespace Lavalite\Task\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Lavalite\Task\Http\Requests\TaskUserRequest;
use Lavalite\Task\Interfaces\TaskRepositoryInterface;
use Lavalite\Task\Models\Task;

class TaskUserController extends BaseController
{

    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    protected $guard = 'web';

    /**
     * The home page route of user.
     *
     * @var string
     */
    protected $home = 'home';

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
        $this->middleware('auth:web');
        $this->middleware('auth.active:web');
        $this->setupTheme(config('theme.themes.user.theme'), config('theme.themes.user.layout'));
        parent::__construct();
    }

    /**
     * Display a listing of the resource.
     *
     * @return Response
     */
    public function index(TaskUserRequest $request)
    {
        $this->theme->asset()->container('footer')->add('jquery-ui', 'packages/jquery-ui/jquery-ui.js');

        $tasks  = $this->repository
                ->pushCriteria(new \Lavalite\Task\Repositories\Criteria\TaskUserCriteria())
                ->setPresenter('\\Lavalite\\Task\\Repositories\\Presenter\\TaskListPresenter')
                ->scopeQuery(function ($query) {
                    return $query->orderBy('id', 'DESC');
                })->all();

        $this->theme->prependTitle(trans('task::task.names').' :: ');

        return $this->theme->of('task::user.task.index', compact('tasks'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     * @param Task $task
     *
     * @return Response
     */
    public function show(TaskUserRequest $request, Task $task)
    {
        Form::populate($task);

        return $this->theme->of('task::user.task.show', compact('task'))->render();
    }

    /**
     * Show the form for creating a new resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(TaskUserRequest $request)
    {

        $task = $this->repository->newInstance([]);
        Form::populate($task);

        return $this->theme->of('task::user.task.create', compact('task'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(TaskUserRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id();
            $task = $this->repository->create($attributes);

            return redirect(trans_url('/user/task/task'))
                -> with('message', trans('messages.success.created', ['Module' => trans('task::task.name')]))
                -> with('code', 201);

        } catch (Exception $e) {
            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);
        }
    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param Request $request
     * @param Task $task
     *
     * @return Response
     */
    public function edit(TaskUserRequest $request, Task $task)
    {

        Form::populate($task);

        return $this->theme->of('task::user.task.edit', compact('task'))->render();
    }

    /**
     * Update the specified resource.
     *
     * @param Request $request
     * @param Task $task
     *
     * @return Response
     */
    public function update(TaskUserRequest $request, Task $task)
    {
        try {
            $this->repository->update($request->all(), $task->getRouteKey());

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('task::task.name')]),
                'code'     => 204,
                'redirect' => trans_url('/user/task/task/')
            ], 201);
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
    public function destroy(TaskUserRequest $request, Task $task)
    {
        try {
            $this->repository->delete($task->getRouteKey());
            return redirect(trans_url('/user/task/task'))
                ->with('message', trans('messages.success.deleted', ['Module' => trans('task::task.name')]))
                ->with('code', 204);

        } catch (Exception $e) {

            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);

        }
    }
}
