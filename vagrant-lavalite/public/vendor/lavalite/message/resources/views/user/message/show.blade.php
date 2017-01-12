<div class="box box-primary">
    <div class="box-header with-border">
        <h3 class="box-title">
            {!! $messages['caption'] !!}
        </h3>
        <div class="pull-right">
            <div class="has-feedback">
                <input type="text" class="form-control input-sm" placeholder="Search Mail" name="search" id="txt-search" />
                <span class="glyphicon fa fa-search form-control-feedback">
                </span>
            </div>
        </div>
        <!-- /.box-tools -->
    </div>
    <!-- /.box-header -->
    <div class="box-body no-padding">
        <div class="mailbox-controls">

            <!-- Check all button -->
            <div class="btn-group">
                <button class="btn btn-success checkbox-toggle checkAll">
                    <i class="fa fa-check-square">
                    </i>
                </button>
                @if(@$messages['caption'] == 'Trash')
                <button class="btn btn-danger btn-deleted" title="Delete forever">
                    Delete forever
                </button>
                @else
                <button class="btn btn-danger  btn-trashed" title="Move to Trash">
                    <i class="fa fa-trash-o" >
                    </i>
                </button>
                @endif
                <button class="btn btn-info btn-refresh" title="Refresh">
                    <i class="fa fa-refresh">
                    </i>
                </button>
            </div>
            <!-- /.btn-group -->


            <div class="pull-right">
               @include('message::admin.message.pagination',['paginator' => $messages['data']])
            </div>
            <!-- /.pull-right -->
        </div>
        <div class="table-responsive mailbox-messages" style="min-height: 360px;">
            <table class="table table-hover">
                <tbody id="search-results">
                    @forelse($messages['data'] as $key => $value)
                    <tr id="{!!$value->id!!}" class="check-read" data-status="{!!@$value->read!!}" style="background-color: {!!($value->read ==1)? '#fafafa' : '';!!}">
                        <td width="30" class="mail-select">
                            <div class="checkbox checkbox-danger">
                                 <input class="checkbox1" name="listMessageID" type="checkbox" value="{!! (@$messages['caption'] == 'Trash')? $value->id : $value->getRouteKey(); !!}" id="message_check_{!!$value->id!!}">
                                 <label for="message_check_{!!$value->id!!}"></label>
                            </div>
                        </td>
                          <td class="mailbox-star" >
                            <a class="text-muted btn-important" data-id="{!!$value->getRouteKey()!!}">
                                <i class="fa fa-circle @if($value->important == '1') text-red @endif">
                                </i>
                            </a>
                        </td>
                        <td class="mailbox-star" >
                            <a class="text-muted btn-starred" data-id="{!!$value->getRouteKey()!!}">
                                <i class="fa  fa-star  @if($value->star == '1') text-yellow @endif">
                                </i>
                            </a>
                        </td>

                        <td class="mailbox-name single">
                            <a href="#">
                                {!!@$value->name!!}
                            </a>
                        </td>
                        <td class="mailbox-subject single">
                            <b>
                                {!!@$value->subject!!}
                            </b>
                        </td>
                        <td class="mailbox-attachment single">
                            <i class="fa fa-paperclip"></i>
                        </td>
                        <td class="mailbox-date single">
                         {!!@$value['created_at']!!}
                        </td>
                    </tr>
                    @empty
                    <tr><td colspan="4">No messages</td></tr>
                    @endif
                </tbody>
            </table>
        </div>
    </div>

    <div class="row m-b-20">
        <div class="col-xs-7">
            Showing 1 - 10 of 289
        </div>
        <div class="col-xs-5">
            <div class="btn-group pull-right">
              <button type="button" class="btn btn-default waves-effect"><i class="fa fa-chevron-left"></i></button>
              <button type="button" class="btn btn-default waves-effect"><i class="fa fa-chevron-right"></i></button>
            </div>
            <div class="clearfix"></div>
        </div>
    </div>

