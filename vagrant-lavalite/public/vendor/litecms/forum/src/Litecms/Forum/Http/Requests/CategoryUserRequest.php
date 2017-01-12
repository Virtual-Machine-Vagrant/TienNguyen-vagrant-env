<?php

namespace Litecms\Forum\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;

class CategoryUserRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $category = $this->route('category');

        if (is_null($category)) {
            // Determine if the user is authorized to access category module,
            return $request->user('web')->canDo('forum.category.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('web')->can('create', $category);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('web')->can('update', $category);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('web')->can('delete', $category);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('web')->can('view', $category);

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