@extends('admin::general.default')
@section('heading')
<i class="fa fa-file-text-o"></i> {!! trans('task::task.name') !!} <small> {!! trans('cms.manage') !!} {!! trans('task::task.names') !!}</small>
@stop

@section('title')
{!! trans('task::task.names') !!}
@stop

@section('breadcrumb')
<ol class="breadcrumb">
    <li><a href="{!! URL::to('admin') !!}"><i class="fa fa-dashboard"></i> {!! trans('cms.home') !!} </a></li>
    <li class="active">{!! trans('task::task.names') !!}</li>
</ol>
@stop


@section('content')
<div class="row">
    <div class="col-lg-4">
        <div class="ibox">
            <div class="ibox-content">
                <h3>To-do</h3>
                <p class="small"><i class="fa fa-hand-o-up"></i> Drag task between list</p>
                {!!Form::vertical_open()
                ->id('create-task')
                ->method('POST')
                ->files('true')
                ->enctype('multipart/form-data')
                ->action(Trans::to('admin/task/task'))!!}
                {!!Form::token()!!}
                <div class="input-group">
                    <input type="hidden" name="status" value="to_do" placeholder="Add new task." class="input input-sm form-control">
                    <input type="text" name="task" placeholder="Add new task." class="input input-sm form-control" required="required">
                    <span class="input-group-btn">
                        <!-- <button type="button" class="btn btn-primary btn-sm" data-action='CREATE' data-form='#create-task' data-load-to='#entry-task' data-datatable='#main-list'> <i class="fa fa-plus"></i> Add task</button> -->
                        <button type="submit" class="btn btn-sm btn-white"> <i class="fa fa-plus"></i> Add task</button>

                    </span>
                </div>
                {!! Form::close() !!}
                <ul class="sortable-list connectList agile-list ui-sortable" id="to_do">
                
                    @forelse($tasks['data'] as $key => $value)

                    <?php $t_created_at = strtotime( @$value['created_at'] );
                          $t_created_at  = date( 'd.m.Y', @$t_created_at );
                          $t_array=['warning-element','danger-element','info-element','success-element'];
                          $t_color=@$value['id']%4;
                    ?>

                        @if(@$value['status'] == "to_do")
                            <li class="{!!$t_array[$t_color]!!} to_do" id="{!!@$value['id']!!}"> 
                                {!!@$value['task']!!}                              
                                <div class="agile-detail">
                                    <i class="fa fa-clock-o"></i> {!!@$value['created_at']!!}
                                </div>
                            </li>
                        @endif
                    @empty
                    @endif                    
                </ul>
            </div>
        </div>
    </div>
    <div class="col-lg-4">
        <div class="ibox">
            <div class="ibox-content">
                <h3>In Progress</h3>
                <p class="small"><i class="fa fa-hand-o-up"></i> Drag task between list</p>
                <ul class="sortable-list connectList agile-list ui-sortable" id="in_progress">
                    @forelse($tasks['data'] as $key => $value)
                        <?php $p_created_at = strtotime( @$value['created_at'] );
                              $p_created_at  = date( 'd.m.Y', @$p_created_at );
                              $p_array=['warning-element','danger-element','info-element','success-element'];
                              $p_color=@$value['id']%4; ?>
                        @if(@$value['status'] == "in_progress")
                            <li class="{!!$p_array[$p_color]!!} in_progress" id="{!!@$value['id']!!}">
                                {!!@$value['task']!!} 
                                <div class="agile-detail">
                                    <i class="fa fa-clock-o"></i> {!!@$value['created_at']!!}
                                </div>
                            </li>
                         @endif
                    @empty
                    @endif                     
                </ul>
            </div>
        </div>
    </div>
    <div class="col-lg-4">
        <div class="ibox">
            <div class="ibox-content">
                <h3>Completed</h3>
                <p class="small"><i class="fa fa-hand-o-up"></i> Drag task between list</p>
                <ul class="sortable-list connectList agile-list ui-sortable" id="completed">
                @forelse($tasks['data'] as $key => $value)
                    <?php $c_created_at = strtotime( @$value['created_at'] );
                          $c_created_at  = date( 'd.m.Y', @$c_created_at ); 
                          $c_array=['warning-element','danger-element','info-element','success-element'];
                          $c_color=@$value['id']%4; ?>
                    @if(@$value['status'] == "completed")
                        <li class="{!!$c_array[$c_color]!!} completed" id="{!!@$value['id']!!}">
                            {!!@$value['task']!!} 
                            <div class="agile-detail">
                                <i class="fa fa-clock-o"></i> {!!@$value['created_at']!!}
                            </div>
                        </li>
                     @endif
                @empty
                @endif                     
                </ul>
            </div>
        </div>
    </div>
</div>

@stop

@section('script')
    <script>
        $(document).ready(function(){
            $(".sortable-list").sortable({
                connectWith: ".connectList" 
            }).disableSelection();

             $( ".sortable-list" ).on( "sortreceive", function( event, ui ) {
                var status = $(this).attr('id'); 
                var id     = ui.item.attr('id');
                
                var formURL  = "{{ Trans::to('admin/task/task')}}"+"/"+id;
                $.ajax( {
                    url: formURL,
                    type: 'PUT',
                    data: {'status': status},                 
                    success:function(data, textStatus, jqXHR)
                    {
                        console.log(data);
                    },
                    error: function(jqXHR, textStatus, errorThrown)
                    {
                    }
                });          
            } );

            $('#create-task').submit( function( e ) {
                    if($('#create-task').valid() == false) {
                        toastr.error('Unprocessable entry.', 'Warning');
                        return false;
                    }
                    var url  = $(this).attr('action');
                    var formData = new FormData( this );

                    $.ajax( {
                        url: url,
                        type: 'POST',
                        data: formData,
                        processData: false,
                        contentType: false,
                        beforeSend:function()
                        {
                        },
                        success:function(data, textStatus, jqXHR)
                        {
                            location.reload();
                        },
                        error: function(jqXHR, textStatus, errorThrown)
                        {
                        }
                    });
                    e.preventDefault();
                });
        });
      

    </script>
@stop

@section('style')
@stop