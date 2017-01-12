@include('public::notifications')
<div class="dashboard-content">
    <div class="panel panel-color panel-inverse">
        <div class="panel-heading">
            <div class="row">
                <div class="col-sm-6 col-md-6">
                    <h3 class="panel-title">
                       {!!Trans('task::task.user_names')!!}
                    </h3>
                    <p class="panel-sub-title m-t-5 text-muted">
                        {!!Trans('task::task.create')!!}
                    </p>
                </div>
            </div>
        </div>
        <div class="panel-body">
            <div class="col-lg-4">
                <div class="ibox">
                    <div class="ibox-content">
                        <h3>To-do</h3>
                        <p class="small"><i class="ion ion-arrow-move"></i> Drag task between list</p>
                        {!!Form::vertical_open()
                        ->id('create-task')
                        ->method('POST')
                        ->files('true')
                        ->enctype('multipart/form-data')
                        ->action(Trans::to('user/task/task'))!!}
                        {!!Form::token()!!}
                        <div class="input-group">
                            <input type="hidden" name="status" value="to_do" placeholder="Add new task." class="input input-sm form-control">
                            <input type="text" name="task" placeholder="Add new task." class="input form-control" required="required">
                            <span class="input-group-btn">
                               
                                <button type="submit" class="btn btn-danger">Add task</button>

                            </span>
                        </div>
                        {!! Form::close() !!}
                        <ul class="sortable-list connectList agile-list ui-sortable" id="to_do">
                            @forelse($tasks['data'] as $key => $value)
                                @if(@$value['status'] == "to_do")
                                    <li class="to_do" id="{!!@$value['id']!!}"> 
                                        {!!@$value['task']!!}                              
                                        <div class="agile-detail">
                                            <i class="fa fa-clock-o"></i> {!! @$value['created_at'] !!}
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
                        <p class="small"><i class="ion ion-arrow-move"></i> Drag task between list</p>
                        <ul class="sortable-list connectList agile-list ui-sortable" id="in_progress">
                            @forelse($tasks['data'] as $key => $value)
                                @if(@$value['status'] == "in_progress")
                                    <li class="in_progress" id="{!!@$value['id']!!}">
                                        {!!@$value['task']!!} 
                                        <div class="agile-detail">
                                            <i class="fa fa-clock-o"></i> {!!@$value['created_at'] !!}
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
                        <p class="small"><i class="ion ion-arrow-move"></i> Drag task between list</p>
                        <ul class="sortable-list connectList agile-list ui-sortable" id="completed">
                        @forelse($tasks['data'] as $key => $value)
                            @if(@$value['status'] == "completed")
                                <li class="completed" id="{!!@$value['id']!!}">
                                    {!!@$value['task']!!} 
                                    <div class="agile-detail">
                                        <i class="fa fa-clock-o"></i> {!! @$value['created_at'] !!}
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
    </div>
</div>

<script>
    $(document).ready(function(){
        $(".sortable-list").sortable({
            connectWith: ".connectList" 
        }).disableSelection();

         $( ".sortable-list" ).on( "sortreceive", function( event, ui ) {
            var status = $(this).attr('id'); 
            var id     = ui.item.attr('id');
            
            var formURL  = "{{ Trans::to('user/task/task')}}"+"/"+id;
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