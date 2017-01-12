<?php

namespace Lavalite\Task\Repositories\Eloquent;

use Lavalite\Task\Interfaces\TaskRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class TaskRepository extends BaseRepository implements TaskRepositoryInterface
{
    /**
     * Booting the repository.
     *
     * @return null
     */
    public function boot()
    {
        $this->pushCriteria(app('Litepie\Repository\Criteria\RequestCriteria'));
    }

    /**
     * Specify Model class name.
     *
     * @return string
     */
    public function model()
    {
        $this->fieldSearchable = config('package.task.task.search');
        return config('package.task.task.model');
    }


    public function getCount()
    {
        return $this->model->count();
    }

    public function completed()
    {
        return $this->model->whereStatus('completed')->count();
    }

    public function tasks()
    {
        return $this->model->with('user')->whereStatus('to_do')->orderBy('id', 'DESC')->get();
    }

    public function todo()
    {
        return $this->model->with('user')->orderBy('id', 'DESC')->take(6)->get();
    }

    public function gadget($count)
    {

        return $this->model->with('user')
                            ->where(function($query){
                                if (user('web')) {
                                    $query->whereUserId(user_id('web'));
                                }
                              })
                            ->orderBy('id', 'DESC')
                            ->take($count)
                            ->get();
    }
}
