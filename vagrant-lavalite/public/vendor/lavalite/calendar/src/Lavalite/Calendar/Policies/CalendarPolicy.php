<?php

namespace Lavalite\Calendar\Policies;

use App\User;
use Illuminate\Auth\Access\HandlesAuthorization;
use Lavalite\Calendar\Models\Calendar;

class CalendarPolicy
{
    use HandlesAuthorization;

    /**
     * Determine if the given user can view the calendar.
     *
     * @param User $user
     * @param Calendar $calendar
     *
     * @return bool
     */
    public function view(User $user, Calendar $calendar)
    {
        if ($user->canDo('calendar.calendar.view') && $user->is('admin')) {
            return true;
        }

        return $user->id === $calendar->user_id;
    }

    /**
     * Determine if the given user can create a calendar.
     *
     * @param User $user
     * @param Calendar $calendar
     *
     * @return bool
     */
    public function create(User $user)
    {
        return  $user->canDo('calendar.calendar.create');
    }

    /**
     * Determine if the given user can update the given calendar.
     *
     * @param User $user
     * @param Calendar $calendar
     *
     * @return bool
     */
    public function update(User $user, Calendar $calendar)
    {
        if ($user->canDo('calendar.calendar.update') && $user->is('admin')) {
            return true;
        }

        return $user->id === $calendar->user_id;
    }

    /**
     * Determine if the given user can delete the given calendar.
     *
     * @param User $user
     * @param Calendar $calendar
     *
     * @return bool
     */
    public function destroy(User $user, Calendar $calendar)
    {
        if ($user->canDo('calendar.calendar.delete') && $user->is('admin')) {
            return true;
        }

        return $user->id === $calendar->user_id;
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
