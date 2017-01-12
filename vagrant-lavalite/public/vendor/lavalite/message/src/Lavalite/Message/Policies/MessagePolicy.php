<?php

namespace Lavalite\Message\Policies;

use App\User;
use Illuminate\Auth\Access\HandlesAuthorization;
use Lavalite\Message\Models\Message;

class MessagePolicy
{
    use HandlesAuthorization;

    /**
     * Determine if the given user can view the message.
     *
     * @param User $user
     * @param Message $message
     *
     * @return bool
     */
    public function view(User $user, Message $message)
    {
        if ($user->canDo('message.message.view') && $user->is('admin')) {
            return true;
        }

        return $user->id === $message->user_id;
    }

    /**
     * Determine if the given user can create a message.
     *
     * @param User $user
     * @param Message $message
     *
     * @return bool
     */
    public function create(User $user)
    {
        return  $user->canDo('message.message.create');
    }

    /**
     * Determine if the given user can update the given message.
     *
     * @param User $user
     * @param Message $message
     *
     * @return bool
     */
    public function update(User $user, Message $message)
    {
        if ($user->canDo('message.message.update') && $user->is('admin')) {
            return true;
        }

        return $user->id === $message->user_id;
    }

    /**
     * Determine if the given user can delete the given message.
     *
     * @param User $user
     * @param Message $message
     *
     * @return bool
     */
    public function destroy(User $user, Message $message)
    {
        if ($user->canDo('message.message.delete') && $user->is('admin')) {
            return true;
        }

        return $user->id === $message->user_id;
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
