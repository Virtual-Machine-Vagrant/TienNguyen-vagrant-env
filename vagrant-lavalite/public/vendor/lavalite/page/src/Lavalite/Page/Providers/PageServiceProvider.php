<?php

namespace Lavalite\Page\Providers;

use Illuminate\Support\ServiceProvider;
use Lavalite\Page\Models\Page;

class PageServiceProvider extends ServiceProvider
{
    /**
     * Indicates if loading of the provider is deferred.
     *
     * @var bool
     */
    protected $defer = false;

    /**
     * Bootstrap the application events.
     */
    public function boot()
    {

        $this->loadViewsFrom(__DIR__.'/../../../../resources/views', 'page');

        $this->loadTranslationsFrom(__DIR__.'/../../../../resources/lang', 'page');

        $this->publishResources();
    }

    /**
     * Register the service provider.
     */
    public function register()
    {
        $this->app->bind('page', function ($app) {
            return $this->app->make('Lavalite\Page\Page');
        });

        $this->app->bind(
            \Lavalite\Page\Interfaces\PageRepositoryInterface::class,
            \Lavalite\Page\Repositories\Eloquent\PageRepository::class
        );

        $this->app->register(\Lavalite\Page\Providers\AuthServiceProvider::class);
        $this->app->register(\Lavalite\Page\Providers\EventServiceProvider::class);
        $this->app->register(\Lavalite\Page\Providers\RouteServiceProvider::class);
    }

    /**
     * Get the services provided by the provider.
     *
     * @return array
     */
    public function provides()
    {
        return ['page'];
    }

    /**
     * Publish configuration file.
     */
    private function publishResources()
    {
        // Publish configuration file
        $this->publishes([__DIR__.'/../../../../config/config.php' => config_path('package/page.php')], 'config');

        // Publish public view
        $this->publishes([__DIR__.'/../../../../resources/views/public' => base_path('resources/views/vendor/page/public')], 'view-public');

        // Publish admin view
        $this->publishes([__DIR__.'/../../../../resources/views/admin' => base_path('resources/views/vendor/page/admin')], 'view-admin');

        // Publish language files
        $this->publishes([__DIR__.'/../../../../resources/lang' => base_path('resources/lang/vendor/page')], 'lang');

        // Publish migrations
        $this->publishes([__DIR__.'/../../../../database/migrations' => base_path('database/migrations')], 'migrations');

        // Publish seeds
        $this->publishes([__DIR__.'/../../../../database/seeds' => base_path('database/seeds')], 'seeds');
    }

}
