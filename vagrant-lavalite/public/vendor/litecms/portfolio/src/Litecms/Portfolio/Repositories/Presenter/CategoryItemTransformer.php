<?php

namespace Litecms\Portfolio\Repositories\Presenter;

use League\Fractal\TransformerAbstract;
use Hashids;

class CategoryItemTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Portfolio\Models\Category $category)
    {
        return [
            'id'                => $category->getRouteKey(),
            'name'              => $category->name,
            'status'            => $category->status,
        ];
    }
}