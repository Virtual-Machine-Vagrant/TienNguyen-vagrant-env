<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.new') }}  {!! trans('portfolio::portfolio.name') !!} </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='CREATE' data-form='#portfolio-portfolio-create'  data-load-to='#portfolio-portfolio-entry' data-datatable='#portfolio-portfolio-list'><i class="fa fa-floppy-o"></i> Save</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CLOSE' data-load-to='#portfolio-portfolio-entry' data-href='{{trans_url('admin/portfolio/portfolio/0')}}'><i class="fa fa-times-circle"></i> {{ trans('cms.close') }}</button>
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
        ->id('portfolio-portfolio-create')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/portfolio/portfolio'))!!}

                @include('portfolio::admin.portfolio.partial.entry')

        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>
