<div class="box-header with-border">
    <h3 class="box-title">  {!! trans('contact::contact.names') !!}</h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm"  data-action='NEW' data-load-to='#contact-contact-entry' data-href='{!!trans_url('admin/contact/contact/create')!!}'><i class="fa fa-plus-circle"></i> New </button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" style="min-height:100px">
    <div class="row">
        <div class="col-md-12 col-lg-12">
            <h1 class="text-center">
            <small>
            <button type="button" class="btn btn-app" data-toggle="tooltip" data-placement="top" title="" data-action='NEW' data-load-to='#contact-contact-entry' data-href='{!!trans_url('admin/contact/contact/create')!!}'>
            <span class="badge bg-purple">{!! Contact::count('contact') !!}</span>
            <i class="fa fa-plus-circle  fa-3x"></i>
            {{ trans('cms.create') }} {!! trans('contact::contact.name') !!}
            </button>
            <br>{!! trans('contact::contact.text.preview') !!}
            </small>
            </h1>
        </div>
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>