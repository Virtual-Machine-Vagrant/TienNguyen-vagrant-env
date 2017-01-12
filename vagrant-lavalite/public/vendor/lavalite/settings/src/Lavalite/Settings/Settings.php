<?php

namespace Lavalite\Settings;
use Lavalite\Settings\Models\Setting;
use View;
/**
 *
 */
class Settings
{

    protected $model;

    public function __construct(\Lavalite\Settings\Interfaces\SettingRepositoryInterface $settings)
    {
        $this->model     = $settings;
    }

       /**
     * Calls page repository function.
     *
     * @param string $name
     * @param array  $arguments
     *
     * @return mixed
     */
    public function __call($name, $arguments)
    {
        return $this->model->$name($arguments[0]);
    }

    /**
     * Display settings of the user
     *
     * @return Response
     */
    public function display($view)
    {
        return view('settings::admin.setting.'.$view);
    }

    public function count(array $filters = null)
    {
        return  $this->model->count();
    }

    public function get($key, $user_id=0)
    {
        return  $this->model->getValue($key,$user_id);
    }

    public function set($key, $value, $user_id = 0)
    {
        $data = $this->model->findByField('skey', $key)->first();
        $attributes['value'] = $value;
        $attributes['user_id'] = $user_id;
        $attributes['skey'] = $key;

        if(!empty($data)){
             $this->model->update(["value" => $value], $data->getRouteKey());
             return;
        }
        $this->model->create($attributes);
        return ;
    }

}
