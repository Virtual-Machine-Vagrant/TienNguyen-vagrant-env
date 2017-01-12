                {!! Form::hidden('upload_folder')!!}
                <div class='col-md-6 col-sm-6'>
                       {!! Form::text('name')
                       -> label(trans('block::category.label.name'))
                       -> placeholder(trans('block::category.placeholder.name'))
                       -> required()!!}
                </div>

                <div class='col-md-6 col-sm-6'>
                       {!! Form::select('status')
                       -> label(trans('block::category.label.status'))
                       -> options(trans('block::category.options.status'))
                       -> placeholder(trans('block::category.placeholder.status'))
                      !!}
                </div>
