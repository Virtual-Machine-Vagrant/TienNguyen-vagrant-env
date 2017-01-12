@include('public::notifications')

<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
    <div class="dashboard-content">
        <div class="panel panel-color panel-inverse">
            <div class="panel-heading">
                <h3 class="panel-title"><span>Job</span> {!! $portfolio['title'] !!}</h3>
                <p class="panel-sub-title m-t-5 text-muted">Sub title goes here with small font</p>
            </div>



            <div class='m-t-5 m-t-b-20 pull-right'>
                <a href="{{ trans_url('/user/portfolio/portfolio') }}" class="btn btn-default"> {{ trans('cms.back')  }}</a>
                <a href="{{ trans_url('/user/portfolio/portfolio') }}/{{ $portfolio->getRouteKey() }}/edit" class="btn btn-success"> {{ trans('cms.edit')  }}</a>

                <a href="{{ trans_url('/user/portfolio/portfolio') }}/{{ $portfolio->getRouteKey() }}/delete" class="btn btn-danger"> {{ trans('cms.delete')  }}</a>
            </div>


<div class="m-t-20 panel-body">

 <section class="blog-detail-wraper">
    <div class="container">
        <div class="row">
            <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                <h1 class="inner-title">
                    <span>{{$portfolio->title}}</span>
                </h1>
                <div class="blog-detail-main-slider">
                    @if(!empty(@$portfolio['images']))
                    @foreach($portfolio['images'] as $val)
                    <img src="{!!trans_url('image/bd/'.@$val['efolder'])!!}/{!!@$val['file']!!}" class=" img-responsive" >
                    @endforeach
                    @else
                    <img src="{!!trans_url('image/bd/img/blog1.jpg')!!}" class="img-responsive" alt="">
                    @endif
                </div>

                <div class="blog-detail-desc">
                    <p class="detail-tags m-b-20"><i class="ion ion-navicon-round"></i> <a>{{$portfolio->category->name}} </a> </p>

                    <p class="blog-detail-para">{{ucfirst($portfolio->details)}}</p>
                </div>

            </div>
            <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                <div class="blog-detail-side-search-wraper">
                 {!!Form::open()->method('GET')
                 ->action(URL::to('portfolio'))!!}
                    {!!Form::text('search')->type('text')->class('form-control')->placeholder('Search for...')->raw()!!}
                    <i class="icon-magnifier"></i>
                     {!! Form::close()!!}

                </div>

                {!!Portfolio::viewCategories()!!}

            </div>
        </div>
    </div>
</section>

</div>

</div>
</div>
</div>

<script type="text/javascript">
    $(document).ready(function() {
            $(".blog-detail-main-slider").owlCarousel({
                margin: 0,
                dots: false,
                nav: true,
                navText: ['<i class="ion ion-ios-arrow-left"></i>','<i class="ion ion-ios-arrow-right"></i>'],
                responsive:{
                    0:{
                        items:1
                    }
                }
            });
    });
</script>
