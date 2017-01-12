<?php

// Admin web routes  for message
Route::group(['prefix' => trans_setlocale() . '/admin/message'], function () {
    Route::get('/message/sub/{slug}/{id}', 'Lavalite\Message\Http\Controllers\MessageAdminController@updateSubStatus');
    Route::get('/message/status/{slug}', 'Lavalite\Message\Http\Controllers\MessageAdminController@updateStatus');
    // Route::get('/message/Inbox', 'MessageAdminController@inbox');
    // Route::get('/compose', 'MessageAdminController@compose');
    Route::get('/search/{slug?}/{status?}', 'Lavalite\Message\Http\Controllers\MessageAdminController@search');
    Route::get('/status/{status?}', 'Lavalite\Message\Http\Controllers\MessageAdminController@showMessage');
    Route::get('/details/{caption}/{slug}', 'Lavalite\Message\Http\Controllers\MessageAdminController@getDetails');
    Route::get('/reply/{id}', 'Lavalite\Message\Http\Controllers\MessageAdminController@reply');
    Route::get('/forward/{id}', 'Lavalite\Message\Http\Controllers\MessageAdminController@forward');
    Route::resource('/message', 'Lavalite\Message\Http\Controllers\MessageAdminController');
    Route::get('/important/substatus', 'Lavalite\Message\Http\Controllers\MessageAdminController@changeSubStatus');
    Route::get('/starred', 'Lavalite\Message\Http\Controllers\MessageAdminController@starredMessages');
});

// Admin API routes  for message
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/message'], function () {
    Route::resource('message', 'Lavalite\Message\Http\Controllers\MessageAdminApiController');
});

// User web routes for message
Route::group(['prefix' => trans_setlocale() . '/user/message'], function () {

    Route::get('/message/sub/{slug}/{id}', 'Lavalite\Message\Http\Controllers\MessageUserController@updateSubStatus');
    Route::get('/message/status/{slug}', 'Lavalite\Message\Http\Controllers\MessageUserController@updateStatus');
    Route::get('/search/{slug?}/{status?}', 'Lavalite\Message\Http\Controllers\MessageUserController@search');
    Route::get('/status/{status?}', 'Lavalite\Message\Http\Controllers\MessageUserController@showMessage');
    Route::get('/details/{caption}/{slug}', 'Lavalite\Message\Http\Controllers\MessageUserController@getDetails');
    Route::get('/reply/{id}', 'Lavalite\Message\Http\Controllers\MessageUserController@reply');
    Route::get('/forward/{id}', 'Lavalite\Message\Http\Controllers\MessageUserController@forward');
    Route::get('/important/substatus', 'Lavalite\Message\Http\Controllers\MessageUserController@importantSubStatus');
    Route::get('/starred/substatus', 'Lavalite\Message\Http\Controllers\MessageUserController@starredSubStatus');
    Route::get('/starred', 'Lavalite\Message\Http\Controllers\MessageUserController@starredMessages');
    Route::get('/important', 'Lavalite\Message\Http\Controllers\MessageUserController@importantMessages');
    Route::get('/compose', 'Lavalite\Message\Http\Controllers\MessageUserController@compose');
    Route::post('/delete', 'Lavalite\Message\Http\Controllers\MessageUserController@deleteMultiple');
    Route::resource('/message', 'Lavalite\Message\Http\Controllers\MessageUserController');
});

// User API routes for message
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/message'], function () {
    Route::resource('message', 'Lavalite\Message\Http\Controllers\MessageUserApiController');
});

// Public web routes for message
Route::group(['prefix' => trans_setlocale() . '/messages'], function () {
    Route::get('/', 'Lavalite\Message\Http\Controllers\MessageController@index');
    Route::get('/{slug?}', 'Lavalite\Message\Http\Controllers\MessageController@show');
});

// Public API routes for message
Route::group(['prefix' => trans_setlocale() . 'api/v1/messages'], function () {
    Route::get('/', 'Lavalite\Message\Http\Controllers\MessagePublicApiController@index');
    Route::get('/{slug?}', 'Lavalite\Message\Http\Controllers\MessagePublicApiController@show');
});
