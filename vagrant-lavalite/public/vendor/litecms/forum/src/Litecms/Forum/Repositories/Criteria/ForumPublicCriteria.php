<?php

namespace Litecms\Forum\Repositories\Criteria;

use Litepie\Contracts\Repository\Criteria as CriteriaInterface;
use Litepie\Contracts\Repository\Repository as RepositoryInterface;

class ForumPublicCriteria implements CriteriaInterface
{

    public function apply($model, RepositoryInterface $repository)
    {
        $model = $model->where('published', '=', 'Yes')->where('status', '=', 'Show');
        return $model;
    }
}
