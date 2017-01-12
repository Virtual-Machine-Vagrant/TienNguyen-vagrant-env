<?php

namespace Litecms\Portfolio\Providers;

use Illuminate\Contracts\Auth\Access\Gate as GateContract;
use Illuminate\Foundation\Support\Providers\AuthServiceProvider as ServiceProvider;

class AuthServiceProvider extends ServiceProvider
{
    /**
     * The policy mappings for the package.
     *
     * @var array
     */
    protected $policies = [
        // Bind Portfolio policy
        \Litecms\Portfolio\Models\Portfolio::class => \Litecms\Portfolio\Policies\PortfolioPolicy::class,
// Bind Category policy
        \Litecms\Portfolio\Models\Category::class => \Litecms\Portfolio\Policies\CategoryPolicy::class,
    ];

    /**
     * Register any package authentication / authorization services.
     *
     * @param \Illuminate\Contracts\Auth\Access\Gate $gate
     *
     * @return void
     */
    public function boot(GateContract $gate)
    {
        parent::registerPolicies($gate);
    }
}
