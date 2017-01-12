<?php

namespace Litecms\Portfolio\Repositories\Presenter;

use League\Fractal\TransformerAbstract;

class PortfolioListTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Portfolio\Models\Portfolio $portfolio)
    {
        return [
            'id'          => $portfolio->getRouteKey(),
            'title'       => ucfirst($portfolio->title),
            'published'   => $portfolio->published,
            'details'     => ucfirst($portfolio->details),
            'category_id' => ucfirst($portfolio->category['name']),
            'image'       => $portfolio->image,
            'images'      => $portfolio->images,
            'status'      => ucfirst($portfolio->status),
             'published'    => ($portfolio->published == 'Yes') ? 'Published' : '-',
        ];
    }
}
