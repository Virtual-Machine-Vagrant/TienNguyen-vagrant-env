<?php

namespace Lavalite\Message\Providers;

use Illuminate\Foundation\Support\Providers\RouteServiceProvider as ServiceProvider;
use Illuminate\Routing\Router;
use Lavalite\Message\Models\Message;
use Request;

class RouteServiceProvider extends ServiceProvider
{
    /**
     * This namespace is applied to the controller routes in your routes file.
     *
     * In addition, it is set as the URL generator's root namespace.
     *
     * @var string
     */
    protected $namespace = 'Lavalite\Message\Http\Controllers';

    /**
     * Define your route model bindings, pattern filters, etc.
     *
     * @param   \Illuminate\Routing\Router  $router
     * @return void
     */
    public function boot(Router $router)
    {
        parent::boot($router);

        if (Request::is('*/message/message/*')) {
            $router->bind('message', function ($id) {
                $message = $this->app->make('\Lavalite\Message\Interfaces\MessageRepositoryInterface');
                return $message->findorNew($id);
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
            require __DIR__ . '/../Http/routes.php';
        });
    }
}
