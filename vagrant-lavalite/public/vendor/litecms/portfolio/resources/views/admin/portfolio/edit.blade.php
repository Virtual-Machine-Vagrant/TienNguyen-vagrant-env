<div class="box-header with-border">
    <h3 class="box-title"> Edit  {!! trans('portfolio::portfolio.name') !!} [{!!$portfolio->title!!}] </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='UPDATE' data-form='#portfolio-portfolio-edit'  data-load-to='#portfolio-portfolio-entry' data-datatable='#portfolio-portfolio-list'><i class="fa fa-floppy-o"></i> Save</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CANCEL' data-load-to='#portfolio-portfolio-entry' data-href='{{trans_url('admin/portfolio/portfolio')}}/{{$portfolio->getRouteKey()}}'><i class="fa fa-times-circle"></i> {{ trans('cms.cancel') }}</button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>

    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#info" data-toggle="tab">Portfolio</a></li>
            <li ><a href="#image" data-toggle="tab">Image</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('portfolio-portfolio-edit')
        ->method('PUT')
        ->enctype('multipart/form-data')
        ->action(trans_url('admin/portfolio/portfolio/'. $portfolio->getRouteKey()))!!}

                @include('portfolio::admin.portfolio.partial.entry')

        {!!Form::close()!!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>
