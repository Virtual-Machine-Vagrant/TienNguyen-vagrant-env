<?php

namespace Litecms\Faq\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;

class FaqAdminRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $faq = $this->route('faq');

        if (is_null($faq)) {
            // Determine if the user is authorized to access faq module,
            return $request->user('admin.web')->canDo('faq.faq.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('admin.web')->can('create', $faq);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('admin.web')->can('update', $faq);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('admin.web')->can('delete', $faq);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('admin.web')->can('view', $faq);

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
                'question' => 'required',
                'answer'   => 'required',

            ];
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH')) {
            // Validation rule for update request.
            return [
                'question' => 'required',
                'answer'   => 'required',

            ];
        }

        // Default validation rule.
        return [

        ];
    }

}