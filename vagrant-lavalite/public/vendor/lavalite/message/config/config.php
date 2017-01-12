<?php

return [

    /**
     * Provider.
     */
    'provider'  => 'lavalite',

    /*
     * Package.
     */
    'package'   => 'message',

    /*
     * Modules.
     */
    'modules'   => ['message'],


    'message'       => [
        'model'             => 'Lavalite\Message\Models\Message',
        'table'             => 'messages',
        'presenter'         => \Lavalite\Message\Repositories\Presenter\MessageItemPresenter::class,
        'hidden'            => [],
        'visible'           => [],
        'guarded'           => ['*'],
        'slugs'             => ['slug' => 'name'],
        'dates'             => ['deleted_at'],
        'appends'           => [],
        'fillable'          => ['user_id', 'status',  'star',  'from',  'to',  'subject',  'message',  'read',  'type','upload_folder'],
        'translate'         => [],

        'upload-folder'     => '/uploads/message/message',
        'uploads'           => [
                                    'single'    => [],
                                    'multiple'  => [],
                               ],
        'casts'             => [
                               ],
        'revision'          => [],
        'perPage'           => '20',
        'search'        => [
            'name'  => 'like',
            'status',
        ],
    ],
];
