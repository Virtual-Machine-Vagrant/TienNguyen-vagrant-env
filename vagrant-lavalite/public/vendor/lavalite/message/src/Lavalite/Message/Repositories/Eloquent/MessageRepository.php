<?php

namespace Lavalite\Message\Repositories\Eloquent;

use Lavalite\Message\Interfaces\MessageRepositoryInterface;
use Litepie\Repository\Eloquent\BaseRepository;
use User;

class MessageRepository extends BaseRepository implements MessageRepositoryInterface
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
        $this->fieldSearchable = config('package.message.message.search');
        return config('package.message.message.model');
    }

    public function deleteMultiple($ids)
    {
        return $this->model->whereIn('id', $ids)->delete();
    }

    public function unread()
    {

        return $this->model->with('user')->whereStatus("Inbox")->where("read", "=", null)->orderBy('id', 'DESC')->get();
    }

    public function messages()
    {
        $email = (User::check())?user()->email:user('admin.web')->email;

        return $this->model->with('user')->whereTo($email)->whereStatus('Sent')->orderBy('id', 'DESC')->take(10)->get();
    }

    public function msgCount($slug)
    {
        $email = (User::check())?user()->email:user('admin.web')->email;
        return $this->model->with('user')
            ->where(function($query) use($slug,$email){
                if ($slug == 'Inbox') {
                $query->whereTo($email);
                }
            })
            ->whereStatus($slug)
            ->whereUserId(user_id())
            ->where("read", "=", null)
            ->orderBy('id', 'DESC')
            ->count();
    }

    public function search($status, $slug)
    {

        return $this->model->with('user')->where(function ($query) use ($slug) {

            if ($slug != 'none') {
                $query->orWhere('subject', 'LIKE', '%' . $slug . '%');
                $query->orWhere('message', 'LIKE', '%' . $slug . '%');
                $query->orWhere('created_at', 'LIKE', '%' . $slug . '%');
            }

        })
            ->whereStatus($status)
            ->orderBy('id', 'DESC')
            ->paginate(10);
    }

    public function findByStatus($status)
    {
        return $this->model
            ->with('user')
            ->whereStatus($status)
            ->whereUserId(user_id('admin.web'))
            ->orderBy('id', 'DESC')->paginate(10);
    }

    public function getStarredMessages()
    {
        return $this->model
            ->with('user')
            ->whereStar("Yes")
            ->where('status','<>',"Trash")
            ->whereUserId(user_id('admin.web'))
            ->orderBy('id', 'DESC')->paginate(10);
    }

    public function inbox()
    {
        $email = (User::check())?user()->email:user('admin.web')->email;

        return $this->model->with('user')->whereTo($email)->whereStatus('Sent')->orderBy('id', 'DESC')->paginate(10);
    }

    public function getDetails($id)
    {
        return $this->model->with('user')->whereId($id)->first();
    }

}
