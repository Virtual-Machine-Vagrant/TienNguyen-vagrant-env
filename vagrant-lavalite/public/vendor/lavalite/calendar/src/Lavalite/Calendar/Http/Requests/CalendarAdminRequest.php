<?php

namespace Lavalite\Calendar\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;
use Gate;

class CalendarAdminRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $calendar = $this->route('calendar');

        if (is_null($calendar)) {
            // Determine if the user is authorized to access calendar module,
            return $request->user('admin.web')->canDo('calendar.calendar.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('admin.web')->can('create', $calendar);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('admin.web')->can('update', $calendar);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('admin.web')->can('destroy', $calendar);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('admin.web')->can('view', $calendar);

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
                
            ];
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH')) {
            // Validation rule for update request.
            return [
                
            ];
        }

        // Default validation rule.
        return [

        ];
    }
}
