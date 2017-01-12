<?php

namespace Lavalite\Message\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Form;
use Lavalite\Message\Http\Requests\MessageAdminRequest;
use Lavalite\Message\Interfaces\MessageRepositoryInterface;
use Lavalite\Message\Models\Message;
use User;

/**
 * Admin web controller class.
 */
class MessageAdminController extends BaseController
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
     * Initialize message controller.
     *
     * @param type MessageRepositoryInterface $message
     *
     * @return type
     */
    public function __construct(MessageRepositoryInterface $message)
    {
        $this->repository = $message;
        $this->middleware('web');
        $this->middleware('auth:admin.web');
        $this->setupTheme(config('theme.themes.admin.theme'), config('theme.themes.admin.layout'));
        parent::__construct();
    }

    /**
     * Display a list of message.
     *
     * @return Response
     */
    public function index(MessageAdminRequest $request)
    {
        $pageLimit = $request->input('pageLimit');
        
        $this->theme->asset()->add('select2-css', 'packages/select2/css/select2.min.css');
        $this->theme->asset()->container('extra')->add('select2-js', 'packages/select2/js/select2.full.js');

        if ($request->wantsJson()) {
            $messages = $this->repository
                ->setPresenter('\\Lavalite\\Message\\Repositories\\Presenter\\MessageListPresenter')
                ->scopeQuery(function ($query) {
                    return $query->orderBy('id', 'DESC');
                })->paginate($pageLimit);

            $messages['recordsTotal'] = $messages['meta']['pagination']['total'];
            $messages['recordsFiltered'] = $messages['meta']['pagination']['total'];
            $messages['request'] = $request->all();
            return response()->json($messages, 200);

        }

        $this->theme->prependTitle(trans('message::message.names') . ' :: ');
        return $this->theme->of('message::admin.message.index')->render();

    }

    /**
     * Display message.
     *
     * @param Request $request
     * @param Model   $message
     *
     * @return Response
     */
    public function show(MessageAdminRequest $request, Message $message)
    {

        if (!$message->exists) {
            return response()->view('message::admin.message.new', compact('message'));
        }

        Form::populate($message);
        return response()->view('message::admin.message.show', compact('message', 'messages'));
    }

    /**
     * Show the form for creating a new message.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(MessageAdminRequest $request)
    {

        $message = $this->repository->newInstance([]);

        Form::populate($message);

        return response()->view('message::admin.message.create', compact('message'));

    }

    /**
     * Create new message.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(MessageAdminRequest $request)
    {
        try {

            $mail_to = $request->get('mails');
            $sent = $request->all();
            $inbox = $request->all();

            foreach ($mail_to as $user_id) {
                $user = User::findUser($user_id);
                //sent
                $sent['user_id'] = user_id('admin.web');
                $sent['to'] = $user['email'];
                $message = $this->repository->create($sent);

                //inbox
                $inbox['user_id'] = $user_id;
                $inbox['to'] = $user['email'];
                $inbox['status'] = "Inbox";
                $message1 = $this->repository->create($inbox);

            }

            $inbox_count = $this->repository->msgCount('Inbox');
            $trash_count = $this->repository->msgCount('Trash');

            return response()->json([
                'message'     => trans('messages.success.updated', ['Module' => trans('message::message.name')]),
                'code'        => 204,
                'redirect'    => trans_url('/admin/message/message/' . $message->getRouteKey()),
                'inbox_count' => $inbox_count,
            ], 201);

        } catch (Exception $e) {
            return response()->json([
                'message' => $e->getMessage(),
                'code'    => 400,
            ], 400);
        }

    }

    /**
     * Show message for editing.
     *
     * @param Request $request
     * @param Model   $message
     *
     * @return Response
     */
    public function edit(MessageAdminRequest $request, Message $message)
    {
        Form::populate($message);
        return response()->view('message::admin.message.edit', compact('message'));
    }

    /**
     * Update the message.
     *
     * @param Request $request
     * @param Model   $message
     *
     * @return Response
     */
    public function update(MessageAdminRequest $request, Message $message)
    {
        try {

            $attributes = $request->all();

            $message->update($attributes);

            return response()->json([
                'message'  => trans('messages.success.updated', ['Module' => trans('message::message.name')]),
                'code'     => 204,
                'redirect' => trans_url('/admin/message/message/' . $message->getRouteKey()),
            ], 201);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/message/message/' . $message->getRouteKey()),
            ], 400);

        }

    }

    /**
     * Remove the message.
     *
     * @param Model   $message
     *
     * @return Response
     */
    public function destroy(MessageAdminRequest $request, Message $message)
    {
        try {

            if (!empty($request->get('arrayIds'))) {
                $ids = $request->get('arrayIds');
                $t = $this->repository->deleteMultiple($ids);
                return $t;
            } else {
                $t = $message->delete();
            }

            $this->repository->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageAdminCriteria());
            $inbox_count = $this->repository->msgCount('Inbox');
            $trash_count = $this->repository->msgCount('Trash');

            return response()->json([
                'message'     => trans('messages.success.deleted', ['Module' => trans('message::message.name')]),
                'code'        => 202,
                'redirect'    => trans_url('/admin/message/message/0'),
                'inbox_count' => $inbox_count,
                'trash_count' => $trash_count,
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/admin/message/message/' . $message->getRouteKey()),
            ], 400);
        }

    }

    public function inbox(MessageAdminRequest $request)
    {
        $messages['data'] = $this->repository->inbox();

        return view('message::admin.message.show', compact('messages'));
    }

    public function search(MessageAdminRequest $request, $slug = 'none', $status = 'Inbox')
    {

        $messages['data'] = $this->repository->search($status, $slug);

        return view('message::admin.message.search', compact('messages'));
    }

    public function updateStatus(MessageAdminRequest $request, Message $message, $status)
    {

        try {
            $Ids = $request->get('data');
            $attributes['status'] = $status;

            if ($Ids != null) {

                foreach ($Ids as $key => $id)

//$record = $this->records->findOrFail($id);
                //$record = fill($attributes)->save();
                {
                    $this->repository->update($attributes, $id);
                }

            }

            return;
        } catch (Exception $e) {

            return $this->error($e->getMessage());
        }

    }

    public function showMessage($status)
    {

        $messages['data'] = $this->repository->findByStatus($status);
        $messages['caption'] = $status;
        return view('message::admin.message.show', compact('messages'));
    }

    public function getDetails($caption, $id)
    {
        $message = $this->repository->getDetails($id);
        $message['caption'] = $caption;
        return view('message::admin.message.details', compact('message'));
    }

    public function reply($id)
    {
        $message = $this->repository->getDetails($id);
        return view('message::admin.message.reply', compact('message'));
    }

    public function forward($id)
    {
        $message = $this->repository->getDetails($id);

        return view('message::admin.message.forward', compact('message'));
    }

    /*   public function compose()
    {
    return view('message::admin.message.compose');
    }*/
    public function changeSubStatus(MessageAdminRequest $request, Message $message)
    {
        try {
            $id = $request->get('id');
            $sub = $request->get('star');
            $attributes['star'] = $sub;
            $this->repository->update($attributes, $id);
            return;
        } catch (Exception $e) {

            return $this->error($e->getMessage());
        }

    }

    public function starredMessages()
    {
        $messages['data'] = $this->repository->getStarredMessages();
        return view('message::admin.message.show', compact('messages'));
    }

}
