<?php

return [

    /**
     * Provider.
     */
    'provider' => 'litecms',

    /*
     * Package.
     */
    'package'  => 'calendar',

    /*
     * Modules.
     */
    'modules'  => ['calendar'],

    'calendar' => [
        'model'         => 'Lavalite\Calendar\Models\Calendar',
        'table'         => 'calendars',
        'presenter'     => \Lavalite\Calendar\Repositories\Presenter\CalendarItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'title'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'category_id', 'status', 'start', 'end', 'location', 'color', 'title', 'details', 'created_by','upload_folder'],
        'translate'     => [],

        'upload-folder' => '/uploads/calendar/calendar',
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
