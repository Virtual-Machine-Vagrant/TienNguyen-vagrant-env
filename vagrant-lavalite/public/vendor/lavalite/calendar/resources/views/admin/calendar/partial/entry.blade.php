<div class='col-md-4 col-sm-6'>
                       {!! Form::text('category_id')
                       -> label(trans('calendar::calendar.label.category_id'))
                       -> placeholder(trans('calendar::calendar.placeholder.category_id'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                   <div class='form-group'>
                     <label for='start' class='control-label'>{!!trans('calendar::calendar.label.start')!!}</label>
                     <div class='input-group date date-picker'>
                        {!! Form::date('start')
                        -> placeholder(trans('calendar::calendar.placeholder.start'))
                        -> dataDateFormat('D MMM YYYY')
                        ->raw()!!}
                       <span class='input-group-addon'><i class='fa fa-calendar'></i></span>
                     </div>
                   </div>
                </div>

                <div class='col-md-4 col-sm-6'>
                   <div class='form-group'>
                     <label for='end' class='control-label'>{!!trans('calendar::calendar.label.end')!!}</label>
                     <div class='input-group date date-picker'>
                        {!! Form::date('end')
                        -> placeholder(trans('calendar::calendar.placeholder.end'))
                        -> dataDateFormat('D MMM YYYY')
                        ->raw()!!}
                       <span class='input-group-addon'><i class='fa fa-calendar'></i></span>
                     </div>
                   </div>
                </div>

                <div class='col-md-4 col-sm-6'>
                       {!! Form::text('location')
                       -> label(trans('calendar::calendar.label.location'))
                       -> placeholder(trans('calendar::calendar.placeholder.location'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                       {!! Form::text('color')
                       -> label(trans('calendar::calendar.label.color'))
                       -> placeholder(trans('calendar::calendar.placeholder.color'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                       {!! Form::text('title')
                       -> label(trans('calendar::calendar.label.title'))
                       -> placeholder(trans('calendar::calendar.placeholder.title'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                    {!! Form::textarea ('details')
                    -> label(trans('calendar::calendar.label.details'))
                    -> placeholder(trans('calendar::calendar.placeholder.details'))!!}
                </div>

                <div class='col-md-4 col-sm-6'>
                       {!! Form::text('created_by')
                       -> label(trans('calendar::calendar.label.created_by'))
                       -> placeholder(trans('calendar::calendar.placeholder.created_by'))!!}
                </div>