</div>
<style type="text/css">
    .box-header > .box-tools {
        top: -5px;
    }
</style>
<script type="text/javascript">
$(document).ready(function(){
    var arrayIds;
    $("#txt-search").keyup(function(){
        var slug = $(this).val();
        if (slug == '')
            return;

        $('#search-results').load('{{URL::to('user/message/search')}}'+'/'+slug +'/{{@$messages['caption']}}');
    });

    $(".btn-refresh").click(function(){
        var caption = '{{@$messages['caption']}}';
        $("#txt-search").val('');
        if (caption == ''){
            $('#entry-message').load('{{URL::to('user/message/status/Inbox')}}');
            return;
        }

        $('#entry-message').load('{{URL::to('user/message/status')}}/{{@$messages['caption']}}');
    });

    $(".btn-deleted").click(function(){
        arrayIds = [];
        $("input[id^='message_check_']:checked").each(function(){
            arrayIds.push($(this).val());
        });
        swal({
            title: "Are you sure?",
            text: "You will not be able to recover this data!",
            type: "warning",
            showCancelButton: true,
            confirmButtonColor: "#DD6B55",
            confirmButtonText: "Yes, delete it!",
            closeOnConfirm: false
        }, function(){
            $.ajax({
                url: "{{trans_url('user/message/delete')}}",
                type: 'POST',
                data: {arrayIds},
                success:function(data, textStatus, jqXHR)
                {
                    swal("Deleted!", data.message, "success");
                    $('#entry-message').load('{{URL::to('user/message/status/Trash')}}');

                },
            });
        });
    });


    $(".checkAll").click(function(){
        if ($(".checkAll").hasClass('all_checked')) {
            $(".icheckbox_square-blue").removeClass('checked');
            $("input:checkbox").prop('checked', false);
            $(".checkAll").removeClass('all_checked');
            return;
        }

       $(".icheckbox_square-blue").addClass('checked');
       $("input:checkbox").prop('checked', true);
       $(".checkAll").addClass('all_checked');
    });
    $('.btn-starred').click(function(){
        var msg_id = $(this).attr('data-id');
        var star;
        if ($(this).find('i').hasClass('text-yellow')){
            $(this).find('i').removeClass('text-yellow');
            //make sub status not important
            star =0;
        }
        else{
        $(this).find('i').addClass('text-yellow');
        //make sub status important
            star =1;
        }
            $.ajax( {
                url: "{{URL::to('user/message/starred/substatus')}}",
                type: 'GET',
                data: {id:msg_id,star:star},
                beforeSend:function()
                {
                },
                success:function(data, textStatus, jqXHR)
                {

                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                }
            });


    });

    $('.btn-important').click(function(){
        var msg_id = $(this).attr('data-id');
        var important;
        if ($(this).find('i').hasClass('text-red')){
            $(this).find('i').removeClass('text-red');
            //make sub status not important
            important =0;
        }
        else{
        $(this).find('i').addClass('text-red');
        //make sub status important
            important =1;
        }
            $.ajax( {
                url: "{{URL::to('user/message/important/substatus')}}",
                type: 'GET',
                data: {id:msg_id,important:important},
                beforeSend:function()
                {
                },
                success:function(data, textStatus, jqXHR)
                {

                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                }
            });


    });

    $('.btn-trashed').click(function(){
        var arrayIds = [];
        $("input:checkbox[name=listMessageID]:checked").each(function(){
            arrayIds.push($(this).val());
        });
        $.ajax( {
                url: "{{URL::to('user/message/message/status/Trash')}}",
                type: 'GET',
                data: {data:arrayIds},
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
    });

  $('.single').click(function(){
              var msgid = $( this ).parent().attr('id');
               var caption = '{{@$messages['caption']}}';
               /*if(caption == '')
                 caption = 'Inbox';*/
               $('#entry-message').load('{{URL::to('user/message/details/')}}'+'/'+caption+'/'+msgid);
        });

    jQuery("time.timeago").timeago();
});

</script>
