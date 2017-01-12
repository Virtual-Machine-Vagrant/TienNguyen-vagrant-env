<div class="row">
    <div class="col-md-12">
        <div class="mailbox-controls" >
          
            <div class="btn-group" id="{!!$message->getRouteKey()!!}">
                <button class="btn btn-inverse btn-back" title="Back" id="{!!@$message['caption']!!}">
                    <i class="fa fa-long-arrow-left">
                    </i>
                </button> 
                @if(@$message['status'] == 'Trash')
                <button class="btn btn-danger btn-deleted" title="Delete forever" >
                    Delete forever
                </button>
                @else
                <button class="btn btn-danger btn-trashed" title="Move to Trash">
                    <i class="fa fa-trash-o" >
                    </i>
                </button>
                @endif
                <button class="btn btn-default btn-reply" id="{!!$message['id']!!}" title="Reply">
                    <i class="fa fa-reply">
                    </i>
                </button>
                <button class="btn btn-default btn-forward" title="Forward" id="{!!$message['id']!!}">
                    <i class="fa fa-share">
                    </i>
                </button>
           
            <!-- /.btn-group -->
            <button class="btn btn-info btn-refresh" title="Refresh" id="{!!$message['id']!!}">
                <i class="fa fa-refresh">
                </i>
            </button> 
            </div>
     
        </div>
    </div>
</div>
<div class="row">
    <div class="col-sm-12">
        <div class="card-box">
            <h4 class="m-t-0"><b>Hi Bro, How are you?</b></h4>

            <hr>

            <div class="media m-b-30 ">
                <a href="#" class="pull-left">
                    <img alt="" src="http://192.168.1.253/lavalite/lavalite-latest/cms/public/img/avatar/male.png" class="media-object thumb-sm img-circle">
                </a>
                <div class="media-body">
                    <span class="media-meta pull-right">07:23 AM</span>
                    <h4 class="text-primary m-0">Jonathan Smith</h4>
                    <small class="text-muted">From: jonathan@domain.com</small>
                </div>
            </div> <!-- media -->

            <p><b>Hi Bro...</b></p>
            <p>Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem.</p>
            <p>Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu. In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi.</p>
            <p>Aenean vulputate eleifend tellus. Aenean leo ligula, porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus. Phasellus viverra nulla ut metus varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nam quam nunc, blandit vel, luctus pulvinar,</p>

            <hr>

            <h4> <i class="fa fa-paperclip m-r-10 m-b-10"></i> Attachments <span>(3)</span> </h4>

            <div class="row">
                <div class="col-sm-2 col-xs-4">
                    <a href="#"> <img src="http://lorempixel.com/image_output/nature-q-c-198-135-8.jpg" alt="attachment" class="img-thumbnail img-responsive"> </a>
                </div>
                <div class="col-sm-2 col-xs-4">
                    <a href="#"> <img src="http://lorempixel.com/image_output/nature-q-c-198-135-10.jpg" alt="attachment" class="img-thumbnail img-responsive"> </a>
                </div>
                <div class="col-sm-2 col-xs-4">
                    <a href="#"> <img src="http://lorempixel.com/image_output/nature-q-c-198-135-2.jpg" alt="attachment" class="img-thumbnail img-responsive"> </a>
                </div>
            </div>
        </div>

    </div>
</div>


