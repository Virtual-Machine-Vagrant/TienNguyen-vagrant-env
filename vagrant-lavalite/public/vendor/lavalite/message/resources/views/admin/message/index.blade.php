@extends('admin::curd.index')
@section('heading')
<i class="fa fa-file-text-o">
</i>
{!! trans('message::message.name') !!}
<small>
    {!! trans('cms.manage') !!} {!! trans('message::message.names') !!}
</small>
@stop
@section('title')
{!! trans('message::message.names') !!}
@stop
@section('breadcrumb')
<ol class="breadcrumb">
    <li>
        <a href="{!!URL::to('admin')!!}">
            <i class="fa fa-dashboard">
            </i>
            {!! trans('cms.home') !!}
        </a>
    </li>
    <li class="active">
        {!! trans('message::message.names') !!}
    </li>
</ol>
@stop
@section('entry')
@stop
@section('tools')
@stop
@section('content')
<div class="modal fade" id="compose-id">
    <div class="modal-dialog">
        <div class="modal-content">
            <div class="modal-header">
                <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button>
                <h4 class="modal-title">New Message</h4>
            </div>
            <div class="modal-body" >
                {!!Form::vertical_open()
                ->id('create-message-message')
                ->method('POST')
                ->files('true')
                ->action(URL::to('admin/message/message'))!!}
                {!! Form::hidden('status')
                 -> forceValue("Sent")!!}

                <div class='col-md-12 col-sm-12'>
                  {!! Form::select('mails[]')
                        -> options(trans('message::message.options.mails'))
                        -> class('js-example-tags select2-hidden-accessible')
                        -> style('width:100%')
                        -> multiple()
                        -> required()
                        -> raw()!!}
                </div>

                <div class='col-md-12 col-sm-12'>
                       {!! Form::text('subject')
                        -> placeholder("Subject")
                        -> required()                       
                        -> raw()!!}
                </div>

                <div class='col-md-12 col-sm-12'>
                    {!! Form::textarea ('message')
                    -> placeholder("Message")
                    -> required()
                    -> rows(6)
                    -> raw()!!}
                </div>
                
                {!! Form::close() !!}
            </div>
            <div class="modal-footer">
                <button type="button" class="btn btn-default" id="btn-close">Close</button>
                <button type="button" class="btn btn-primary" id="btn-send"><i class="fa fa-check"></i> Send</button>
            </div>
        </div>
    </div>
</div>
<div class="row">
    <div class="col-md-3">
        <a href="#compose-id" class="btn btn-primary btn-block margin-bottom" data-toggle="modal">
            Compose
        </a>
        <div class="box box-solid">
            <div class="box-header with-border">
                <h3 class="box-title">
                    Folders
                </h3>
                <div class="box-tools">
                    <button class="btn btn-box-tool" data-widget="collapse">
                        <i class="fa fa-minus">
                        </i>
                    </button>
                </div>
            </div>
            <div class="box-body no-padding">


            
                <ul class="nav nav-pills nav-stacked">
                    <li class="cur">
                        <a id="btn-inbox">
                            <i class="fa fa-inbox">
                            </i>
                            Inbox
                            <span class="label label-primary pull-right" id="inbox_id">
                                {!!Message::adminMsgcount('Inbox')!!}
                            </span>
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-sent">
                            <i class="fa fa-envelope-o">
                            </i>
                            Sent
                            <!-- <span class="label label-success pull-right" id="sent_id">
                                {!!Message::adminMsgcount('Sent')!!}
                            </span> -->
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-draft">
                            <i class="fa fa-file-text-o">
                            </i>
                            Drafts
                            <span class="label label-default pull-right">
                                {!!Message::adminMsgcount('Drafts')!!}
                            </span>
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-junk">
                            <i class="fa fa-filter">
                            </i>
                            Junk
                            <span class="label label-warning pull-right">
                                {!!Message::adminMsgcount('Junk')!!}
                            </span>
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-trash">
                            <i class="fa fa-trash-o">
                            </i>
                            Trash
                            <span class="label label-danger pull-right" id="trash_id">
                                {!!Message::adminMsgcount('Trash')!!}
                            </span>
                        </a>
                    </li>
                </ul>
            </div>
            <!-- /.box-body -->
        </div>
        <!-- /. box -->
        <div class="box box-solid">
            <div class="box-header with-border">
                <h3 class="box-title">
                    Labels
                </h3>
                <div class="box-tools">
                    <button class="btn btn-box-tool" data-widget="collapse">
                        <i class="fa fa-minus">
                        </i>
                    </button>
                </div>
            </div>
            <div class="box-body no-padding">
                <ul class="nav nav-pills nav-stacked">
                    <li class="cur">
                        <a id="btn-Important">
                            <i class="fa fa-circle-o text-red">
                            </i>
                            Important
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-Promotions">
                            <i class="fa fa-circle-o text-yellow">
                            </i>
                            Promotions
                        </a>
                    </li>
                    <li class="cur">
                        <a id="btn-Social">
                            <i class="fa fa-circle-o text-light-blue">
                            </i>
                            Social
                        </a>
                    </li>
                </ul>
            </div>
            <!-- /.box-body -->
        </div>
        <!-- /.box -->
    </div>
    <!-- /.col -->

    <div class="col-md-9">
        <div id='entry-message'></div>
    </div>
    <!-- /.col -->
