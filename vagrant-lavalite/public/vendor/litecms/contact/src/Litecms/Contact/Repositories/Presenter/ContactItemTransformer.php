<?php

namespace Litecms\Contact\Repositories\Presenter;

use League\Fractal\TransformerAbstract;
use Hashids;

class ContactItemTransformer extends TransformerAbstract
{
    public function transform(\Litecms\Contact\Models\Contact $contact)
    {
        return [
            'id'                => $contact->getRouteKey(),
            'name'              => $contact->name,
            'phone'             => $contact->phone,
            'mobile'            => $contact->mobile,
            'email'             => $contact->email,
            'website'           => $contact->website,
            'address'           => $contact->address,
        ];
    }
}