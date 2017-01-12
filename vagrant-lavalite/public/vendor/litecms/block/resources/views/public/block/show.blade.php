  <section class="blog-detail-wraper">
            <div class="container">
                <div class="row">
                    <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        <h1 class="inner-title">
                           {!!$block['name']!!} <span></span>
                        </h1>
                        <div class="blog-detail-main-slider">
                          @foreach($block->getImages('block.lg', 'images') as $image)
                                 <img src="{!!url($image)!!}" class="img-responsive" alt="">
                          @endforeach
                        </div>
                        <div class="blog-detail-desc">
                            <p class="detail-tags m-b-20"><i class="ion ion-android-person"></i> {!!@$block['user']['name']!!} at {!!date('D,m/d/Y',strtotime($block['created_at']))!!}</p>
                            <p class="blog-detail-para">{!!$block['description']!!}</p>

                        </div>
                        <div class="blog-tags-wraper m-t-30">
                            <p><i class="icon icon-tag"></i>{!!$block['blockCategories']['name']!!}</p>
                        </div>
                    </div>
                    <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                        <div class="blog-detail-side-search-wraper">
                               {!!Form::open()
                        ->action(url('blocks'))
                        ->method('GET')!!}
                        {!!Form::text('search')->type('text')->class('form-control')->placeholder('Search Blocks')->raw()!!}
                    <i class="icon-magnifier">
                    </i>
                    {!! Form::close()!!}
                        </div>
                        <div class="blog-detail-side-category-wraper clearfix">
                            <h3>Categories</h3>
                            <ul>
                                <li><a href="{!!url('blocks')!!}">All</a><span class="cat-number">({!!Block::getBlockCount()!!})</span></li>
                                @forelse($categories as $key=> $category)
                                    <li class="@if($category['id']==$block['category_id']) active  @endif" ><a href="{!!url('blocks/category')!!}/{!!$category['slug']!!}">{!!$category['name']!!}</a><span class="cat-number">({!!Block::getBlockCount($category['id'])!!})</span></li>
                                @empty
                                @endif
                            </ul>
                        </div>
                        {!!Block::getLatest(3)!!}
                        <!-- <div class="blog-detail-side-tags-wraper">
                            <h3>Tags</h3>
                            <div class="tags-wraper">
                                <a href="#">Adventure</a>
                                <a href="#">Romantic</a>
                                <a href="#">Wildlife</a>
                                <a href="#">Beach</a>
                                <a href="#">Honeymoon</a>
                                <a href="#">Island</a>
                                <a href="#">Parks</a>
                                <a href="#">Family</a>
                                <a href="#">Travel</a>
                            </div>
                        </div> -->
                    </div>
                </div>
            </div>
        </section>
<script type="text/javascript">
    $(document).ready(function() {
            $(".blog-detail-main-slider").owlCarousel({
                margin: 0,
                dots: false,
                nav: true,
                autoplay:true,
                navText: ['<i class="ion ion-ios-arrow-left"></i>','<i class="ion ion-ios-arrow-right"></i>'],
                responsive:{
                    0:{
                        items:1
                    }
                }
            });
    });
</script>
