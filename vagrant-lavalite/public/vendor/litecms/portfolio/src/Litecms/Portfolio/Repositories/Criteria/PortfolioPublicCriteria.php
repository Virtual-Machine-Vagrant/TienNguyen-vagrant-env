<?php

namespace Litecms\Portfolio\Repositories\Criteria;

use Litepie\Contracts\Repository\Criteria as CriteriaInterface;
use Litepie\Contracts\Repository\Repository as RepositoryInterface;

class PortfolioPublicCriteria implements CriteriaInterface
{

    public function apply($model, RepositoryInterface $repository)
    {
        $model = $model->whereStatus('show')->wherePublished('Yes');
        return $model;
    }
}
