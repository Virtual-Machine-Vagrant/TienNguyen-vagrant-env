@include('public::notifications')
<div class="container">
    <div class="row">
        <div class="col-md-6">
            <h4 class="text-dark  header-title m-t-0"> {{ trans('cms.create')  }} Contact </h4>
        </div>
        <div class="col-md-6">
            <a href="{{ trans_url('/user/contact/contact') }}" class="btn btn-default pull-right"> {{ trans('cms.back')  }}</a>
        </div>
    </div>
    <p class="text-muted m-b-25 font-13">
        Your awesome text goes here.
    </p>
    <hr/>

    {!!Form::horizontal_open()
    ->id('create-contact-contact')
    ->method('POST')
    ->files('true')
    ->action(trans_url('user/contact/contact'))!!}
            @include('contact::user.contact.partial.entry')
            
      
    {!! Form::close() !!}
</div>