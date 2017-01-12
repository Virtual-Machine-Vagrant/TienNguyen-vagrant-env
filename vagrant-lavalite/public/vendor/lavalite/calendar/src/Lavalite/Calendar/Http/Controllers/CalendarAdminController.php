<?php

namespace Lavalite\Calendar\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Lavalite\Calendar\Http\Requests\CalendarAdminRequest;
use Lavalite\Calendar\Interfaces\CalendarRepositoryInterface;
use Lavalite\Calendar\Models\Calendar;

/**
 * Admin web controller class.
 */
class CalendarAdminController extends BaseController
{

    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    public $guard = 'admin.web';

    /**
     * The home page route of admin.
     *
     * @var string
     */
    public $home = 'admin';

    /**
     * Initialize calendar controller.
     *
     * @param type CalendarRepositoryInterface $calendar
     *
     * @return type
     */
    public function __construct(CalendarRepositoryInterface $calendar)
    {
        $this->repository = $calendar;
        $this->middleware('web');
        $this->middleware('auth:admin.web');
        $this->setupTheme(config('theme.themes.admin.theme'), config('theme.themes.admin.layout'));
        parent::__construct();
    }

    /**
     * Display a list of calendar.
     *
     * @return Response
     */
    public function index(CalendarAdminRequest $request)
    {
        $this->theme->asset()->add('fullcalendar-css', 'packages/fullcalendar/fullcalendar.min.css');
        $this->theme->asset()->container('extra')->add('jquery-ui', 'packages/jquery-ui/jquery-ui.js');
        $this->theme->asset()->container('extra')->add('fullcalendar-js', 'packages/fullcalendar/fullcalendar.min.js');

        $pageLimit = $request->input('pageLimit');
        $calendars = $this->repository
            ->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarAdminCriteria())
            ->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarEventCriteria())
            ->setPresenter('\\Lavalite\\Calendar\\Repositories\\Presenter\\CalendarListPresenter')
            ->scopeQuery(function ($query) {
                return $query->orderBy('id', 'DESC');
            })->paginate($pageLimit);

        $this->theme->prependTitle(trans('calendar::calendar.names') . ' :: ');
        return $this->theme->of('calendar::admin.calendar.index',compact('calendars'))->render();
    }

    /**
     * Display calendar.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return Response
     */
    public function show(CalendarAdminRequest $request, Calendar $calendar)
    {

        if (!$calendar->exists) {
            return response()->view('calendar::admin.calendar.new', compact('calendar'));
        }

        Form::populate($calendar);
        return response()->view('calendar::admin.calendar.show', compact('calendar'));
    }

    /**
     * Show the form for creating a new calendar.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(CalendarAdminRequest $request)
    {

        $calendar = $this->repository->newInstance([]);

        Form::populate($calendar);

        return response()->view('calendar::admin.calendar.create', compact('calendar'));

    }

    /**
     * Create new calendar.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(CalendarAdminRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id('admin.web');
            $calendar = $this->repository->create($attributes);

            return redirect(trans_url('/admin/calendar/calendar'))
                ->with('message', trans('messages.success.created', ['Module' => trans('calendar::calendar.name')]))
                ->with('code', 201);

        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 400,
            ], 400);
        }

    }

    /**
     * Show calendar for editing.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return Response
     */
    public function edit(CalendarAdminRequest $request, Calendar $calendar)
    {
        Form::populate($calendar);
        return response()->view('calendar::admin.calendar.edit', compact('calendar'));
    }

    /**
     * Update the calendar.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return Response
     */
    public function update(CalendarAdminRequest $request, Calendar $calendar)
    {
        try {
            
            parse_str($request->get('data'), $attributes);
            if (isset($attributes['status']) && $attributes['status'] == 'Both')
                $calendar -> create($attributes);
            else
                $calendar -> update($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('calendar::calendar.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/calendar/calendar/'),
            ], 201);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/calendar/calendar/'),
            ], 400);

        }

    }

    /**
     * Remove the calendar.
     *
     * @param Model   $calendar
     *
     * @return Response
     */
    public function destroy(CalendarAdminRequest $request, Calendar $calendar)
    {

        try {

            $t = $calendar->delete();

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('calendar::calendar.name')]),
                'code'     => 202,
                'redirect' => trans_url('/admin/calendar/calendar/0'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/calendar/calendar/' . $calendar->getRouteKey()),
            ], 400);
        }

    }

    /**
     * display the ajaxList.
     *
     * @param int $patient_id
     *
     * @param int $category
     *
     * @return Response
     */
    public function ajaxList($patient_id, $category)
    {

        return $this->repository->getCalendar($patient_id, $category);
    }

    /**
     * display the calendarList.
     *
     * @return Response
     */
    public function calendarList()
    {

        return $this->repository->getCalendarList();
    }

}
