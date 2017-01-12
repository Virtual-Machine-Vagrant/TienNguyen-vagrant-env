<?php

namespace Lavalite\Page\Repositories\Eloquent;

use Lavalite\Page\Interfaces\PageRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class PageRepository extends BaseRepository implements PageRepositoryInterface
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
        $this->fieldSearchable = config('package.page.page.search');
        return config('package.page.page.model');
    }

    /**
     * Get page by id or slug.
     *
     * @return void
     */
    public function getPage($var)
    {
        return $this->findBySlug($var);
    }
}
