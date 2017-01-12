<?php

namespace Lavalite\Message;
use User;

class Message
{
    /**
     * $message object.
     */
    protected $message;

    /**
     * Constructor.
     */
    public function __construct(\Lavalite\Message\Interfaces\MessageRepositoryInterface $message)
    {
        $this->message = $message;
    }

    /**
     * Returns count of message.
     *
     * @param array $filter
     *
     * @return int
     */
    public function count($slug)
    {

        $email = (User::check())?user()->email:user('admin.web')->email;
        $this->message->pushCriteria(new \Lavalite\Message\Repositories\Criteria\MessageUserCriteria());
        if($slug == 'Inbox'){
            return $this->message->scopeQuery(function ($query) use ($slug,$email) {
                return $query->with('user')->whereStatus($slug)->whereTo($email)->where("read", "=", null)->orderBy('id', 'DESC');
            })->count();
        }

        return $this->message->scopeQuery(function ($query) use ($slug) {
                return $query->with('user')->whereStatus($slug)->where("read", "=", null)->orderBy('id', 'DESC');
            })->count();
       
    }

    public function adminMsgcount($slug)
    {
        return $this->message->msgCount($slug);
    }

    /**
     * Display message of the user.
     *
     * @return void
     *
     * @author
     **/
    public function display($view)
    {
        return view('message::admin.message.' . $view);
    }

    public function messages()
    {
        return $this->message->messages();
    }

    public function unreadCount()
    {
        return $this->message->unreadCount();
    }

    public function unread()
    {
        return $this->message->unread();
    }

    /**
     *Taking all Users mail id
     *@return array
     */
    public function getUsers()
    {
        $array = [];
        $users = user()->select('email')->get();

        foreach ($users as $key => $user) {
            $array[$user->email] = $user->email;
        }

        return $array;
    }

}
