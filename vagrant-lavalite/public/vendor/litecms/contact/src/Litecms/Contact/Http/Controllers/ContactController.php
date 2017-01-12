<?php

namespace Litecms\Contact\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Illuminate\Http\Request as Request;
use Litecms\Contact\Interfaces\ContactRepositoryInterface;
use Redirect;
use Session;

class ContactController extends BaseController
{
    /**
     * Constructor.
     *
     * @param type \Litecms\Contact\Interfaces\ContactRepositoryInterface $contact
     *
     * @return type
     */
    public function __construct(ContactRepositoryInterface $contact)
    {
        $this->middleware('web');
        $this->setupTheme(config('theme.themes.public.theme'), config('theme.themes.public.layout'));
        $this->repository = $contact;
        parent::__construct();
    }

    /**
     * Show contact's list.
     *
     * @param string $slug
     *
     * @return response
     */
    protected function index()
    {
        $contacts = $this->repository->scopeQuery(function ($query) {
            return $query->orderBy('id', 'DESC')->first();
        })->first();

        return $this->theme->of('contact::public.contact.index', compact('contacts'))->render();
    }

    /**
     * Show contact.
     *
     * @param string $slug
     *
     * @return response
     */
    protected function show($slug)
    {
        $contact = $this->repository->scopeQuery(function ($query) use ($slug) {
            return $query->orderBy('id', 'DESC')
                ->where('slug', $slug);
        })->first(['*']);

        return $this->theme->of('contact::public.contact.show', compact('contact'))->render();
    }

    /**
     * Send mail
     *
     * @param string $slug
     *
     * @return response
     */
    public function sendMail(Request $request)
    {

        Mail::send('contact::public.emails.message', $data, function ($message) {
            $message->from($data['email'], $data['name']);

            $message->to(config('package.contact.to'))->cc(config('package.contact.tcc'));
        });

        Session::flash('success', 'Success! Your message send successfully.');

        return redirect(trans_url('/contacts'));
    }
}
