  {!! Form::hidden('upload_folder')!!}
  <div class='col-md-4 col-sm-6'>
         {!! Form::text('name')
         -> label(trans('block::category.label.name'))
         -> placeholder(trans('block::category.placeholder.name'))!!}
  </div>

  <div class='col-md-4 col-sm-6'>
         {!! Form::text('status')
         -> label(trans('block::category.label.status'))
         -> placeholder(trans('block::category.placeholder.status'))!!}
  </div>
{!!   Form::actions()
->large_primary_submit('Submit')
->large_inverse_reset('Reset')
!!}
