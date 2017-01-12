<?php

namespace Lavalite\Calendar\Repositories\Eloquent;

use Lavalite\Calendar\Interfaces\CalendarRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;

class CalendarRepository extends BaseRepository implements CalendarRepositoryInterface
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
        $this->fieldSearchable = config('package.calendar.calendar.search');
        return config('package.calendar.calendar.model');
    }

    /**
     * return calendar
     * @return array
     */
    public function getCalendars()
    {

        return $this->model->orderBy('id', 'DESC')->whereStatus('Draft')->get();
    }

    /**
     * return latest events in thecalendar
     * @return array
     */
    public function latestEvents()
    {

        return $this->model->orderBy('id', 'DESC')->where('status', '<>', 'Draft')->get();
    }

    /**
     * return calendar list
     * @return json
     */
    public function getCalendarList()
    {
        $arr = $this->model->select(['start', 'end', 'title', 'id', 'color'])
            ->where('status', '<>', 'Draft')
            ->where(function ($query) {

                if (user_id('web')) {
                    $query->whereUserId(user_id('web'));
                }

            })
            ->get();
        $temp = [];

        foreach ($arr as $key => $value) {

            $temp[$key]['id'] = $value->getRouteKey();
            $temp[$key]['title'] = $value['title'];
            $temp[$key]['start'] = date('Y-m-d H:i:s', strtotime($value['start']));
            $temp[$key]['end'] = date('Y-m-d H:i:s', strtotime($value['end']));
            $temp[$key]['backgroundColor'] = $value['color'];
            $temp[$key]['borderColor'] = $value['color'];
            $temp[$key]['textColor'] = '#fff';
        }

        return json_encode($temp);
    }

    /**
     * return count
     * @return int
     */
    public function getCount()
    {
        return $this->model->count();
    }

}
