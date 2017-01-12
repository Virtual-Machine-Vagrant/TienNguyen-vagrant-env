<?php

namespace Lavalite\Settings\Models;

use Illuminate\Database\Eloquent\SoftDeletes;
use Litepie\Database\Traits\Slugger;
use Litepie\Database\Model;
use Litepie\Filer\Traits\Filer;
use Litepie\Hashids\Traits\Hashids;
use Litepie\Trans\Traits\Trans;
use Litepie\Revision\Traits\Revision;


class Setting extends Model
{
   use Filer, SoftDeletes, Hashids, Slugger, Trans, Revision;

    /**
     * Configuartion for the model.
     *
     * @var array
    */
    protected $config = 'package.settings.setting';


}
