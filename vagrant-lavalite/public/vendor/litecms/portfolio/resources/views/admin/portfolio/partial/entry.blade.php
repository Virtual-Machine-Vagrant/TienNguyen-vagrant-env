<div class="tab-content">
    <div class="tab-pane active" id="info">

      <div class='col-md-4 col-sm-6'>
             {!! Form::text('title')
             -> required()
             -> label(trans('portfolio::portfolio.label.title'))
             -> placeholder(trans('portfolio::portfolio.placeholder.title'))!!}
      </div>

      <div class='col-md-4 col-sm-6'>
             {!! Form::select('category_id')
             -> required()
             -> options(Portfolio::getCategory())
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
             -> addClass('html-editor')
             -> label(trans('portfolio::portfolio.label.details'))
             -> placeholder(trans('portfolio::portfolio.placeholder.details'))!!}
      </div>
  </div>
  <div class="tab-pane " id="image">
      <div class='col-md-6 col-sm-12'>
      <label>{!!trans('portfolio::portfolio.label.image')!!}</label>
             {!!Filer::uploader('image',@$portfolio->getUploadURL('image'),1)!!}
             {!!Filer::editor('image',@$portfolio['image'],1)!!}
      </div>

      <div class='col-md-6 col-sm-12'>
       <label>Images</label>
             {!!Filer::uploader('images',@$portfolio->getUploadURL('images'),20)!!}
             {!!Filer::editor('images',@$portfolio['images'],20)!!}
      </div>
  </div>
</div>
