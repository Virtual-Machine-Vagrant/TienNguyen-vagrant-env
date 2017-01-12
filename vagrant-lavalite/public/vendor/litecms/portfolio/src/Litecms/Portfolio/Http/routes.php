<?php

// Admin web routes  for portfolio
Route::group(['prefix' => trans_setlocale() . '/admin/portfolio'], function () {
    Route::post('portfolio/status/{portfolio}', 'Litecms\Portfolio\Http\Controllers\PortfolioAdminController@update');
    Route::resource('portfolio', 'Litecms\Portfolio\Http\Controllers\PortfolioAdminController');
});

// Admin API routes  for portfolio
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/portfolio'], function () {
    Route::resource('portfolio', 'Litecms\Portfolio\Http\Controllers\PortfolioAdminApiController');
});

// User web routes for portfolio
Route::group(['prefix' => trans_setlocale() . '/user/portfolio'], function () {
    Route::resource('portfolio', 'Litecms\Portfolio\Http\Controllers\PortfolioUserController');
});

// User API routes for portfolio
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/portfolio'], function () {
    Route::resource('portfolio', 'Litecms\Portfolio\Http\Controllers\PortfolioUserApiController');
});

// Public web routes for portfolio
Route::group(['prefix' => trans_setlocale() . '/portfolio'], function () {
    Route::get('/', 'Litecms\Portfolio\Http\Controllers\PortfolioController@index');
    Route::get('{slug?}', 'Litecms\Portfolio\Http\Controllers\PortfolioController@show');
});

// Public API routes for portfolio
Route::group(['prefix' => trans_setlocale() . 'api/v1/portfolios'], function () {
    Route::get('/', 'Litecms\Portfolio\Http\Controllers\PortfolioApiController@index');
    Route::get('/{slug?}', 'Litecms\Portfolio\Http\Controllers\PortfolioApiController@show');
});

// Admin web routes  for category
Route::group(['prefix' => trans_setlocale() . '/admin/portfolio'], function () {
    Route::resource('category', 'Litecms\Portfolio\Http\Controllers\CategoryAdminController');
});

// Admin API routes  for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/admin/portfolio'], function () {
    Route::resource('category', 'Litecms\Portfolio\Http\Controllers\CategoryAdminApiController');
});

// User web routes for category
Route::group(['prefix' => trans_setlocale() . '/user/portfolio'], function () {
    Route::resource('category', 'Litecms\Portfolio\Http\Controllers\CategoryUserController');
});

// User API routes for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/user/portfolio'], function () {
    Route::resource('category', 'Litecms\Portfolio\Http\Controllers\CategoryUserApiController');
});

// Public web routes for category
Route::group(['prefix' => trans_setlocale() . '/portfolio'], function () {
    Route::get('/category', 'Litecms\Portfolio\Http\Controllers\CategoryController@index');
    Route::get('/category/{slug?}', 'Litecms\Portfolio\Http\Controllers\CategoryController@show');
});

// Public API routes for category
Route::group(['prefix' => trans_setlocale() . 'api/v1/portfolios'], function () {
    Route::get('/', 'Litecms\Portfolio\Http\Controllers\CategoryApiController@index');
    Route::get('/{slug?}', 'Litecms\Portfolio\Http\Controllers\CategoryApiController@show');
});
