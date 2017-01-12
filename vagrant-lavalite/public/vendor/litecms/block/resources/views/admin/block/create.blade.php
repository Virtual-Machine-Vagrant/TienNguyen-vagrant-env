<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.new') }}  {!! trans('block::block.name') !!} </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='CREATE' data-form='#block-block-create'  data-load-to='#block-block-entry' data-datatable='#block-block-list'><i class="fa fa-floppy-o"></i> Save</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CLOSE' data-load-to='#block-block-entry' data-href='{{trans_url('admin/block/block/0')}}'><i class="fa fa-times-circle"></i> {{ trans('cms.close') }}</button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#details" data-toggle="tab">Block</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('block-block-create')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/block/block'))!!}
        <div class="tab-content">
            <div class="tab-pane active" id="details">
                @include('block::admin.block.partial.entry')
                <div class='col-md-6 col-sm-6'>
                 <label>Image</label>
                      {!!Filer::uploader('image',@$block->getUploadURL('image'),1)!!}
                      {!! Filer::editor('image', @$block['image'],1) !!}
                </div>
                <div class='col-md-6 col-sm-6'>
                    <label>Images</label>
                    {!! Filer::uploader('images', $block->getUploadURL('images')) !!}
                </div>
            </div>
        </div>
        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>
