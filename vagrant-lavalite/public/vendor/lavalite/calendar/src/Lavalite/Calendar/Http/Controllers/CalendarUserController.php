<?php

namespace Lavalite\Calendar\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Lavalite\Calendar\Http\Requests\CalendarUserRequest;
use Lavalite\Calendar\Interfaces\CalendarRepositoryInterface;
use Lavalite\Calendar\Models\Calendar;

class CalendarUserController extends BaseController
{
    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    protected $guard = 'web';

    /**
     * The home page route of user.
     *
     * @var string
     */
    protected $home = 'home';

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
        $this->middleware('auth:web');
        $this->middleware('auth.active:web');
        $this->setupTheme(config('theme.themes.user.theme'), config('theme.themes.user.layout'));
        parent::__construct();
    }

    /**
     * Display a listing of the resource.
     *
     * @return Response
     */
    public function index(CalendarUserRequest $request)
    {
        $this->theme->asset()->add('fullcalendar-css', 'packages/fullcalendar/fullcalendar.min.css');
        $this->theme->asset()->container('footer')->add('jquery-ui', 'packages/jquery-ui/jquery-ui.js');
        $this->theme->asset()->container('footer')->add('fullcalendar-js', 'packages/fullcalendar/fullcalendar.min.js');

        $calendars = $this->repository
            ->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarUserCriteria())
            ->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarEventCriteria())
            ->scopeQuery(function ($query) {
                return $query->orderBy('id', 'DESC');
            })->paginate();

        $this->theme->prependTitle(trans('calendar::calendar.names') . ' :: ');

        return $this->theme->of('calendar::user.calendar.index', compact('calendars'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     * @param Calendar $calendar
     *
     * @return Response
     */
    public function show(CalendarUserRequest $request, Calendar $calendar)
    {
        Form::populate($calendar);

        return $this->theme->of('calendar::user.calendar.show', compact('calendar'))->render();
    }

    /**
     * Show the form for creating a new resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(CalendarUserRequest $request)
    {

        $calendar = $this->repository->newInstance([]);
        Form::populate($calendar);

        return $this->theme->of('calendar::user.calendar.create', compact('calendar'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(CalendarUserRequest $request)
    {
        try {
            $attributes = $request->all();
            $attributes['user_id'] = user_id();
            $calendar = $this->repository->create($attributes);

            return redirect(trans_url('/user/calendar/calendar'))
                ->with('message', trans('messages.success.created', ['Module' => trans('calendar::calendar.name')]))
                ->with('code', 201);

        } catch (Exception $e) {
            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);
        }

    }

    /**
     * Show the form for editing the specified resource.
     *
     * @param Request $request
     * @param Calendar $calendar
     *
     * @return Response
     */
    public function edit(CalendarUserRequest $request, Calendar $calendar)
    {

        Form::populate($calendar);

        return $this->theme->of('calendar::user.calendar.edit', compact('calendar'))->render();
    }

    /**
     * Update the specified resource.
     *
     * @param Request $request
     * @param Calendar $calendar
     *
     * @return Response
     */
    public function update(CalendarUserRequest $request, Calendar $calendar)
    {
        try {
            parse_str($request->get('data'), $attributes);
            $status = $attributes['status'];
            $attributes['user_id'] = user_id();
            $attributes['status'] = 'Calendar';

            if ($status == 'Both') {
                $calendar->create($attributes);
            } else {
                $calendar->update($attributes);
            }

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('calendar::calendar.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/calendar/calendar/'),
            ], 201);

        } catch (Exception $e) {
            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);
        }

    }

    /**
     * Remove the specified resource.
     *
     * @param int $id
     *
     * @return Response
     */
    public function destroy(CalendarUserRequest $request, Calendar $calendar)
    {
        try {
            $this->repository->delete($calendar->getRouteKey());
            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('calendar::calendar.name')]),
                'code'     => 202,
                'redirect' => trans_url('/user/calendar/calendar'),
            ], 202);

        } catch (Exception $e) {

            redirect()->back()->withInput()->with('message', $e->getMessage())->with('code', 400);

        }

    }

    /**
     * display the ajaxList.
     *
     * @param int $request
     *
     * @return Response
     */
    public function ajaxList(CalendarUserRequest $request, $patient_id, $category)
    {
        return $this->repository->getCalendar($patient_id, $category);
    }

    /**
     * display the calendarList.
     *
     * @param int $request
     *
     * @return Response
     */
    public function calendarList(CalendarUserRequest $request)
    {
        return $this->repository->getCalendarList();
    }

}
