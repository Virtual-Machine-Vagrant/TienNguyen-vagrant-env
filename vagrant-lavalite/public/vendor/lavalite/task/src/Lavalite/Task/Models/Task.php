<?php

namespace Lavalite\Task\Models;

use Illuminate\Database\Eloquent\SoftDeletes;
use Litepie\Database\Model;
use Litepie\Database\Traits\Slugger;
use Litepie\Filer\Traits\Filer;
use Litepie\Hashids\Traits\Hashids;
use Litepie\Repository\Traits\PresentableTrait;
use Litepie\Revision\Traits\Revision;
use Litepie\Trans\Traits\Trans;

class Task extends Model
{
    use Filer, SoftDeletes, Hashids, Slugger, Trans, Revision, PresentableTrait;

    /**
     * Configuartion for the model.
     *
     * @var array
     */
     protected $config = 'package.task.task';



	public function user(){

        return $this->belongsTo('App\User','user_id');
    }

    public function getCreatedAtAttribute($val)
    {

        if ($val == '0000-00-00 00:00:00' || empty($val)) {
            return '';
        }

        return $this->formatDatetime($val);
    }

    /**
     * format date.
     *
     * @param string $folder
     *
     * @return string
     */
    public function formatDate($date, $format = 'd M, Y')
    {

        return date($format, strtotime($date));
    }

    /**
     * format date time.
     *
     * @param string $folder
     *
     * @return string
     */
    public function formatDatetime($date, $format = 'd M, Y h:i A')
    {
        return date($format, strtotime($date));
    }
}
