<?php

namespace Litecms\Portfolio\Repositories\Eloquent;

use Litecms\Portfolio\Interfaces\PortfolioRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class PortfolioRepository extends BaseRepository implements PortfolioRepositoryInterface
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
        $this->fieldSearchable = config('package.portfolio.portfolio.search');
        return config('package.portfolio.portfolio.model');
    }
}
