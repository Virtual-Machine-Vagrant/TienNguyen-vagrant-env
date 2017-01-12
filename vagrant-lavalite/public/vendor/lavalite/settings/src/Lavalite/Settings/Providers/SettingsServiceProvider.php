<?php

namespace Lavalite\Settings\Providers;

use Illuminate\Support\ServiceProvider;

class SettingsServiceProvider extends ServiceProvider
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
        $this->loadViewsFrom(__DIR__ . '/../../../../resources/views', 'settings');
        $this->loadTranslationsFrom(__DIR__ . '/../../../../resources/lang', 'settings');

        $this->publishResources();

    }

    /**
     * Register the service provider.
     *
     * @return void
     */
    public function register()
    {
        $this->app->bind('settings', function ($app) {
            return $this->app->make('Lavalite\Settings\Settings');
        });

        $this->app->bind(
            \Lavalite\Settings\Interfaces\SettingRepositoryInterface::class,
            \Lavalite\Settings\Repositories\Eloquent\SettingRepository::class
        );

        $this->app->register(\Lavalite\Settings\Providers\AuthServiceProvider::class);
        $this->app->register(\Lavalite\Settings\Providers\EventServiceProvider::class);
        $this->app->register(\Lavalite\Settings\Providers\RouteServiceProvider::class);

    }

    /**
     * Get the services provided by the provider.
     *
     * @return array
     */
    public function provides()
    {
        return ['settings'];
    }

    /**
     * Publish resources.
     *
     * @return  void
     */
    private function publishResources()
    {
        // Publish configuration file
        $this->publishes([__DIR__ . '/../../../../config/config.php' => config_path('package/settings.php')], 'config');

        // Publish public view
        $this->publishes([__DIR__ . '/../../../../resources/views/public' => base_path('resources/views/vendor/settings/public')], 'view-public');

        // Publish admin view
        $this->publishes([__DIR__ . '/../../../../resources/views/admin' => base_path('resources/views/vendor/settings/admin')], 'view-admin');

        // Publish language files
        $this->publishes([__DIR__ . '/../../../../resources/lang' => base_path('resources/lang/vendor/settings')], 'lang');

        // Publish migrations
        $this->publishes([__DIR__ . '/../../../../database/migrations' => base_path('database/migrations')], 'migrations');

        // Publish seeds
        $this->publishes([__DIR__ . '/../../../../database/seeds' => base_path('database/seeds')], 'seeds');
    }

}
