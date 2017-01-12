<div class="container">
    <h1> Categories</h1>

    <div class="row">
        <div class="col-md-8">
            @forelse($categories as $category)
            <div class="card-box">
                <div class="row">
                    <div class="col-md-6">
                        <h4 class="text-dark  header-title m-t-0"> {!! $category['name'] !!} </h4>
                    </div>
                    <div class="col-md-6">
                        <a href="{{ trans_url('block') }}/{!! $category->getPublicKey() !!}" class="btn btn-default pull-right"> {{ trans('cms.details')  }}</a>
                    </div>
                </div>
                <hr/>

                <div class="row">
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="name">
                    {!! trans('block::category.label.name') !!}
                </label><br />
                    {!! $category['name'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="status">
                    {!! trans('block::category.label.status') !!}
                </label><br />
                    {!! $category['status'] !!}
            </div>
        </div>
    </div>
            </div>
            @empty
            <div class="card-box">
                <h4 class="text-dark  header-title m-t-0">No modules</h4>
                <p class="text-muted m-b-25 font-13">
                    Your search for <b>'{{Request::get('search')}}'</b> returned empty result.
                </p>
            </div>
            @endif
            {{$blocks->render()}}
        </div>
        <div class="col-md-4">
            @include('block::public.category.aside')
        </div>
    </div>
</div>
