<?php

namespace Litecms\Contact\Repositories\Eloquent;

use Litecms\Contact\Interfaces\ContactRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class ContactRepository extends BaseRepository implements ContactRepositoryInterface
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
        $this->fieldSearchable = config('package.contact.contact.search');
        return config('package.contact.contact.model');
    }
}
