<?php

namespace Lavalite\Calendar\Models;

use Illuminate\Database\Eloquent\SoftDeletes;
use Litepie\Database\Model;
use Litepie\Database\Traits\Slugger;
use Litepie\Filer\Traits\Filer;
use Litepie\Hashids\Traits\Hashids;
use Litepie\Repository\Traits\PresentableTrait;
use Litepie\Revision\Traits\Revision;

class Calendar extends Model
{
    use Filer, SoftDeletes, Hashids, Slugger, Revision, PresentableTrait;

    /**
     * Configuartion for the model.
     *
     * @var array
     */
     protected $config = 'package.calendar.calendar';


}
