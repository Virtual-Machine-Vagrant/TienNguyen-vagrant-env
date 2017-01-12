<?php

namespace Lavalite\Settings\Repositories\Eloquent;

use Lavalite\Settings\Interfaces\SettingRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class SettingRepository extends BaseRepository implements SettingRepositoryInterface
{
    /**
     * Specify Model class name
     *
     * @return string
     */
    public function model()
    {
        return config('package.settings.setting.model');
    }

    public function getValue($key, $user_id)
    {
        return $this->model->whereUserId($user_id)->whereSkey($key)->first();
    }

}
