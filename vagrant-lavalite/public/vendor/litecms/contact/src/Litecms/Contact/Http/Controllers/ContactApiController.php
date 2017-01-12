<?php

namespace Litecms\Contact\Http\Controllers;

use App\Http\Controllers\Controller as BaseController;
use Litecms\Contact\Interfaces\ContactRepositoryInterface;
use Litecms\Contact\Repositories\Presenter\ContactItemTransformer;

/**
 * Pubic API controller class.
 */
class ContactApiController extends BaseController
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
        $this->middleware('api');
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
        $contacts = $this->repository
            ->setPresenter('\\Litecms\\Contact\\Repositories\\Presenter\\ContactListPresenter')
            ->scopeQuery(function($query){
                return $query->orderBy('id','DESC');
            })->paginate();

        $contacts['code'] = 2000;
        return response()->json($contacts)
                ->setStatusCode(200, 'INDEX_SUCCESS');
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
        $contact = $this->repository
            ->scopeQuery(function($query) use ($slug) {
            return $query->orderBy('id','DESC')
                         ->where('slug', $slug);
        })->first(['*']);

        if (!is_null($contact)) {
            $contact         = $this->itemPresenter($module, new ContactItemTransformer);
            $contact['code'] = 2001;
            return response()->json($contact)
                ->setStatusCode(200, 'SHOW_SUCCESS');
        } else {
            return response()->json([])
                ->setStatusCode(400, 'SHOW_ERROR');
        }

    }
}
