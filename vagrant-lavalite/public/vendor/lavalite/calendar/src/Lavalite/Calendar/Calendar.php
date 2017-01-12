<?php

namespace Lavalite\Calendar;
use User;

class Calendar
{
    /**
     * $calendar object.
     */
    protected $calendar;

    /**
     * Constructor.
     */
    public function __construct(\Lavalite\Calendar\Interfaces\CalendarRepositoryInterface $calendar)
    {
        $this->calendar = $calendar;
    }

    /**
     * Returns count of calendar.
     *
     * @param array $filter
     *
     * @return int
     */
    public function count()
    {

        if (User::hasRole('user')) {
            $this->calendar->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarUserCriteria());
        }

        return $this->calendar
            ->scopeQuery(function ($query) {
                return $query->where('status','<>','Draft');
            })->count();
    }

    /**
     * Display Calendar of the user.
     *
     * @return void
     *
     * @author
     **/
    public function display($view)
    {
        return view('calendar::admin.calendar.' . $view);
    }

    /**
     * get latest events.
     *
     * @author
     **/
    public function LatestEvents()
    {
        return $this->calendar->LatestEvents();
    }

    /**
     * get calendar.
     *
     * @author
     **/
    public function getCalendar()
    {
        return view('calendar::user.calendar.calendar')->render();
    }

    /**
     * Display gadget.
     *
     *
     * @param string $view
     *
     * @author
     **/
    public function gadget($view = 'admin.calendar.gadget')
    {

        return view('calendar::' . $view)->render();
    }

}
