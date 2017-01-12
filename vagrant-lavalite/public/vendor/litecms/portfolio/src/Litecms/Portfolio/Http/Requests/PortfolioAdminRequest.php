<?php

namespace Litecms\Portfolio\Http\Requests;

use App\Http\Requests\Request as FormRequest;
use Illuminate\Http\Request;

class PortfolioAdminRequest extends FormRequest
{
    /**
     * Determine if the user is authorized to make this request.
     *
     * @return bool
     */
    public function authorize(Request $request)
    {
        $portfolio = $this->route('portfolio');

        if (is_null($portfolio)) {
            // Determine if the user is authorized to access portfolio module,
            return $request->user('admin.web')->canDo('portfolio.portfolio.view');
        }

        if ($request->isMethod('POST') || $request->is('*/create')) {
            // Determine if the user is authorized to create an entry,
            return $request->user('admin.web')->can('create', $portfolio);
        }

        if ($request->isMethod('PUT') || $request->isMethod('PATCH') || $request->is('*/edit')) {
            // Determine if the user is authorized to update an entry,
            return $request->user('admin.web')->can('update', $portfolio);
        }

        if ($request->isMethod('DELETE')) {
            // Determine if the user is authorized to delete an entry,
            return $request->user('admin.web')->can('delete', $portfolio);
        }

        // Determine if the user is authorized to view the module.
        return $request->user('admin.web')->can('view', $portfolio);

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
