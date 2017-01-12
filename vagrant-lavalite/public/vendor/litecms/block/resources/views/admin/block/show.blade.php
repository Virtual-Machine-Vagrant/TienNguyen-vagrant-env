<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.view') }}   {!! trans('block::block.name') !!}  [{!! $block->name !!}]  </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-default btn-sm" data-action='NEW' data-load-to='#block-block-entry' data-href='{{trans_url('admin/block/block/create')}}'><i class="fa fa-times-circle"></i> New</button>
        @if($block->id )
        @if($block->published == 'Yes')
            <button type="button" class="btn btn-warning btn-sm" data-action="PUBLISHED" data-load-to='#block-block-entry' data-href="{{trans_url('admin/block/block/status/'. $block->getRouteKey())}}" data-value="No" data-datatable='#block-block-list'><i class="fa fa-times-circle"></i> Suspend</button>
        @else
            <button type="button" class="btn btn-success btn-sm" data-action="PUBLISHED" data-load-to='#block-block-entry' data-href="{{trans_url('admin/block/block/status/'. $block->getRouteKey())}}" data-value="Yes" data-datatable='#block-block-list'><i class="fa fa-check"></i> Published</button>
        @endif
        <button type="button" class="btn btn-primary btn-sm" data-action="EDIT" data-load-to='#block-block-entry' data-href='{{ trans_url('/admin/block/block') }}/{{$block->getRouteKey()}}/edit'><i class="fa fa-pencil-square"></i> Edit</button>
        <button type="button" class="btn btn-danger btn-sm" data-action="DELETE" data-load-to='#block-block-entry' data-datatable='#block-block-list' data-href='{{ trans_url('/admin/block/block') }}/{{$block->getRouteKey()}}' >
        <i class="fa fa-times-circle"></i> Delete
        </button>
        @endif
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#details" data-toggle="tab">  {!! trans('block::block.name') !!}</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('block-block-show')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/block/block'))!!}
            <div class="tab-content">
                <div class="tab-pane active" id="details">
                    @include('block::admin.block.partial.entry')
                    <div class='col-md-6 col-sm-6'>

                    <label>Image</label><br>
                    <img src="{!!url($block->defaultImage('block.sm','image'))!!}">

                </div>
                    <div class='col-md-6 col-sm-6'>

                     <label>Images</label><br>
                          @foreach($block->getImages('block.sm','images') as $image)
                            <img src="{!!url(@$image)!!}"> &nbsp;
                          @endforeach

                    </div>
                </div>
            </div>
        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>
