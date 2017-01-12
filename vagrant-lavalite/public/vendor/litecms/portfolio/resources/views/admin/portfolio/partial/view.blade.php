<div class="tab-content">
    <div class="tab-pane active" id="info">

      <div class='col-md-4 col-sm-6'>
             {!! Form::text('title')
             ->required()
             -> label(trans('portfolio::portfolio.label.title'))
             -> placeholder(trans('portfolio::portfolio.placeholder.title'))!!}
      </div>

      <div class='col-md-4 col-sm-6'>
             {!! Form::select('category_id')
             ->options(Portfolio::getCategory())
             -> label(trans('portfolio::portfolio.label.category_id'))
             -> placeholder(trans('portfolio::portfolio.placeholder.category_id'))!!}
      </div>

      <div class='col-md-4 col-sm-6'>
             {!! Form::select('status')
             -> options(trans('portfolio::portfolio.options.status'))
             -> label(trans('portfolio::portfolio.label.status'))
             -> placeholder(trans('portfolio::portfolio.placeholder.status'))!!}
      </div>

      <div class='col-md-12 col-sm-12'>
             {!! Form::textArea('details')
             ->addClass('html-editor')
             -> label(trans('portfolio::portfolio.label.details'))
             -> placeholder(trans('portfolio::portfolio.placeholder.details'))!!}
      </div>
  </div>
  <div class="tab-pane " id="image">



      <div class='col-md-12 col-sm-12'>
       <label>Image</label>
       <div class="row">
             <img src="{!!url($portfolio->defaultImage('portfolio.sm','image'))!!}">
            
      </div>
    </div>
    <div class='col-md-12 col-sm-12'>
      <label>Images</label>
      <div class="row">
              @foreach($portfolio->getImages('portfolio.sm','images') as $image)
                <div class='col-md-2 row'>
                   <img src="{!!url(@$image)!!}"> 
               </div>
              @endforeach
        </div>
    </div>
  </div>
</div>
