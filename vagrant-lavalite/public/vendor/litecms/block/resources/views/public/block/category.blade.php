        <section class="blog-list-wraper">
            <div class="container">
                <div class="row">
                    <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        <h1 class="main-title">
                            <small>Latest Blocks</small>
                            Our <span>Blocks</span>
                        </h1>
                        <p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
                    </div>
                    <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4 hidden-xs text-right">
                        <img src="{!!URL::to('img/news-side-icon.png')!!}" alt="">
                    </div>
                </div>
                <div class="row m-t-40">
                    <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        @forelse($category->block as $key=>$block)
                        <div class="news-list-item">
                            <img src="{!!url(@$block->defaultImage('block.lg','image'))!!}" class="img-responsive" alt="">
                            <div class="blog-list-inner-desc  text-center">
                                <h1 class="inner-title m-t-10">
                                   {!!$block['name']!!} <span></span>
                                </h1>
                                <div class="blog-detail-desc">
                                    <p class="detail-tags m-b-20"><i class="ion ion-android-person"></i> {!!@$block['user']['name']!!} at {!!date('D,m/d/Y',strtotime($block['created_at']))!!}</p>
                                    <p class="blog-detail-para capitalize">{!!substr($block['description'],0,300)!!}</p>
                                    <p><a href="{!!trans_url('blocks')!!}/{!!$block->getPublicKey()!!}" class="btn btn-danger waves-effect w-md waves-light">Read More</a></p>
                                </div>
                            </div>
                        </div>
                        @empty
                        @endif

                    </div>
                    <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4">
                        <div class="blog-detail-side-search-wraper">
                        {!!Form::open()
                        ->action(URL::to('blocks'))
                        ->method('GET')!!}
                        {!!Form::text('search')->type('text')->class('form-control')->placeholder('Search Blocks')->raw()!!}
                    <i class="icon-magnifier">
                    </i>
                    {!! Form::close()!!}

                        </div>
                        <div class="blog-detail-side-category-wraper clearfix">
                            <h3>Categories</h3>
                            <ul>

                                <li><a href="{!!URL::to('blocks')!!}">All</a><span class="cat-number">({!!Block::getBlockCount()!!})</span></li>
                                @forelse($categories as $key=> $cat)
                                    <li class="@if($category['id']==$cat['id']) active @endif"><a href="{!!URL::to('blocks/category')!!}/{!!$cat->getPublicKey()!!}">{!!$cat['name']!!}</a><span class="cat-number">({!!Block::getBlockCount($category['id'])!!})</span></li>
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
