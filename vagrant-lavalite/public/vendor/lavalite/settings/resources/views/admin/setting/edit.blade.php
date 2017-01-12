<div class="box-header with-border">
    <h3 class="box-title"> Edit  setting [{!!$setting->name!!}] </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='UPDATE' data-form='#edit-setting'  data-load-to='#entry-setting' data-datatable='#main-list'><i class="fa fa-floppy-o"></i> {{ trans('cms.save') }}</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CANCEL' data-load-to='#entry-setting' data-href='{{Trans::to('admin/settings/setting')}}/{{$setting->getRouteKey()}}'><i class="fa fa-times-circle"></i> {{ trans('cms.cancel') }}</button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#details" data-toggle="tab">Setting</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('edit-setting')
        ->method('PUT')
        ->enctype('multipart/form-data')
        ->action(Trans::to('admin/settings/setting/'. $setting->getRouteKey()))!!}
        <div class="tab-content">
            <div class="tab-pane active" id="details">
                @include('settings::admin.setting.partial.entry')
            </div>
        </div>
        {!!Form::close()!!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>