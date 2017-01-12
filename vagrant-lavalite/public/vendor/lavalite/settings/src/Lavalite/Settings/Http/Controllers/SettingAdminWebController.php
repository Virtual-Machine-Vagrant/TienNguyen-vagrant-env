<?php

namespace Lavalite\Settings\Http\Controllers;

use App\Http\Controllers\AdminWebController as AdminController;
use Form;
use Lavalite\Settings\Http\Requests\SettingAdminWebRequest;
use Lavalite\Settings\Interfaces\SettingRepositoryInterface;
use Lavalite\Settings\Models\Setting;

/**
 * Admin web controller class.
 */
class SettingAdminWebController extends AdminController
{
    /**
     * Initialize setting controller.
     *
     * @param type SettingRepositoryInterface $setting
     *
     * @return type
     */
    public function __construct(SettingRepositoryInterface $setting)
    {
        $this->repository = $setting;
        parent::__construct();
    }

    /**
     * Display a list of setting.
     *
     * @return Response
     */
    public function index(SettingAdminWebRequest $request)
    {

        if ($request->wantsJson()) {
            return $settings = $this->repository->setPresenter('\\Lavalite\\Settings\\Repositories\\Presenter\\SettingListPresenter')
                ->scopeQuery(function ($query) {
                    return $query->orderBy('id', 'DESC');
                })->all();
            return response()->json($settings, 200);

        }

        $this->theme->prependTitle(trans('settings::setting.names') . ' :: ');
        return $this->theme->of('settings::admin.setting.index')->render();
    }

    /**
     * Display setting.
     *
     * @param Request $request
     * @param int     $id
     *
     * @return Response
     */
    public function show(SettingAdminWebRequest $request, Setting $setting)
    {

        if (!$setting->exists) {
            return response()->view('settings::admin.setting.new', compact('setting'));
        }

        Form::populate($setting);
        return response()->view('settings::admin.setting.show', compact('setting'));
    }

    /**
     * Show the form for creating a new setting.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(SettingAdminWebRequest $request)
    {

        $setting = $this->repository->newInstance([]);

        Form::populate($setting);

        return response()->view('settings::admin.setting.create', compact('setting'));

    }

    /**
     * Create new setting.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(SettingAdminWebRequest $request)
    {
        try {
            $attributes            = $request->all();
            $attributes['user_id'] = user_id('admin.web');
            $setting               = $this->repository->create($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('settings::setting.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/settings/setting/' . $setting->getRouteKey()),
            ], 201);

        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 400,
            ], 400);
        }

    }

    /**
     * Show setting for editing.
     *
     * @param Request $request
     * @param int     $id
     *
     * @return Response
     */
    public function edit(SettingAdminWebRequest $request, Setting $setting)
    {
        Form::populate($setting);
        return response()->view('settings::admin.setting.edit', compact('setting'));
    }

    /**
     * Update the setting.
     *
     * @param Request $request
     * @param int     $id
     *
     * @return Response
     */
    public function update(SettingAdminWebRequest $request, Setting $setting)
    {
        try {

            $attributes = $request->all();

            $setting->update($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('settings::setting.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/settings/setting/' . $setting->getRouteKey()),
            ], 201);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/settings/setting/' . $setting->getRouteKey()),
            ], 400);

        }

    }

    /**
     * Remove the setting.
     *
     * @param int $id
     *
     * @return Response
     */
    public function destroy(SettingAdminWebRequest $request, Setting $setting)
    {

        try {

            $t = $setting->delete();

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('settings::setting.name')]),
                'code'     => 202,
                'redirect' => trans_url('/admin/settings/setting/0'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/settings/setting/' . $setting->getRouteKey()),
            ], 400);
        }

    }

}
