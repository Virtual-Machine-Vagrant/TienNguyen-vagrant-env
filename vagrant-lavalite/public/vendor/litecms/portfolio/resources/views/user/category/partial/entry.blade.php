				{!! Form::hidden('upload_folder')!!}
				<div class='col-md-4 col-sm-6'>
                       {!! Form::text('name')
                       -> label(trans('portfolio::category.label.name'))
                       -> placeholder(trans('portfolio::category.placeholder.name'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                       {!! Form::text('status')
                       -> label(trans('portfolio::category.label.status'))
                       -> placeholder(trans('portfolio::category.placeholder.status'))!!}
                </div>

{!!   Form::actions()
->large_primary_submit('Submit')
->large_inverse_reset('Reset')
!!}
