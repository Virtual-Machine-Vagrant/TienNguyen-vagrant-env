@include('public::notifications')
<div class="container">
    <div class="row">
        <div class="col-md-6">
            <h4 class="text-dark  header-title m-t-0"> Details of {!! $category['name'] !!} </h4>
        </div>
        <div class="col-md-6">
            <div class='pull-right'>
                <a href="{{ trans_url('/user/block/category') }}" class="btn btn-default"> {{ trans('cms.back')  }}</a>
                <a href="{{ trans_url('/user/block/category') }}/{{ category->getRouteKey() }}/edit" class="btn btn-success"> {{ trans('cms.edit')  }}</a>
                <a href="{{ trans_url('/user/block/category') }}/{{ category->getRouteKey() }}/copy" class="btn btn-warning"> {{ trans('cms.copy')  }}</a>
                <a href="{{ trans_url('/user/block/category') }}/{{ category->getRouteKey() }}/delete" class="btn btn-danger"> {{ trans('cms.delete')  }}</a>
            </div>
        </div>
    </div>
    <p class="text-muted m-b-25 font-13">
        Your awesome text goes here.
    </p>
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