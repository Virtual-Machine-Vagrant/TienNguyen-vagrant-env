<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.view') }}   {{ trans('page::page.name') }} [{{$page->name}}]</h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-success btn-sm" data-action='NEW' data-load-to='#page-page-entry' data-href='{{Trans::to('admin/page/page/create')}}'><i class="fa fa-times-circle"></i> {{ trans('cms.new') }}</button>
        @if($page->id)
        <button type="button" class="btn btn-primary btn-sm" data-action="EDIT" data-load-to='#page-page-entry' data-href='{{ trans_url('/admin/page/page') }}/{{$page->getRouteKey()}}/edit'><i class="fa fa-pencil-square"></i> {{ trans('cms.edit') }}</button>
        <button type="button" class="btn btn-danger btn-sm" data-action="DELETE" data-load-to='#page-page-entry' data-datatable='#main-list' data-href='{{ trans_url('/admin/page/page') }}/{{$page->getRouteKey()}}' >
        <i class="fa fa-times-circle"></i> {{ trans('cms.delete') }}
        </button>
        @endif
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
        ->id('show-page')
        ->method('PUT')
        ->action(trans_url('admin/page/page/'. $page->getRouteKey()))!!}
        {!!Form::token()!!}
        <div class="tab-content">
            <div class="tab-pane active" id="details">

                {!! Form::text('name')
                -> label(trans(trans('page::page.label.name')))
                -> placeholder(trans(trans('page::page.placeholder.name')))
                -> disabled()!!}

                {!! Form::textarea('content')
                -> label(trans('page::page.label.content'))
                -> value(e($page['content']))
                -> dataUpload(URL::to($page->getUploadURL('content')))
                -> addClass('html-editor')
                -> placeholder(trans('page::page.placeholder.content'))
                -> disabled()!!}
            </div>
            <div class="tab-pane" id="metatags">
                <div class="row">
                    <div class="col-md-6 col-lg-6">
                        {!! Form::text('title')
                        -> label(trans('page::page.label.title'))
                        -> placeholder(trans('page::page.placeholder.title'))
                        -> disabled()!!}

                    </div>
                    <div class="col-md-6 col-lg-6">

                        {!! Form::text('heading')
                        -> label(trans('page::page.label.heading'))
                        -> placeholder(trans('page::page.placeholder.heading'))
                        -> disabled()!!}
                    </div>
                </div>
                <div class="row">
                    <div class="col-md-6 col-lg-6">
                        {!! Form::textarea('keyword')
                        -> label(trans('page::page.label.keyword'))
                        -> rows(4)
                        -> placeholder(trans('page::page.placeholder.keyword'))
                        -> disabled()!!}
                    </div>
                    <div class="col-md-6 col-lg-6">
                        {!! Form::textarea('description')
                        -> label(trans('page::page.label.description'))
                        -> rows(4)
                        -> placeholder(trans('page::page.placeholder.description'))
                        -> disabled()!!}
                    </div>
                </div>
            </div>
            <div class="tab-pane" id="settings">
                <div class="row">
                    <div class="col-md-6 ">
                        {!! Form::range('order')
                        -> label(trans('page::page.label.order'))
                        -> placeholder(trans('page::page.placeholder.order'))
                        -> disabled()!!}

                        {!! Form::text('slug')
                        -> label(trans('page::page.label.slug'))
                        -> append('.html')
                        -> placeholder(trans('page::page.placeholder.slug'))
                        -> disabled()!!}

                        {!! Form::select('view')
                        -> options(trans('page::page.options.view'))
                        -> label(trans('page::page.label.view'))
                        -> placeholder(trans('page::page.placeholder.view'))
                        -> disabled()!!}
                    </div>
                    <div class='col-md-6'>
                        {!! Form::select('compiler')
                        -> options(trans('page::page.options.compiler'))
                        -> label(trans('page::page.label.compiler'))
                        -> placeholder(trans('page::page.placeholder.compiler'))
                        -> disabled()!!}

                        {!! Form::select('category_id')
                        -> options([])
                        -> label(trans('page::page.label.category'))
                        -> placeholder(trans('page::page.placeholder.category'))
                        -> disabled()!!}
                        {!! Form::hidden('status')
                        -> forceValue('0')
                        -> disabled()!!}

                        {!! Form::checkbox('status')
                        -> label(trans('page::page.label.status'))
                        -> inline()
                        -> disabled()!!}
                    </div>
                </div>
            </div>
            <div class="tab-pane" id="images">
                <div class="row">
                    <div class='col-md-12'>
                        <label for="order" class="control-label">Banner Image</label>
                        {!! Filer::show($page['banner'], 1) !!}<br/><br/>
                    </div>
                </div>
                <div class="row">
                    <div class='col-md-12'>
                        <label for="order" class="control-label">Gallery Images</label><br/>
                        {!! Filer::show($page['images']) !!}
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
