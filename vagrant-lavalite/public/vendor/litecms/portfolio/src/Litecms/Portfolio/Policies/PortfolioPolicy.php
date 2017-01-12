<?php

namespace Litecms\Portfolio\Policies;

use App\User;
use Illuminate\Auth\Access\HandlesAuthorization;
use Litecms\Portfolio\Models\Portfolio;

class PortfolioPolicy
{
    use HandlesAuthorization;

    /**
     * Determine if the given user can view the portfolio.
     *
     * @param User $user
     * @param Portfolio $portfolio
     *
     * @return bool
     */
    public function view(User $user, Portfolio $portfolio)
    {
        if ($user->canDo('portfolio.portfolio.view') && $user->is('admin')) {
            return true;
        }

        return $user->id === $portfolio->user_id;
    }

    /**
     * Determine if the given user can create a portfolio.
     *
     * @param User $user
     * @param Portfolio $portfolio
     *
     * @return bool
     */
    public function create(User $user)
    {
        return  $user->canDo('portfolio.portfolio.create');
    }

    /**
     * Determine if the given user can update the given portfolio.
     *
     * @param User $user
     * @param Portfolio $portfolio
     *
     * @return bool
     */
    public function update(User $user, Portfolio $portfolio)
    {
        if ($user->canDo('portfolio.portfolio.update') && $user->is('admin')) {
            return true;
        }

        return $user->id === $portfolio->user_id;
    }

    /**
     * Determine if the given user can delete the given portfolio.
     *
     * @param User $user
     * @param Portfolio $portfolio
     *
     * @return bool
     */
    public function destroy(User $user, Portfolio $portfolio)
    {
        if ($user->canDo('portfolio.portfolio.delete') && $user->is('admin')) {
            return true;
        }

        return $user->id === $portfolio->user_id;
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
