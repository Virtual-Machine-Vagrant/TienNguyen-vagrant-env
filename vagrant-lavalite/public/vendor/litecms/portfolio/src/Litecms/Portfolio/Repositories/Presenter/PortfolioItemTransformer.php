<?php

namespace Litecms\Portfolio\Repositories\Presenter;

use League\Fractal\TransformerAbstract;

class PortfolioItemTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Portfolio\Models\Portfolio $portfolio)
    {
        return [
            'id'          => $portfolio->getRouteKey(),
            'title'       => ucfirst($portfolio->title),
            'published'   => $portfolio->published,
            'details'     => ucfirst($portfolio->details),
            'category_id' => $portfolio->category_id,
            'image'       => $portfolio->image,
            'images'      => $portfolio->images,
            'status'      => $portfolio->status,
        ];
    }
}
