<?php

namespace Lavalite\Message\Http\Controllers;

use App\Http\Controllers\UserWebController as UserController;
use Form;
use Lavalite\Message\Http\Requests\MessageUserRequest;
use Lavalite\Message\Interfaces\MessageRepositoryInterface;
use Lavalite\Message\Models\Message;
use User;

class MessageUserController extends UserController
{
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
        parent::__construct();
    }

    /**
     * Display a listing of the resource.
     *
     * @return Response
     */
    public function index(MessageUserRequest $request)
    {
        $this->theme->asset()->add('select2-css', 'packages/select2/css/select2.min.css');
        $this->theme->asset()->container('footer')->add('select2-js', 'packages/select2/js/select2.full.js');

        $this->repository->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageUserCriteria());
        $messages = $this->repository->scopeQuery(function ($query) {
            return $query->orderBy('id', 'DESC');
        })->paginate();

        $this->theme->prependTitle(trans('message::message.names') . ' :: ');

        return $this->theme->of('message::user.message.index', compact('messages'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     * @param Message $message
     *
     * @return Response
     */
    public function show(MessageUserRequest $request, Message $message)
    {
        Form::populate($message);

        return $this->theme->of('message::user.message.show', compact('message'))->render();
    }

    /**
     * Show the form for creating a new resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function create(MessageUserRequest $request)
    {

        $message = $this->repository->newInstance([]);
        Form::populate($message);

        return $this->theme->of('message::user.message.create', compact('message'))->render();
    }

    /**
     * Display the specified resource.
     *
     * @param Request $request
     *
     * @return Response
     */
    public function store(MessageUserRequest $request)
    {
        try {

            $mails = $request->get('mails');
            $attributes = $request->all();
            $attributes['user_id'] = user_id('web');
            $attributes['name'] = userEmai()->name;
            $attributes['from'] = user()->email;   

            $attributes['to'] = implode(",", $mails); 
            $attributes['status'] = $request->get('status');
            $message = $this->repository->create($attributes);

            if($request->get('status') == 'Sent'){
                foreach ($mails as $mail) {
                    $attributes['status'] = "Inbox";
                    $message1 = $this->repository->create($attributes);
                }
            }

            $sent_count = $this->repository->msgCount('Sent');
            $inbox_count = $this->repository->msgCount('Inbox');

            return response()->json([
                'message'     => trans('messages.success.updated', ['Module' => trans('message::message.name')]),
                'code'        => 204,
                'redirect'    => trans_url('/user/message/message/' . $message->getRouteKey()),
                'sent_count'  => $sent_count,
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
     * Show the form for editing the specified resource.
     *
     * @param Request $request
     * @param Message $message
     *
     * @return Response
     */
    public function edit(MessageUserRequest $request, Message $message)
    {

        Form::populate($message);

        return $this->theme->of('message::user.message.edit', compact('message'))->render();
    }

    /**
     * Update the specified resource.
     *
     * @param Request $request
     * @param Message $message
     *
     * @return Response
     */
    public function update(MessageUserRequest $request, Message $message)
    {
        try {
            $this->repository->update($request->all(), $message->getRouteKey());

            return redirect(trans_url('/user/message/message'))
                ->with('message', trans('messages.success.updated', ['Module' => trans('message::message.name')]))
                ->with('code', 204);

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
    public function destroy(MessageUserRequest $request, Message $message)
    {

        try {

            if (!empty($request->get('arrayIds'))) {
                $ids = $request->get('arrayIds');
                $t = $this->repository->deleteMultiple($ids);
                return $t;
            } else {
                $t = $message->delete();
            }

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('message::message.name')]),
                'code'     => 202,
                'redirect' => trans_url('/user/message/message/0'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/user/message/message/' . $message->getRouteKey()),
            ], 400);
        }

    }

    public function compose(MessageUserRequest $request)
    {
        return view('message::user.message.compose');
    }

    public function inbox(MessageUserRequest $request)
    {
        $messages['data'] = $this->repository->inbox();

        return view('message::user.message.show', compact('messages'));
    }

    public function search(MessageUserRequest $request, $slug = 'none', $status = 'Inbox')
    {

        $messages['data'] = $this->repository->search($status, $slug);

        return view('message::user.message.search', compact('messages'));
    }

    public function updateStatus(MessageUserRequest $request, Message $message, $status)
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
        
        $this->repository->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageUserCriteria());
        if($status == 'Inbox'){
            $messages['data'] = $this->repository->scopeQuery(function ($query) use ($status) {
                return $query->with('user')->whereStatus($status)->whereTo(user()->email)->orderBy('id', 'DESC');
            })->paginate();
        }else{
            $messages['data'] = $this->repository->scopeQuery(function ($query) use ($status) {
                return $query->with('user')->whereStatus($status)->orderBy('id', 'DESC');
            })->paginate();        
        }
            
        $messages['caption'] = $status;
        return view('message::user.message.show', compact('messages'));
    }

    public function getDetails($caption, $id)
    {
        $message = $this->repository->getDetails($id);
        $message['caption'] = $caption;
        return view('message::user.message.details', compact('message'));
    }

    public function reply($id)
    {
        $message = $this->repository->getDetails($id);
        return view('message::user.message.reply', compact('message'));
    }

    public function forward($id)
    {
        $message = $this->repository->getDetails($id);

        return view('message::user.message.forward', compact('message'));
    }

    /*   public function compose()
    {
    return view('message::user.message.compose');
    }*/

    public function importantSubStatus(MessageUserRequest $request, Message $message)
    {
        try {
            $id = $request->get('id');
            $sub = $request->get('important');
            $attributes['important'] = $sub;
            $this->repository->update($attributes, $id);
            return;
        } catch (Exception $e) {

            return $this->error($e->getMessage());
        }

    }

    /*   public function compose()
    {
    return view('message::user.message.compose');
    }*/

    public function starredSubStatus(MessageUserRequest $request, Message $message)
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
        $this->repository->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageUserCriteria());
        $messages['data'] = $this->repository->scopeQuery(function ($query) {
            return $query->with('user')->whereStar(1)->orderBy('id', 'DESC');
        })->paginate();
        $messages['caption'] = "Starred";
        return view('message::user.message.show', compact('messages'));
    }

    /**
     *getting  Important message
     *@return
     */
    public function importantMessages()
    {
        $this->repository->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageUserCriteria());
        $messages['data'] = $this->repository->scopeQuery(function ($query) {
            return $query->with('user')->whereImportant(1)->orderBy('id', 'DESC');
        })->paginate();
        $messages['caption'] = "Important";
        return view('message::user.message.show', compact('messages'));
    }

    /**
     * Remove the specified resource.
     *
     * @param int $id
     *
     * @return Response
     */
    public function deleteMultiple(MessageUserRequest $request, Message $message)
    {

        try {

            if (!empty($request->get('arrayIds'))) {
                $ids = $request->get('arrayIds');

                if (is_array($ids)) {
                    $t = $this->repository->deleteMultiple($ids);
                } else {
                    $t = $message->delete($ids);
                }

                return $t;
            }

            return response()->json([
                'message'  => trans('messages.success.deleted', ['Module' => trans('message::message.name')]),
                'code'     => 202,
                'redirect' => trans_url('/user/message/message/0'),
            ], 202);

        } catch (Exception $e) {

            return response()->json([
                'message'  => $e->getMessage(),
                'code'     => 400,
                'redirect' => trans_url('/user/message/message/' . $message->getRouteKey()),
            ], 400);
        }

    }

}
