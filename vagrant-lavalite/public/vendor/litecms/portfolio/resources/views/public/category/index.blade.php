<div class="blog-detail-side-category-wraper clearfix">
    <h3>Categories</h3>
    <ul>
        <li class="{{ (Request::is('portfolio'))? 'active' : ''}}"><a href="{{trans_url('portfolio')}}">All</a><span class="cat-number">5</span></li>
        @forelse($categories as  $category)
        <li class="{{(Request::is('*portfolio/category/'.$category->slug))? 'active' : ''}}"><a href="{{trans_url('portfolio/category')}}/{{@$category->slug}}">{{$category->name}}</a><span class="cat-number">4</span></li>
        @empty
        @endif

    </ul>
</div>
