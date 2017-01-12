<?php

namespace Litecms\Portfolio\Repositories\Eloquent;

use Litecms\Portfolio\Interfaces\CategoryRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class CategoryRepository extends BaseRepository implements CategoryRepositoryInterface
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
        $this->fieldSearchable = config('package.portfolio.category.search');
        return config('package.portfolio.category.model');
    }
}
