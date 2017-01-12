<?php

namespace Litecms\Block\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;

class BlockAdminRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $block = $this->route('block');

        if (is_null($block)) {
            // Determine if the user is authorized to access block module,
            return $request->user('admin.web')->canDo('block.block.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('admin.web')->can('create', $block);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('admin.web')->can('update', $block);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('admin.web')->can('delete', $block);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('admin.web')->can('view', $block);

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
