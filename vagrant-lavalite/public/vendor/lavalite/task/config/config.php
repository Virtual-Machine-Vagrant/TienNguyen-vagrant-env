<?php

return [

    /**
     * Provider.
     */
    'provider' => 'lavalite',

    /*
     * Package.
     */
    'package'  => 'task',

    /*
     * Modules.
     */
    'modules'  => ['task'],

    'task'     => [
        'model'         => 'Lavalite\Task\Models\Task',
        'table'         => 'tasks',
        'presenter'     => \Lavalite\Task\Repositories\Presenter\TaskItemPresenter::class,
        'hidden'        => [],
        'visible'       => [],
        'guarded'       => ['*'],
        'slugs'         => ['slug' => 'task'],
        'dates'         => ['deleted_at'],
        'appends'       => [],
        'fillable'      => ['user_id', 'parent_id', 'start', 'end', 'category', 'task', 'time_required', 'time_taken', 'priority', 'status', 'upload_folder', 'created_by'],

        'upload-folder' => '/uploads/task/task',
        'uploads'       => [
            'single'   => [],
            'multiple' => [],
        ],
        'casts'         => [
        ],
        'revision'      => [],
        'perPage'       => '20',
        'search'        => [
            'task' => 'like',
            'status',
        ],
    ],
];
