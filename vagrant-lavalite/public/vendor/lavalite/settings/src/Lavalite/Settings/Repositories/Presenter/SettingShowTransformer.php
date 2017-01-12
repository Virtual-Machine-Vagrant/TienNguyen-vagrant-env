<?php

namespace Lavalite\Settings\Repositories\Presenter;

use League\Fractal\TransformerAbstract;
use Hashids;

class SettingShowTransformer extends TransformerAbstract
{
    public function transform(\Lavalite\Settings\Models\Setting $setting)
    {
        return [
            'id'      => $setting->id,
            'user_id' => $setting->user_id,
            'skey' => $setting->skey,
            'name'   => $setting->name,
            'value'   => $setting->value,
            'type'   => $setting->type,
            'upload_folder' => $setting->upload_folder,
            'created' => $setting->created_at,
        ];
    }
}