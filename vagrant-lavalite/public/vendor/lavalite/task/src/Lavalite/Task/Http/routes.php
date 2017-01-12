<?php

// Admin web routes  for task
Route::group(['prefix' => trans_setlocale().'/admin/task'], function () {
    Route::resource('task', 'Lavalite\Task\Http\Controllers\TaskAdminController');
});

// Admin API routes  for task
Route::group(['prefix' => trans_setlocale().'api/v1/admin/task'], function () {
    Route::resource('task', 'Lavalite\Task\Http\Controllers\TaskAdminApiController');
});

// User web routes for task
Route::group(['prefix' => trans_setlocale().'/user/task'], function () {
    Route::resource('task', 'Lavalite\Task\Http\Controllers\TaskUserController');
});

// User API routes for task
Route::group(['prefix' => trans_setlocale().'api/v1/user/task'], function () {
    Route::resource('task', 'Lavalite\Task\Http\Controllers\TaskUserApiController');
});

//  web routes for task
Route::group(['prefix' => trans_setlocale().'/tasks'], function () {
    Route::get('/', 'Lavalite\Task\Http\Controllers\TaskController@index');
    Route::get('/{slug?}', 'Lavalite\Task\Http\Controllers\TaskController@show');
});

//  API routes for task
Route::group(['prefix' => trans_setlocale().'api/v1/tasks'], function () {
    Route::get('/', 'Lavalite\Task\Http\Controllers\TaskApiController@index');
    Route::get('/{slug?}', 'Lavalite\Task\Http\Controllers\TaskApiController@show');
});

