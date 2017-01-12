<?php

namespace Lavalite\Task\Policies;

use App\User;
use Illuminate\Auth\Access\HandlesAuthorization;
use Lavalite\Task\Models\Task;

class TaskPolicy
{
    use HandlesAuthorization;

    /**
     * Determine if the given user can view the task.
     *
     * @param User $user
     * @param Task $task
     *
     * @return bool
     */
    public function view(User $user, Task $task)
    {
        if ($user->canDo('task.task.view') && $user->is('admin')) {
            return true;
        }

        return $user->id === $task->user_id;
    }

    /**
     * Determine if the given user can create a task.
     *
     * @param User $user
     * @param Task $task
     *
     * @return bool
     */
    public function create(User $user)
    {
        return  $user->canDo('task.task.create');
    }

    /**
     * Determine if the given user can update the given task.
     *
     * @param User $user
     * @param Task $task
     *
     * @return bool
     */
    public function update(User $user, Task $task)
    {
        if ($user->canDo('task.task.update') && $user->is('admin')) {
            return true;
        }

        return $user->id === $task->user_id;
    }

    /**
     * Determine if the given user can delete the given task.
     *
     * @param User $user
     * @param Task $task
     *
     * @return bool
     */
    public function destroy(User $user, Task $task)
    {
        if ($user->canDo('task.task.delete') && $user->is('admin')) {
            return true;
        }

        return $user->id === $task->user_id;
    }

    /**
     * Determine if the user can perform a given action ve.
     *
     * @param [type] $user    [description]
     * @param [type] $ability [description]
     *
     * @return [type] [description]
     */
    public function before($user, $ability)
    {
        if ($user->isSuperUser()) {
            return true;
        }
    }
}
