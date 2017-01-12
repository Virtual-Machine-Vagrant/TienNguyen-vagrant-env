            
             <div class='col-md-6 col-sm-6'>
                       {!! Form::text('name')
                       ->required()
                       -> label('NAME')
                       -> placeholder(trans('block::block.placeholder.name'))!!}
                </div>

            <div class='col-md-6 col-sm-6'>
                       {!! Form::select('category_id')
                       ->required()
                       ->options(Block::selectCategories())
                       -> label('CATEGORY')
                       -> placeholder(trans('block::block.placeholder.category_id'))!!}
                </div>



                <div class='col-md-6 col-sm-6'>
                       {!! Form::text('url')
                       -> label('URL')
                       -> placeholder(trans('block::block.placeholder.url'))!!}
                </div>
                 <div class='col-md-6 col-sm-6'>
                      {!! Form::select('status')
                         -> options(trans('block::block.options.status'))
                       -> label("STATUS")
                       -> placeholder(trans('block::block.placeholder.status'))!!}
                </div>

                <div class='col-md-12 col-sm-12'>
                      {!! Form::textarea('description')
                       -> addClass('html-editor')
                       -> label('DESCRIPTION')
                       -> placeholder(trans('block::block.placeholder.description'))!!}
                </div>



                <div class='col-md-6 col-sm-6'>
                 <label>IMAGE</label>
                      {!!Filer::uploader('image',@$block->getUploadURL('image'),1)!!}
                      {!! Filer::editor('image', @$block['image'],1) !!}
                </div>

                <div class='col-md-6 col-sm-6'>
                    <label>IMAGES</label>
                    {!! Filer::uploader('images', $block->getUploadURL('images')) !!}
                     {!! Filer::editor('images', $block['images']) !!}
                </div>
 {!! Form::hidden('upload_folder')!!}