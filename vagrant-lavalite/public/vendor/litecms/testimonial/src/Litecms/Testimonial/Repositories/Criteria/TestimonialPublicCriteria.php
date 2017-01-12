<?php

namespace Litecms\Package\Repositories\Criteria;

use Litepie\Contracts\Repository\Criteria as CriteriaInterface;
use Litepie\Contracts\Repository\Repository as RepositoryInterface;

class ModulePublicCriteria implements CriteriaInterface
{

    public function apply($model, RepositoryInterface $repository)
    {
        $model = $model->where('status', '=', 'status');
        return $model;
    }
}
