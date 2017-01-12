<?php

namespace Lavalite\Task;

class Task
{
    /**
     * $task object.
     */
    protected $task;

    /**
     * Constructor.
     */
    public function __construct(\Lavalite\Task\Interfaces\TaskRepositoryInterface $task)
    {
        $this->task = $task;
    }

    /**
     * Display tasks of the user.
     *
     * @return Response
     */
    public function display($view)
    {
        return view('task::admin.task.' . $view);
    }

    /**
     * Returns count of tasks.
     *
     * @param array $filter
     *
     * @return int
     */
    public function count()
    {
        return $this->task->getCount();
    }

    public function completed()
    {
        return $this->task->completed();
    }

    public function todo()
    {
        return $this->task->todo();
    }

    public function tasks()
    {
        return $this->task->tasks();
    }

    /**
     * Returns gadgets.
     *
     * @param array $filter
     *
     * @return int
     */
    public function gadget($view = 'admin.task.gadget', $count = 10)
    {
        $tasks = $this->task->gadget($count);

        return view('task::' . $view, compact('tasks'))->render();
    }
}
