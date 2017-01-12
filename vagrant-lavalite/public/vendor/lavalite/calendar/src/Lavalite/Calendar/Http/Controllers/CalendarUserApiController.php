<?php

namespace Lavalite\Calendar\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Lavalite\Calendar\Http\Requests\CalendarUserApiRequest;
use Lavalite\Calendar\Interfaces\CalendarRepositoryInterface;
use Lavalite\Calendar\Models\Calendar;

/**
 * User API controller class.
 */
class CalendarUserApiController extends BaseController
{

    /**
     * The authentication guard that should be used.
     *
     * @var string
     */
    protected $guard = 'api';
    
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
        $this->middleware('api');
        $this->middleware('jwt.auth:api');
        $this->setupTheme(config('theme.themes.user.theme'), config('theme.themes.user.layout'));
        parent::__construct();
    }

    /**
     * Display a list of calendar.
     *
     * @return json
     */
    public function index(CalendarUserApiRequest $request)
    {
        $calendars  = $this->repository
            ->pushCriteria(new \Lavalite\Calendar\Repositories\Criteria\CalendarUserCriteria())
            ->setPresenter('\\Lavalite\\Calendar\\Repositories\\Presenter\\CalendarListPresenter')
            ->scopeQuery(function($query){
                return $query->orderBy('id','DESC');
            })->all();
        $calendars['code'] = 2000;
        return response()->json($calendars) 
            ->setStatusCode(200, 'INDEX_SUCCESS');

    }

    /**
     * Display calendar.
     *
     * @param Request $request
     * @param Model   Calendar
     *
     * @return Json
     */
    public function show(CalendarUserApiRequest $request, Calendar $calendar)
    {

        if ($calendar->exists) {
            $calendar         = $calendar->presenter();
            $calendar['code'] = 2001;
            return response()->json($calendar)
                ->setStatusCode(200, 'SHOW_SUCCESS');;
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }

    }

    /**
     * Show the form for creating a new calendar.
     *
     * @param Request $request
     *
     * @return json
     */
    public function create(CalendarUserApiRequest $request, Calendar $calendar)
    {
        $calendar         = $calendar->presenter();
        $calendar['code'] = 2002;
        return response()->json($calendar)
            ->setStatusCode(200, 'CREATE_SUCCESS');
    }

    /**
     * Create new calendar.
     *
     * @param Request $request
     *
     * @return json
     */
    public function store(CalendarUserApiRequest $request)
    {
        try {
            $attributes             = $request->all();
            $attributes['user_id']  = user_id('admin.api');
            $calendar          = $this->repository->create($attributes);
            $calendar          = $calendar->presenter();
            $calendar['code']  = 2004;

            return response()->json($calendar)
                ->setStatusCode(201, 'STORE_SUCCESS');
        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 4004,
            ])->setStatusCode(400, 'STORE_ERROR');
        }

    }

    /**
     * Show calendar for editing.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return json
     */
    public function edit(CalendarUserApiRequest $request, Calendar $calendar)
    {
        if ($calendar->exists) {
            $calendar         = $calendar->presenter();
            $calendar['code'] = 2003;
            return response()-> json($calendar)
                ->setStatusCode(200, 'EDIT_SUCCESS');;
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }
    }

    /**
     * Update the calendar.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return json
     */
    public function update(CalendarUserApiRequest $request, Calendar $calendar)
    {
        try {

            $attributes = $request->all();

            $calendar->update($attributes);
            $calendar         = $calendar->presenter();
            $calendar['code'] = 2005;

            return response()->json($calendar)
                ->setStatusCode(201, 'UPDATE_SUCCESS');


        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 4005,
            ])->setStatusCode(400, 'UPDATE_ERROR');

        }
    }

    /**
     * Remove the calendar.
     *
     * @param Request $request
     * @param Model   $calendar
     *
     * @return json
     */
    public function destroy(CalendarUserApiRequest $request, Calendar $calendar)
    {

        try {

            $t = $calendar->delete();

            return response()->json([
                'message'  => trans('messages.success.delete', ['Module' => trans('calendar::calendar.name')]),
                'code'     => 2006
            ])->setStatusCode(202, 'DESTROY_SUCCESS');

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 4006,
            ])->setStatusCode(400, 'DESTROY_ERROR');
        }
    }
}
