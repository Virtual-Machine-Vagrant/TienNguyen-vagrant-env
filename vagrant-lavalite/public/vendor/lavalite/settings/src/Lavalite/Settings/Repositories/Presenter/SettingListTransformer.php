<?php

namespace Lavalite\Settings\Repositories\Presenter;

use League\Fractal\TransformerAbstract;
use Hashids;

class SettingListTransformer extends TransformerAbstract
{
    public function transform(\Lavalite\Settings\Models\Setting $setting)
    {
        return [
            'id'        => $setting->eid,
            'user_id'   => $setting->user_id,
            'skey'      => $setting->skey,
            'name'      => $setting->name,
            'value'     => $setting->value,
            'type'      => $setting->type,
        ];
    }
}
