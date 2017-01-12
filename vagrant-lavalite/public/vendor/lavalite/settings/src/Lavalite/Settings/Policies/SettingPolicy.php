<?php

namespace Lavalite\Settings\Policies;

use App\User;
use Illuminate\Auth\Access\HandlesAuthorization;
use Lavalite\Settings\Models\Setting;

class SettingPolicy
{
    use HandlesAuthorization;

    /**
     * Determine if the given user can view the settings.
     *
     * @param User $user
     * @param Settings $settings
     *
     * @return bool
     */
    public function view(User $user, Setting $settings)
    {
        if ($user->canDo('settings.setting.view')) {
            return true;
        }

        return $user->id === $settings->user_id;
    }

    /**
     * Determine if the given user can create a settings.
     *
     * @param User $user
     * @param Settings $settings
     *
     * @return bool
     */
    public function create(User $user)
    {
        return  $user->canDo('settings.setting.create');
    }

    /**
     * Determine if the given user can update the given settings.
     *
     * @param User $user
     * @param Settings $settings
     *
     * @return bool
     */
    public function update(User $user, Setting $settings)
    {
        if ($user->canDo('settings.setting.update')) {
            return true;
        }

        return $user->id === $settings->user_id;
    }

    /**
     * Determine if the given user can delete the given settings.
     *
     * @param User $user
     * @param Settings $settings
     *
     * @return bool
     */
    public function destroy(User $user, Setting $settings)
    {
        if ($user->canDo('settings.setting.delete')) {
            return true;
        }

        return $user->id === $settings->user_id;
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
