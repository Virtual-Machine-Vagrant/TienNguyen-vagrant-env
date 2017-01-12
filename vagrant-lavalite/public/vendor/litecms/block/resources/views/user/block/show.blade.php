@include('public::notifications')
<div class="container">
    <div class="row">
        <div class="col-md-6">
            <h4 class="text-dark  header-title m-t-0"> Details of {!! $block['name'] !!} </h4>
        </div>
        <div class="col-md-6">
            <div class='pull-right'>
                <a href="{{ trans_url('/user/block/block') }}" class="btn btn-default"> {{ trans('cms.back')  }}</a>
                <a href="{{ trans_url('/user/block/block') }}/{{ block->getRouteKey() }}/edit" class="btn btn-success"> {{ trans('cms.edit')  }}</a>
                <a href="{{ trans_url('/user/block/block') }}/{{ block->getRouteKey() }}/copy" class="btn btn-warning"> {{ trans('cms.copy')  }}</a>
                <a href="{{ trans_url('/user/block/block') }}/{{ block->getRouteKey() }}/delete" class="btn btn-danger"> {{ trans('cms.delete')  }}</a>
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
                <label for="category_id">
                    {!! trans('block::block.label.category_id') !!}
                </label><br />
                    {!! $block['category_id'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="name">
                    {!! trans('block::block.label.name') !!}
                </label><br />
                    {!! $block['name'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="url">
                    {!! trans('block::block.label.url') !!}
                </label><br />
                    {!! $block['url'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="description">
                    {!! trans('block::block.label.description') !!}
                </label><br />
                    {!! $block['description'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="status">
                    {!! trans('block::block.label.status') !!}
                </label><br />
                    {!! $block['status'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="image">
                    {!! trans('block::block.label.image') !!}
                </label><br />
                    {!! $block['image'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="images">
                    {!! trans('block::block.label.images') !!}
                </label><br />
                    {!! $block['images'] !!}
            </div>
        </div>
    </div>
</div>