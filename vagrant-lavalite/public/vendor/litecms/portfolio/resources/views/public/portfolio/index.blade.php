
        <section class="portfolio-wraper">
            <div class="container">
                <div class="row">
                    <div class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
                        <h1 class="main-title">
                            <small>Happy Memories</small>
                            Our <span>Portfolio</span>
                        </h1>
                        <p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.</p>
                    </div>
                    <div class="col-xs-12 col-sm-4 col-md-4 col-lg-4 hidden-xs text-right">
                        <img src="img/portfolio-side-icon.png" alt="">
                    </div>
                </div>
                <div class="row">
                    <div class="col-xs-12">
                        <div class="work_trigge">
                            <ul class="trigger text-center">
                               <li class="filter {!!(empty(Request::get('slug')))? 'active':''!!}" data-filter="">ALL</li>
                              @forelse($categories as $key=>$category)
                                <li class="filter {!!(Request::get('slug') == $category['slug'])? 'active':''!!}" data-filter=".{!!@$category['slug']!!}_{!!@$category['id']!!}" id="{!!@$category['slug']!!}_{!!@$category['id']!!}">{!!$category['name']!!}</li>
                              @empty
                              @endif
                            </ul>
                        </div>
                    </div>
                </div>
                <div class="row">
                    <div class="all_work_item">
                    @forelse($portfolios as $key => $portfolio)
                        <div class="col-xs-12 col-sm-6 col-md-4 {!!@$portfolio['category']['slug']!!}_{!!@$portfolio['category']['id']!!} all mix">
                            <a href="{!!URL::to('portfolio')!!}/{!!@$portfolio['slug']!!}">
                                <div class="atvImg">
                                    <img src="{!!url(@$portfolio->defaultImage('portfolio.md','image'))!!}" class="img-responsive" alt=""/>
                                    <div class="atvImg-layer" data-img="{!!url(@$portfolio->defaultImage('portfolio.md','image'))!!}"></div>
                                </div>
                            </a>
                        </div>
                    @empty
                    @endif
                    </div>
                </div>
            </div>
        </section>
<script type="text/javascript">
$(document).ready(function() {
            @if(Request::get('slug'))
                var filterValue = $('.active').attr('data-filter');
                $('.all_work_item').isotope({
                    filter: filterValue
                });
            @endif

            atvImg();

            function thumbHeight() {
                var imageContainer = $('.atvImg'),
                    ww = $(window).width();

                imageContainer.css({
                    "height": $('.all_work_item .col-xs-12').width() + "px"
                });

            }

            thumbHeight();
            $(window).resize(thumbHeight);

        // Preloader-js
        $('.preloader-area').fadeOut('1000');

        /*Portfolio layout*/
        $('.all_work_item').isotope({
            //layoutMode: 'packery',
            itemSelector: '.mix',
            percentPosition: true
        });
        /*Portfolio filtering*/
        var triggerLi = $('.trigger li');
        triggerLi.on('click', function () {
            triggerLi.removeClass('active');
            $(this).addClass('active');
            var filterValue = $(this).attr('data-filter');
            $('.all_work_item').isotope({
                filter: filterValue
            });
        });

        $('.portfolio_items').isotope({
            layoutMode: 'packery',
            itemSelector: '.grid_item'
        });
});
</script>