</div>

@stop
@section('script')
    <link rel="stylesheet" type="text/css" href="https://select2.github.io/dist/css/select2.min.css">
    <script type="text/javascript" src="https://select2.github.io/dist/js/select2.full.js"></script>
    <script>
      $(function () {

        $(".js-example-tags").select2({
          tags: true
        });

        $('#entry-message').load('{{URL::to('admin/message/status/Inbox')}}');
         $('#btn-inbox').parent().addClass("active");
        $('#btn-inbox').click(function(){
           $(".cur").removeClass("active");
           $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Inbox')}}');
        });

        $('#btn-sent').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Sent')}}');
        });

        $('#btn-draft').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Draft')}}');
        });

        $('#btn-trash').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Trash')}}');
        });

        $('#btn-junk').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Junk')}}');
        });

        $('#btn-Important').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/starred')}}');
        });

        $('#btn-Promotions').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Promotions')}}');
        });

        $('#btn-Social').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('admin/message/status/Social')}}');
        });

        $('#btn-send').click(function(){
            $('#create-message-message').submit();
        });

        $('#btn-close').click(function(){
            if ($("#to").val() == '') {
                $('#compose-id').modal('hide');
                return;
            }
            $("input:hidden[name=status]").val('Draft');
            $('#create-message-message').submit();
        });
    
        $('#create-message-message').submit( function( e ) {
            if($('#create-message-message').valid() == false) {
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
                    $('#btn-send').prop('disabled',true);
                    $('#btn-close').prop('disabled',true);
                },
                success:function(data, textStatus, jqXHR)
                {
                    $('#compose-id').modal('hide');
                    $('#create-message-message').trigger('reset');
                    $('#btn-send').prop('disabled',false);
                    $('#btn-close').prop('disabled',false);
                    $('#inbox_id').html(data.inbox_count);
                    $('#trash_id').html(data.trash_count);                  
                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                    $('#btn-send').prop('disabled',false);
                    $('#btn-close').prop('disabled',false);
                }
            });
            e.preventDefault();
        });

       /* $('.mailbox-messages input[type="checkbox"]').iCheck({
          checkboxClass: 'icheckbox_flat-blue',
          radioClass: 'iradio_flat-blue'
        });*/

        /*$(".checkbox-toggle").click(function () {
          var clicks = $(this).data('clicks');
          if (clicks) {
            //Uncheck all checkboxes
            $(".mailbox-messages input[type='checkbox']").iCheck("uncheck");
            $(".fa", this).removeClass("fa-check-square-o").addClass('fa-square-o');
          } else {
            //Check all checkboxes
            $(".mailbox-messages input[type='checkbox']").iCheck("check");
            $(".fa", this).removeClass("fa-square-o").addClass('fa-check-square-o');
          }
          $(this).data("clicks", !clicks);
        });*/

        //Handle starring for glyphicon and font awesome
        $(".mailbox-star").click(function (e) {
          e.preventDefault();
          //detect type
          var $this = $(this).find("a > i");
          var glyph = $this.hasClass("glyphicon");
          var fa = $this.hasClass("fa");

          //Switch states
          if (glyph) {
            $this.toggleClass("glyphicon-star");
            $this.toggleClass("glyphicon-star-empty");
          }

          if (fa) {
            $this.toggleClass("fa-star");
            $this.toggleClass("fa-star-o");
          }
        });
        
      });
    </script>
@stop
@section('style')
<style type="text/css">
    a{
        cursor: pointer;
    }
</style>
@stop
