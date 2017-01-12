<div class="row">
    <div class="col-md-12">
        <div class="box-header with-border">
            <h3 class="box-title m-t-0">
                Compose Message
            </h3>
        </div>
    </div>
</div>
<div class="row">
    <div class="col-sm-12">
        <div class="card-box">
            <div class="p-20">
                {!!Form::vertical_open()
                ->id('create-message-message')
                ->method('POST')
                ->files('true')
                ->action(URL::to('user/message/message'))!!}

                {!! Form::hidden('status')
                 ->id('status')
                 -> forceValue("Sent")!!}
                    <div class="form-group">
                    {!! Form::select('mails[]')
                    ->id('to')
                    -> options(Message::getUsers())
                    -> addClass('js-example-tags')
                    -> style('width:100%')
                    -> multiple()
                    -> required()
                    -> raw()!!}
                    </div>
                    <div class="form-group">
                     {!! Form::text('subject')
                    -> placeholder("Subject")
                    -> required()
                    -> class('form-control')
                    -> raw()!!}
                    </div>
                    <div class="form-group">
                      {!! Form::textarea ('message')
                        -> placeholder("Message")
                        -> required()
                        -> class('form-control')
                        -> rows(10)
                        ->cols(30)
                        -> raw()!!}
                    </div>

                    <div class="btn-toolbar form-group m-b-0">
                        <div class="pull-right">
                            <button id="btn-close"  type="button" class="btn btn-success waves-effect waves-light m-r-5"><i class="fa fa-floppy-o"></i></button>
                            <button id="btn-send" class="btn btn-purple waves-effect waves-light"> <span>Send</span> <i class="fa fa-send m-l-10"></i> </button>
                        </div>
                    </div>

               {!! Form::close() !!}
            </div>
        </div>

    </div>
</div>




<script type="text/javascript">
    $(function () {

        $(".js-example-tags").select2({
          tags: true
        });

        $('#btn-send').click(function(){
            $('#create-message-message').submit();
        });

        $('#btn-close').click(function(){
            if ($("#to").val() == '') {
                return;
            }
            $("#status").val('Draft');
            $('#create-message-message').submit();
        });
        $('#btn-trash-delete').click(function(){
            if ($("#to").val() == '') {
                return;
            }
            $("#status").val('Trash');
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
                    $('#btn-trash-delete').prop('disabled',true);
                },
                success:function(data, textStatus, jqXHR)
                {
                    $('#entry-message').load('{{URL::to('user/message/status/Inbox')}}');
                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                    $('#btn-send').prop('disabled',false);
                    $('#btn-close').prop('disabled',false);
                    $('#btn-trash-delete').prop('disabled',false);
                }
            });
            e.preventDefault();
        });

    });
</script>
