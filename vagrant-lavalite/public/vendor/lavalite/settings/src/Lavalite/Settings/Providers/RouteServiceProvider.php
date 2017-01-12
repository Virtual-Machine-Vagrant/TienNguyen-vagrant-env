<?php

namespace Lavalite\Settings\Providers;

use Illuminate\Foundation\Support\Providers\RouteServiceProvider as ServiceProvider;
use Illuminate\Routing\Router;
use Request;
use Lavalite\Settings\Models\Setting;

class RouteServiceProvider extends ServiceProvider
{
    /**
     * This namespace is applied to the controller routes in your routes file.
     *
     * In addition, it is set as the URL generator's root namespace.
     *
     * @var string
     */
    protected $namespace = 'Lavalite\Settings\Http\Controllers';

    /**
     * Define your route model bindings, pattern filters, etc.
     *
     * @param  \Illuminate\Routing\Router  $router
     * @return void
     */
    public function boot(Router $router)
    {
        parent::boot($router);
        if (Request::is('*admin/settings/*')) {
            $router->bind('setting', function ($id) {
                $settings = $this->app->make('\Lavalite\Settings\Interfaces\SettingRepositoryInterface');
                return $settings->find($id);
            });
        }

    }

    /**
     * Define the routes for the application.
     *
     * @param \Illuminate\Routing\Router $router
     *
     * @return void
     */
    public function map(Router $router)
    {
        $router->group(['namespace' => $this->namespace], function ($router) {
            require __DIR__.'/../Http/routes.php';
        });
    }
}
