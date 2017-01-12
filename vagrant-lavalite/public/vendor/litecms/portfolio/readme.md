This is a Laravel 5 package that provides portfolio management facility for lavalite framework.

## Installation

Begin by installing this package through Composer. Edit your project's `composer.json` file to require `litecms/portfolio`.

    "litecms/portfolio": "dev-master"

Next, update Composer from the Terminal:

    composer update

Once this operation completes execute below cammnds in command line to finalize installation.

```php
Litecms\Portfolio\Providers\PortfolioServiceProvider::class,

```

And also add it to alias

```php
'Portfolio'  => Litecms\Portfolio\Facades\Portfolio::class,
```

Use the below commands for publishing

Migration and seeds

    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="migrations"
    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="seeds"

Configuration

    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="config"

Language files

    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="lang"

Views files

    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="views"
    

Public folders

    php artisan vendor:publish --provider="Litecms\Portfolio\Providers\PortfolioServiceProvider" --tag="public"

## Usage


