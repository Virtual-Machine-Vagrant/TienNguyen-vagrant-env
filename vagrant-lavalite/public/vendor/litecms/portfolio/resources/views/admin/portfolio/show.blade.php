<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.view') }}   {!! trans('portfolio::portfolio.name') !!}  [{!! $portfolio->title !!}]  </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-success btn-sm" data-action='NEW' data-load-to='#portfolio-portfolio-entry' data-href='{{trans_url('admin/portfolio/portfolio/create')}}'><i class="fa fa-times-circle"></i> New</button>
        @if($portfolio->id )
        @if($portfolio->published == 'Yes')
            <button type="button" class="btn btn-warning btn-sm" data-action="PUBLISHED" data-load-to='#portfolio-portfolio-entry' data-href="{{trans_url('admin/portfolio/portfolio/status/'. $portfolio->getRouteKey())}}" data-value="No" data-datatable='#portfolio-portfolio-list'><i class="fa fa-times-circle"></i> Suspend</button>
        @else
            <button type="button" class="btn btn-success btn-sm" data-action="PUBLISHED" data-load-to='#portfolio-portfolio-entry' data-href="{{trans_url('admin/portfolio/portfolio/status/'. $portfolio->getRouteKey())}}" data-value="Yes" data-datatable='#portfolio-portfolio-list'><i class="fa fa-check"></i> Published</button>
        @endif
        <button type="button" class="btn btn-primary btn-sm" data-action="EDIT" data-load-to='#portfolio-portfolio-entry' data-href='{{ trans_url('/admin/portfolio/portfolio') }}/{{$portfolio->getRouteKey()}}/edit'><i class="fa fa-pencil-square"></i> Edit</button>
        <button type="button" class="btn btn-danger btn-sm" data-action="DELETE" data-load-to='#portfolio-portfolio-entry' data-datatable='#portfolio-portfolio-list' data-href='{{ trans_url('/admin/portfolio/portfolio') }}/{{$portfolio->getRouteKey()}}' >
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
            <li class="active"><a href="#info" data-toggle="tab">Portfolio</a></li>
            <li ><a href="#image" data-toggle="tab">Image</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('portfolio-portfolio-show')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/portfolio/portfolio'))!!}

                    @include('portfolio::admin.portfolio.partial.view')

        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>
