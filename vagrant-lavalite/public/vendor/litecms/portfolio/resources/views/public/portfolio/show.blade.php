
        <section class="portfolio-detail-wraper">
            <div class="container">
                <div class="row">
                    <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        <h1 class="inner-title">
                           {!!$portfolio['title']!!}<span></span>
                        </h1>
                        <div class="portfolio_slider">
                            @forelse(@$portfolio->getImages('portfolio.lg', 'images') as $image)
                                <div class="item">
                                    <figure class="postImg waves-effect">
                                        <img src="{!!url(@$image)!!}" class="img-responsive" alt="">
                                    </figure>
                                </div>
                            @empty
                            
                            @endif
                        </div>
                        <div class="port-folio-desc">
                            <p>{{ucfirst($portfolio->details)}}</p>

                            <table class="table project-table table-borderd">
                                <tr>
                                    <td>project name</td>
                                    <td>:</td>
                                    <td>{!!$portfolio['title']!!}</td>
                                </tr>
                                <tr>
                                    <td>Category</td>
                                    <td>:</td>
                                    <td>{!!$portfolio['category']['name']!!}</td>
                                </tr>
                            </table>
                        </div>
                        <hr>
                        <div class="related-project-block">
                            <div class="row">
                                <div class="col-xs-12">
                                    <h1 class="inner-title">
                                        Related <span>Projects</span>
                                    </h1>
                                </div>
                                <div class="related_post_top clearfix">
                                    @forelse(Portfolio::getRelated($portfolio['category_id']) as $key=> $item)
                                    <div class="col-md-6">
                                        <figure class="postImg waves-effect">
                                        <a href="{!!URL::to('portfolio')!!}/{!!@$item['slug']!!}">
                                            <img src="{!!url(@$portfolio->defaultImage('portfolio.md','image'))!!}" class="img-responsive">
                                            
                                        </a>
                                        </figure>
                                        <div class="blog_heading">
                                            <h4><a href="{!!URL::to('portfolio')!!}/{!!@$item['slug']!!}">{!!$item['title']!!}</a></h4>
                                        </div>
                                    </div>
                                    @empty
                                    @endif
                                </div>
                            </div>
                        </div>
                    </div>
                    <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                        <!-- <div class="blog-detail-side-search-wraper">
                            {!!Form::open()
                                ->method('GET')
                                ->action(URL::to('portfolio'))!!}
                                 {!!Form::text('search')->type('text')->class('form-control')->placeholder('Search for Portfolios')->raw()!!}
                            <i class="icon-magnifier"></i>
                            {!! Form::close()!!}

                        </div> -->
                        <div class="blog-detail-side-category-wraper clearfix">
                            <h3>Categories</h3>
                            <ul>

                                <li><a href="{!!URL::to('portfolio')!!}">All</a><span class="cat-number">({!!Portfolio::countPortfolios()!!})</span></li>
                                @forelse($categories as $key=>$category)
                                <li @if($portfolio['category_id']==$category['id']) class="active"  @endif> <a href="{!!URL::to('portfolio?slug=')!!}{{$category['slug']}}">{{$category['name']}}</a><span class="cat-number">({!!Portfolio::getCount($category['id'])!!})</span></li>
                                @empty
                                @endif

                            </ul>
                        </div>
                        <div class="blog-detail-side-popular-posts-wraper">
                            <h3>Recent Projects</h3>
                            @forelse(Portfolio::recentPortfolio() as $key=>$recent)
                            <div class="popular-post-block">
                                <div class="row">
                                    <div class="col-xs-4">
                                      <a href="{!!URL::to('portfolio')!!}/{!!$recent['slug']!!}">
                                        <div class="popular-post-img" style="background-image: url('{!!url(@$recent->defaultImage('portfolio.sm','images'))!!}');"></div>
                                    </a>
                                    </div>
                                    <div class="col-xs-8 popular-post-inner">
                                        <div class="popular-post-desc">
                                            <a href="{!!URL::to('portfolio')!!}/{!!$recent['slug']!!}"><h4>{!!$recent['title']!!}</h4></a>
                                            <p>{!!$recent['category']['name']!!}</p>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            @empty
                            @endif

                        </div>
                    </div>
                </div>
            </div>
        </section>



<script type="text/javascript">
    $(function(){
         $(".portfolio_slider").owlCarousel({
                margin: 30,
                autoplay: true,
                dots: true,
                responsive: {
                    0: {
                        items: 1
                    },
                    600: {
                        items: 1
                    },
                    992: {
                        items: 1
                    }
                }
            });
    })
</script>
