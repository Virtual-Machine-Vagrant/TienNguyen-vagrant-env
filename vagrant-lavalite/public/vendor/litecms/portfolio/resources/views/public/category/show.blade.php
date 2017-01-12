<div class="container">
    <div class="row">
        <div class="col-md-8">
            <div class="card-box">
                <div class="row">
                    <div class="col-md-6">
                        <h4 class="text-dark  header-title m-t-0"> {!! $category['name'] !!} </h4>
                    </div>
                    <div class="col-md-6">
                        <a href="{{ trans_url('portfolios') }}" class="btn btn-default pull-right"> Back</a>
                    </div>
                </div>
                <hr/>

                <div class="row">
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="name">
                    {!! trans('portfolio::category.label.name') !!}
                </label><br />
                    {!! $category['name'] !!}
            </div>
        </div>
        <div class="col-md-4 col-sm-6">
            <div class"form-group">
                <label for="status">
                    {!! trans('portfolio::category.label.status') !!}
                </label><br />
                    {!! $category['status'] !!}
            </div>
        </div>
    </div>
            </div>  
        </div>  
        <div class="col-md-4">
            @include('portfolio::public.category.aside')
        </div>

    </div>
</div>