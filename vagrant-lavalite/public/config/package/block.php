<?php

return [

    /**
     * Provider.
     */
    'provider' => 'lavalite',

    /*
     * Package.
     */
    'package'  => 'block',

    /*
     * Modules.
     */
    'modules'  => ['category',
        'block'],

    /*
     * Image size.
     */
    'image'    => [

        'sm' => [
            'width'     => '140',
            'height'    => '140',
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
            'width'     => '780',
            'height'    => '497',
            'action'    => 'fit',
            'watermark' => 'img/logo/default.png',
        ],
        'xl' => [
            'width'     => '800',
            'height'    => '530',
            'action'    => 'fit',
            'watermark' => 'img/logo/default.png',
        ],

    ],

    'category' => [
        'model'         => 'Litecms\Block\Models\Category',
        'table'         => 'block_categories',
        'presenter'     => \Litecms\Block\Repositories\Presenter\CategoryItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'name'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'name', 'status', 'upload_folder'],
        'translate'     => [],

        'upload-folder' => '/uploads/block/category',
        'uploads'       => [
            'single'   => [],
            'multiple' => [],
        ],
        'casts'         => [
        ],
        'revision'      => [],
        'perPage'       => '20',
        'search'        => [
            'name' => 'like',
            'status',
        ],
    ],
    'block'    => [
        'model'         => 'Litecms\Block\Models\Block',
        'table'         => 'blocks',
        'presenter'     => \Litecms\Block\Repositories\Presenter\BlockItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'name'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'category_id', 'name', 'url', 'description', 'status', 'image', 'images', 'upload_folder'],
        'translate'     => [],

        'upload-folder' => '/uploads/block/block',
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
];
