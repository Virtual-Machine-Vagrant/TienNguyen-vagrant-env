<?php

namespace Litecms\Portfolio\Repositories\Presenter;

use League\Fractal\TransformerAbstract;

class CategoryListTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Portfolio\Models\Category $category)
    {
        return [
            'id'     => $category->getRouteKey(),
            'name'   => ucfirst($category->name),
            'status' => ucfirst($category->status),
        ];
    }
}
