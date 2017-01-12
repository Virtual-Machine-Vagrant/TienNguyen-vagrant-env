<?php

// Admin routes for module
Route::group(['prefix' => trans_setlocale() . '/admin/settings'], function () {
    Route::resource('setting', 'SettingAdminWebController');
});
