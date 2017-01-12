<?php

namespace Lavalite\Settings\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;

class SettingAdminWebRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $setting = $this->route('setting');

        if (is_null($setting)) {
            // Determine if the user is authorized to access setting module,
            return $request->user('admin.web')->canDo('settings.setting.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('admin.web')->can('create', $setting);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('admin.web')->can('update', $setting);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('admin.web')->can('delete', $setting);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('admin.web')->can('view', $setting);

    }

    /**
     * Get the validation rules that apply to the request.
     *
     * @return array
     */
    public function rules(Request $request)
    {

        if ($request->isMethod('POST')) {
            // validation rule for create request.
            return [
                'name' => 'required',
            ];
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH')) {
            // Validation rule for update request.
            return [
                'name' => 'required',
            ];
        }

        // Default validation rule.
        return [

        ];
    }

}
