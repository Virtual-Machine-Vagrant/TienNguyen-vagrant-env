<?php

// Admin web routes  for calendar
Route::group(['prefix' => trans_setlocale() . '/admin/calendar'], function () {
    Route::get('calendar/ajax/list', 'Lavalite\Calendar\Http\Controllers\CalendarAdminController@calendarList');
    Route::resource('calendar', 'Lavalite\Calendar\Http\Controllers\CalendarAdminController');
});

// Admin API routes  for calendar
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/calendar'], function () {
    Route::resource('calendar', 'Lavalite\Calendar\Http\Controllers\CalendarAdminApiController');
});

// User web routes for calendar
Route::group(['prefix' => trans_setlocale() . '/user/calendar'], function () {
    Route::get('calendar/ajax/list', 'Lavalite\Calendar\Http\Controllers\CalendarUserController@calendarList');
    Route::resource('/calendar', 'Lavalite\Calendar\Http\Controllers\CalendarUserController');
});

// User API routes for calendar
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/calendar'], function () {
    Route::resource('/calendar', 'Lavalite\Calendar\Http\Controllers\CalendarUserApiController');
});

//  web routes for calendar
Route::group(['prefix' => trans_setlocale() . '/calendar'], function () {
    Route::get('/calendar', 'Lavalite\Calendar\Http\Controllers\CalendarController@index');
    Route::get('/{slug?}', 'Lavalite\Calendar\Http\Controllers\CalendarController@show');
});

//  API routes for calendar
Route::group(['prefix' => trans_setlocale() . 'api/v1/calendar'], function () {
    Route::get('/calendar', 'Lavalite\Calendar\Http\Controllers\CalendarApiController@index');
    Route::get('/{slug?}', 'Lavalite\Calendar\Http\Controllers\CalendarApiController@show');
});
