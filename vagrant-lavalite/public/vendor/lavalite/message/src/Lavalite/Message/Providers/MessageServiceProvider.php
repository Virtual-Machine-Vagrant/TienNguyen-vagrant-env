<?php

namespace Lavalite\Message\Providers;

use Illuminate\Support\ServiceProvider;

class MessageServiceProvider extends ServiceProvider
{
    /**
     * Indicates if loading of the provider is deferred.
     *
     * @var bool
     */
    protected $defer = false;

    /**
     * Bootstrap the application events.
     *
     * @return void
     */
    public function boot()
    {
        // Load view
        $this->loadViewsFrom(__DIR__ . '/../../../../resources/views', 'message');

        // Load translation
        $this->loadTranslationsFrom(__DIR__ . '/../../../../resources/lang', 'message');

        // Call pblish redources function
        $this->publishResources();

        include __DIR__ . '/../Http/routes.php';
    }

    /**
     * Register the service provider.
     *
     * @return void
     */
    public function register()
    {
        // Bind facade
        $this->app->bind('message', function ($app) {
            return $this->app->make('Lavalite\Message\Message');
        });

        // Bind Message to repository
        $this->app->bind(
            \Lavalite\Message\Interfaces\MessageRepositoryInterface::class,
            \Lavalite\Message\Repositories\Eloquent\MessageRepository::class
        );

        $this->app->register(\Lavalite\Message\Providers\AuthServiceProvider::class);
        $this->app->register(\Lavalite\Message\Providers\EventServiceProvider::class);
        $this->app->register(\Lavalite\Message\Providers\RouteServiceProvider::class);
    }

    /**
     * Get the services provided by the provider.
     *
     * @return array
     */
    public function provides()
    {
        return ['message'];
    }

    /**
     * Publish resources.
     *
     * @return void
     */
    private function publishResources()
    {
        // Publish configuration file
        $this->publishes([__DIR__ . '/../../../../config/config.php' => config_path('package/message.php')], 'config');

        // Publish admin view
        $this->publishes([__DIR__ . '/../../../../resources/views' => base_path('resources/views/vendor/message')], 'view');

        // Publish language files
        $this->publishes([__DIR__ . '/../../../../resources/lang' => base_path('resources/lang/vendor/message')], 'lang');

        // Publish migrations
        $this->publishes([__DIR__ . '/../../../../database/migrations/' => base_path('database/migrations')], 'migrations');

        // Publish seeds
        $this->publishes([__DIR__ . '/../../../../database/seeds/' => base_path('database/seeds')], 'seeds');
    }
}
