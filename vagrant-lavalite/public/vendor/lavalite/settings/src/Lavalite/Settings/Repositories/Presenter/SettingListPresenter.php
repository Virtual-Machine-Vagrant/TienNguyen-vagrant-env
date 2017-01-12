<?php

namespace Lavalite\Settings\Repositories\Presenter;

use Litepie\Repository\Presenter\FractalPresenter;

class SettingListPresenter extends FractalPresenter
{

    /**
     * Prepare data to present
     *
     * @return \League\Fractal\TransformerAbstract
     */
    public function getTransformer()
    {
        return new SettingListTransformer();
    }
}
