<?php

namespace Litecms\Block\Repositories\Presenter;

use League\Fractal\TransformerAbstract;

class BlockListTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Block\Models\Block $block)
    {
        return [
            'id'          => $block->getRouteKey(),
            'category_id' => ucfirst($block->blockCategories->name),
            'name'        => ucfirst($block->name),
            'url'         => $block->url,
            'description' => $block->description,
            'status'      => $block->status,
            'image'       => $block->image,
            'images'      => $block->images,
            'published'    => ($block->published == 'Yes') ? 'Published' : '-',
        ];
    }
}
