<?php

namespace Litecms\Block\Providers;

use Illuminate\Foundation\Support\Providers\RouteServiceProvider as ServiceProvider;
use Illuminate\Routing\Router;
use Litecms\Block\Models\Block;
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
    protected $namespace = 'Litecms\Block\Http\Controllers';

    /**
     * Define your route model bindings, pattern filters, etc.
     *
     * @param   \Illuminate\Routing\Router  $router
     * @return void
     */
    public function boot(Router $router)
    {
        parent::boot($router);

        if (Request::is('*/block/category/*')) {
            $router->bind('category', function ($id) {
                $category = $this->app->make('\Litecms\Block\Interfaces\CategoryRepositoryInterface');
                return $category->findorNew($id);
            });
        }

        if (Request::is('*/block/block/*')) {
            $router->bind('block', function ($id) {
                $block = $this->app->make('\Litecms\Block\Interfaces\BlockRepositoryInterface');
                return $block->findorNew($id);
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
