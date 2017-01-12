
<div class="blog-detail-side-popular-posts-wraper">
    <h3>Recent Blocks</h3>
    @forelse($block as $latest)
    <div class="popular-post-block">
        <div class="row">
            <div class="col-xs-4">
                <div class="popular-post-img" style='background-image: url("{!!url(@$latest->defaultImage('block.sm','image'))!!}");'></div>

            </div>
            <div class="col-xs-8 popular-post-inner">
                <div class="popular-post-desc">
                    <a href="{!!URL::to('blocks')!!}/{!!$latest->getPublicKey()!!}"><h4> {!!$latest['name']!!}</h4></a>
                    <p>{!!date('D,m/d/Y',strtotime($latest->created_at))!!}</p>
                </div>
            </div>
        </div>
    </div>
    @empty
    @endif
</div>
