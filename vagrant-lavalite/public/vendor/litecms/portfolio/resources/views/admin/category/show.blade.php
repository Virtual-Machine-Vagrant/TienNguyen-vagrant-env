<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.view') }}   {!! trans('portfolio::category.name') !!}  [{!! $category->name !!}]  </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-success btn-sm" data-action='NEW' data-load-to='#portfolio-category-entry' data-href='{{trans_url('admin/portfolio/category/create')}}'><i class="fa fa-times-circle"></i> New</button>
        @if($category->id )
        <button type="button" class="btn btn-primary btn-sm" data-action="EDIT" data-load-to='#portfolio-category-entry' data-href='{{ trans_url('/admin/portfolio/category') }}/{{$category->getRouteKey()}}/edit'><i class="fa fa-pencil-square"></i> Edit</button>
        <button type="button" class="btn btn-danger btn-sm" data-action="DELETE" data-load-to='#portfolio-category-entry' data-datatable='#portfolio-category-list' data-href='{{ trans_url('/admin/portfolio/category') }}/{{$category->getRouteKey()}}' >
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
            <li class="active"><a href="#details" data-toggle="tab">  {!! trans('portfolio::category.name') !!}</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('portfolio-category-show')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/portfolio/category'))!!}
            <div class="tab-content">
                <div class="tab-pane active" id="details">
                    @include('portfolio::admin.category.partial.entry')
                </div>
            </div>
        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>