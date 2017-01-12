<?php

return [

    /**
     * Provider.
     */
    'provider'  => 'litecms',

    /*
     * Package.
     */
    'package'   => 'portfolio',

    /*
     * Modules.
     */
    'modules'   => [
        'portfolio',
        'category',
    ],
    /*
     * Image size.
     */
    'image'     => [

        'sm' => [
            'width'     => '150',
            'height'    => '150',
            'action'    => 'fit',
            'watermark' => 'img/logo/default.png',
        ],

        'md' => [
            'width'     => '370',
            'height'    => '420',
            'action'    => 'fit',
            'watermark' => 'img/logo/default.png',
        ],

        'lg' => [
            'width'     => '430',
            'height'    => '430',
            'action'    => 'fit',
            'watermark' => 'img/logo/default.png',
        ],

    ],

    'portfolio' => [
        'model'         => 'Litecms\Portfolio\Models\Portfolio',
        'table'         => 'portfolios',
        'presenter'     => \Litecms\Portfolio\Repositories\Presenter\PortfolioItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'name'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'upload_folder', 'title', 'details', 'category_id', 'image', 'images', 'status'],
        'translate'     => [],

        'upload-folder' => '/uploads/portfolio/portfolio',
        'uploads'       => [
            'single'   => ['image'],
            'multiple' => ['images'],
        ],
        'casts'         => [
            'image'  => 'array',
            'images' => 'array',
        ],
        'revision'      => [],
        'perPage'       => '20',
        'search'        => [
            'name' => 'like',
            'status',
        ],
    ],
    'category'  => [
        'model'         => 'Litecms\Portfolio\Models\Category',
        'table'         => 'portfolio_categories',
        'presenter'     => \Litecms\Portfolio\Repositories\Presenter\CategoryItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'name'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'name', 'status'],
        'translate'     => [],

        'upload-folder' => '/uploads/portfolio/category',
        'uploads'       => [
            'single'   => ['image'],
            'multiple' => ['images'],
        ],
        'casts'         => [
            'image'  => 'array',
            'images' => 'array',
        ],
        'revision'      => [],
        'perPage'       => '20',
        'search'        => [
            'title' => 'like',
            'status',
        ],
    ],
];