<div class="box box-primary">
    <div class="box-header with-border">
        <h3 class="box-title">
            {!!$message['subject']!!}  <span class="lbl">{!!@$message['caption']!!}</span>
        </h3>
    </div>
    <!-- /.box-header -->

    {!!Form::vertical_open()
    ->id('edit-message')
    ->method('PUT')
    ->enctype('multipart/form-data')
    ->action(Trans::to('user/message/message/'. $message->getRouteKey()))!!}
    {!!Form::token()!!}  

    {!! Form::hidden('read')
        ->forceValue(1)!!}

    {!!Form::close()!!}

    <div class="box-body no-padding">
        <div class="mailbox-controls" >
          
            <div class="btn-group" id="{!!$message->getRouteKey()!!}">
                <button class="btn btn-inverse btn-back" title="Back" id="{!!@$message['caption']!!}">
                    <i class="fa fa-long-arrow-left">
                    </i>
                </button> 
                @if(@$message['status'] == 'Trash')
                <button class="btn btn-danger btn-deleted" title="Delete forever" >
                    Delete forever
                </button>
                @else
                <button class="btn btn-danger btn-trashed" title="Move to Trash">
                    <i class="fa fa-trash-o" >
                    </i>
                </button>
                @endif
                <button class="btn btn-default btn-reply" id="{!!$message['id']!!}" title="Reply">
                    <i class="fa fa-reply">
                    </i>
                </button>
                <button class="btn btn-default btn-forward" title="Forward" id="{!!$message['id']!!}">
                    <i class="fa fa-share">
                    </i>
                </button>
           
            <!-- /.btn-group -->
            <button class="btn btn-info btn-refresh" title="Refresh" id="{!!$message['id']!!}">
                <i class="fa fa-refresh">
                </i>
            </button> 
            </div>
     
        </div>
        <div class="table-responsive mailbox-messages" style="min-height: 360px;">
            <table class="table  table-striped">
                <tbody id="search-results">
                 	<tr>
                        <td colspan="4">
                          From: {!!$message['user']['name']!!}<br/>
                          Date: {!!$message['created_at']!!}<br/>
                          Subject: {!!$message['subject']!!}<br/>
                          To:{!!$message['to']!!}<br/>
                        </td>
                    </tr>
                    <tr>
                        <td colspan="4">
                          {!!$message['message']!!}
                        </td>
                    </tr>
                </tbody>
            </table>
            <!-- /.table -->
        </div>
        <!-- /.mail-box-messages -->
    </div>
    <!-- /.box-body -->
    <div class="box-footer no-padding" id="show-message">
        <div class="mailbox-controls" >
            <div class="btn-group" id="{!!$message->getRouteKey()!!}">
               <button class="btn btn-default btn-sm btn-back" title="Back" id="{!!$message['caption']!!}">
                    <i class="fa fa-long-arrow-left">
                    </i>
                </button> 
                @if(@$message['status'] == 'Trash')
                <button class="btn btn-default btn-sm btn-deleted" title="Delete forever" >
                    Delete forever
                </button>
                @else
                <button class="btn btn-default btn-sm btn-trashed" title="Move to Trash">
                    <i class="fa fa-trash-o" >
                    </i>
                </button>
                @endif
                <button class="btn btn-default btn-sm btn-reply" id="{!!$message['id']!!}" title="Reply">
                    <i class="fa fa-reply"></i>
                </button>
                <button class="btn btn-default btn-sm btn-forward"  id="{!!$message['id']!!}" title="Forward">
                    <i class="fa fa-share"></i>
                </button>
                <button class="btn btn-default btn-sm btn-refresh" title="Refresh" id="{!!$message['id']!!}">
                    <i class="fa fa-refresh">
                    </i>
                </button>
            </div>
        </div>
    </div>
</div>
<script type="text/javascript">
$(document).ready(function(){
    
    @if($message->read != 1)
        var form = $('#edit-message');
        var formData = new FormData($('#edit-message'));
        params   = form.serializeArray();
        $.each(params, function(i, val) {
            formData.append(val.name, val.value);
        });
        var url  = form.attr('action');

        $.ajax( {
            url: url,
            type: 'POST',
            data: formData,
            cache: false,
            processData: false,
            contentType: false,
            dataType: 'json',
            success:function(data, textStatus, jqXHR)
            {
            }
        });
    @endif
    
    $(".btn-deleted").click(function(){
        swal({
            title: "Are you sure?",
            text: "You will not be able to recover this data!",
            type: "warning",
            showCancelButton: true,
            confirmButtonColor: "#DD6B55",
            confirmButtonText: "Yes, delete it!",
            closeOnConfirm: false
        }, function(){
            var data = new FormData();
            $.ajax({
                url: "{{trans_url('user/message/message')}}/{{$message->getRouteKey()}}",
                type: 'DELETE',
                processData: false,
                contentType: false,
                dataType: 'json',
                success:function(data, textStatus, jqXHR)
                {
                    swal("Deleted!", data.message, "success");
                    $('#entry-message').load('{{URL::to('user/message/status/Trash')}}');
                },
            });
        });
    });    


    $('.btn-trashed').click(function(){
        var arrayIds = [];
        arrayIds.push($(this).parent().attr('id'));
        $.ajax( {
                url: "{{URL::to('user/message/message/status/Trash')}}",
                type: 'GET',
                data: {data:arrayIds},
                beforeSend:function()
                {
                },
                success:function(data, textStatus, jqXHR)
                { 
                  var msgcaption = $(".btn-back").attr('id');
                    $('#entry-message').load('{{Trans::to("user/message/status")}}'+'/'+msgcaption);
                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                }
            });
    });

    $(".btn-refresh").click(function(){
        var msgid = $( this ).attr('id');
        var caption = '{{@$message['caption']}}';
        $('#entry-message').load('{{URL::to('user/message/details/')}}'+'/'+caption+'/'+msgid);
    });

    $(".btn-back").click(function(){
        var msgcaption = $( this ).attr('id');
          $('#entry-message').load('{{Trans::to("user/message/status")}}'+'/'+msgcaption);

    });

    $(".btn-reply").click(function(){
        var to_uid = $( this ).attr('id');
        $('#show-message').load('{{URL::to('user/message/reply')}}'+'/'+to_uid);
    });

    $(".btn-forward").click(function(){
        var to_uid = $( this ).attr('id');
        $('#show-message').load('{{URL::to('user/message/forward')}}'+'/'+to_uid);
    });    

});
</script>
<style type="text/css">
	.lbl{
		    font-size: 11px;
    background-color: rgb(221, 221, 221);
    margin: 7px;
    padding: 0px 6px;
	}
</style>