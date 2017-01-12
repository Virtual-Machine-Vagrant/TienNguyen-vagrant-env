<?php

namespace Litecms\Portfolio\Facades;

use Illuminate\Support\Facades\Facade;

class Portfolio extends Facade
{
    /**
     * Get the registered name of the component.
     *
     * @return string
     */
    protected static function getFacadeAccessor()
    {
        return 'portfolio';
    }
}
