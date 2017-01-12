<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.edit') }}  {{ trans('page::page.name') }} [{{$page->name}}] </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='UPDATE' data-form='#edit-page'  data-load-to='#page-page-entry' data-datatable='#main-list'><i class="fa fa-floppy-o"></i> {{ trans('cms.save') }}</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CANCEL' data-load-to='#page-page-entry' data-href='{{Trans::to('admin/page/page')}}/{{$page->getRouteKey()}}'><i class="fa fa-times-circle"></i> {{ trans('cms.cancel') }}</button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#details" data-toggle="tab">{{ trans('page::page.tab.page') }}</a></li>
            <li><a href="#metatags" data-toggle="tab">{{ trans('page::page.tab.meta') }}</a></li>
            <li><a href="#settings" data-toggle="tab">{{ trans('page::page.tab.setting') }}</a></li>
            <li><a href="#images" data-toggle="tab">{{ trans('page::page.tab.image') }}</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('edit-page')
        ->method('PUT')
        ->enctype('multipart/form-data')
        ->action(Trans::to('admin/page/page/'. $page->getRouteKey()))!!}
        {!!Form::token()!!}
        <div class="tab-content">
            <div class="tab-pane active" id="details">
                {!! Form::hidden('upload_folder')!!}
                {!! Form::text('name')
                -> label(trans(trans('page::page.label.name')))
                -> required()
                -> placeholder(trans(trans('page::page.placeholder.name')))!!}

                {!! Form::textarea('content')
                -> label(trans('page::page.label.content'))
                -> value(e($page['content']))
                -> dataUpload(URL::to($page->getUploadURL('content')))
                -> addClass('html-editor')
                -> placeholder(trans('page::page.placeholder.content'))!!}
            </div>
            <div class="tab-pane" id="metatags">
                <div class="row">
                    <div class="col-md-4 col-lg-4">
                        {!! Form::text('title')
                        -> label(trans('page::page.label.title'))
                        -> placeholder(trans('page::page.placeholder.title'))!!}
                    </div>
                    <div class="col-md-4 col-lg-4">
                        {!! Form::text('heading')
                        -> label(trans('page::page.label.heading'))
                        -> placeholder(trans('page::page.placeholder.heading'))!!}
                    </div>
                    <div class='col-md-4 col-sm-4'>
                           {!! Form::text('sub_heading')
                           -> label(trans('page::page.label.sub_heading'))
                           -> placeholder(trans('page::page.placeholder.sub_heading'))!!}
                    </div>
                    <div class='col-md-12 col-sm-12'>
                           {!! Form::textarea('abstract')
                           -> label(trans('page::page.label.abstract'))
                           -> rows(4)
                           -> placeholder(trans('page::page.placeholder.abstract'))!!}
                    </div>
                    <div class='col-md-4 col-sm-6'>
                           {!! Form::text('meta_title')
                           -> label(trans('page::page.label.meta_title'))
                           -> placeholder(trans('page::page.placeholder.meta_title'))!!}
                    </div>
                    <div class='col-md-4 col-sm-6'>
                           {!! Form::text('meta_keyword')
                           -> label(trans('page::page.label.meta_keyword'))
                           -> placeholder(trans('page::page.placeholder.meta_keyword'))!!}
                    </div>
                    <div class='col-md-4 col-sm-6'>
                           {!! Form::text('meta_description')
                           -> label(trans('page::page.label.meta_description'))
                           -> placeholder(trans('page::page.placeholder.meta_description'))!!}
                    </div>
                </div>
            </div>
            <div class="tab-pane" id="settings">
                <div class="row">
                    <div class="col-md-6 ">
                        {!! Form::range('order')
                        -> label(trans('page::page.label.order'))
                        -> placeholder(trans('page::page.placeholder.order'))!!}

                        {!! Form::text('slug')
                        -> label(trans('page::page.label.slug'))
                        -> append('.html')
                        -> placeholder(trans('page::page.placeholder.slug'))!!}

                        {!! Form::select('view')
                        -> options(trans('page::page.options.view'))
                        -> label(trans('page::page.label.view'))
                        -> placeholder(trans('page::page.placeholder.view'))!!}
                    </div>
                    <div class='col-md-6'>
                        {!! Form::select('compiler')
                        -> options(trans('page::page.options.compiler'))
                        -> label(trans('page::page.label.compiler'))
                        -> placeholder(trans('page::page.placeholder.compiler'))!!}

                        {!! Form::select('category_id')
                        -> options([])
                        -> label(trans('page::page.label.category'))
                        -> placeholder(trans('page::page.placeholder.category'))!!}

                        {!! Form::hidden('status')
                        -> forceValue('0')!!}
                        {!! Form::checkbox('status')
                        -> label(trans('page::page.label.status'))
                        ->inline()!!}
                    </div>
                </div>
            </div>
            <div class="tab-pane" id="images">
                <div class="row">
                    <div class='col-md-3'>
                    <label for="order" class="control-label">Banner Image</label>
                       {!! Filer::uploader('banner', $page->getUploadURL('banner'), 1) !!}
                    </div>
                    <div class='col-md-9'>
                        {!! Filer::editor('banner', $page['banner'], 1) !!}
                    </div>
                </div>
                <div class="row">
                    <div class='col-md-3'>
                    <label for="order" class="control-label">Images</label>
                        {!! Filer::uploader('images', $page->getUploadURL('images')) !!}
                    </div>
                    <div class='col-md-9'>
                        {!! Filer::editor('images', $page['images']) !!}
                    </div>
                </div>
            </div>
        </div>
    </div>
    {!!Form::close()!!}
</div>
<div class="box-footer" >
    &nbsp;
</div>
