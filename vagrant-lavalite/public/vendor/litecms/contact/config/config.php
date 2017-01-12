<?php

return [

    /**
     * Provider.
     */
    'provider' => 'litecms',

    /*
     * Package.
     */
    'package'  => 'contact',

    /*
     * Contact mail address should be send to.
     */
    'to'       => 'info@lavalite.org',

    /*
     * CC for contact us mail.
     */
    'cc'       => 'info@lavalite.org',

    /*
     * Modules.
     */
    'modules'  => ['contact'],

    'contact'  => [
        'model'         => 'Litecms\Contact\Models\Contact',
        'table'         => 'contacts',
        'presenter'     => \Litecms\Contact\Repositories\Presenter\ContactItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'name'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'name', 'phone', 'mobile', 'email', 'website', 'address','upload_folder'],
        'translate'     => [],

        'upload-folder' => '/uploads/contact/contact',
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
];
