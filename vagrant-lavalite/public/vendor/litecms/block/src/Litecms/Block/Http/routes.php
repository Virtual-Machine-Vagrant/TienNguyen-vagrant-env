<?php

// Admin web routes  for category
Route::group(['prefix' => trans_setlocale() . '/admin/block'], function () {
    Route::resource('category', 'Litecms\Block\Http\Controllers\CategoryAdminController');
});

// Admin API routes  for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/block'], function () {
    Route::resource('category', 'Litecms\Block\Http\Controllers\CategoryAdminApiController');
});

// User web routes for category
Route::group(['prefix' => trans_setlocale() . '/user/block'], function () {
    Route::resource('category', 'Litecms\Block\Http\Controllers\CategoryUserController');
});

// User API routes for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/block'], function () {
    Route::resource('category', 'Litecms\Block\Http\Controllers\CategoryUserApiController');
});

// Public web routes for category
Route::group(['prefix' => trans_setlocale() . '/block'], function () {
    Route::get('category/', 'Litecms\Block\Http\Controllers\CategoryController@index');
    Route::get('category/{slug?}', 'Litecms\Block\Http\Controllers\CategoryController@show');
});

// Public API routes for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/blocks'], function () {
    Route::get('/', 'Litecms\Block\Http\Controllers\CategoryApiController@index');
    Route::get('/{slug?}', 'Litecms\Block\Http\Controllers\CategoryApiController@show');
});

// Admin web routes  for block
Route::group(['prefix' => trans_setlocale() . '/admin/block'], function () {
    Route::post('block/status/{block}', 'Litecms\Block\Http\Controllers\BlockAdminController@update');
    Route::resource('block', 'Litecms\Block\Http\Controllers\BlockAdminController');
});

// Admin API routes  for block
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/block'], function () {
    Route::resource('block', 'Litecms\Block\Http\Controllers\BlockAdminApiController');
});

// User web routes for block
Route::group(['prefix' => trans_setlocale() . '/user/block'], function () {
    Route::resource('block', 'Litecms\Block\Http\Controllers\BlockUserController');
});

// User API routes for block
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/block'], function () {
    Route::resource('block', 'Litecms\Block\Http\Controllers\BlockUserApiController');
});

// Public web routes for block
Route::group(['prefix' => trans_setlocale() . '/blocks'], function () {
    Route::get('/', 'Litecms\Block\Http\Controllers\BlockController@index');
    Route::get('/category/{category?}', 'Litecms\Block\Http\Controllers\BlockController@category');
    Route::get('/{slug?}', 'Litecms\Block\Http\Controllers\BlockController@show');

});

// Public API routes for block
Route::group(['prefix' => trans_setlocale() . 'api/v1/blocks'], function () {
    Route::get('/', 'Litecms\Block\Http\Controllers\BlockApiController@index');
    Route::get('/{slug?}', 'Litecms\Block\Http\Controllers\BlockApiController@show');
});
