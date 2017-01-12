<?php

namespace Litecms\Portfolio\Repositories\Presenter;

use Litepie\Repository\Presenter\FractalPresenter;

class PortfolioListPresenter extends FractalPresenter {

    /**
     * Prepare data to present
     *
     * @return \League\Fractal\TransformerAbstract
     */
    public function getTransformer()
    {
        return new PortfolioListTransformer();
    }
}