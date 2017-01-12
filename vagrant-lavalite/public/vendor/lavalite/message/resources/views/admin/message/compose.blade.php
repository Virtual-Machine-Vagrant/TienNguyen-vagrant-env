<div class="" id="compose-id">
    <div class="">
        <div class="">
            <div class="">
                <!-- <button type="button" class="close" data-dismiss="modal" aria-hidden="true">&times;</button> -->
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
                       {!! Form::email('to')
                        -> placeholder("To")
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
<script type="text/javascript">
    
       $(function () {
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
                },
                error: function(jqXHR, textStatus, errorThrown)
                {
                    $('#btn-send').prop('disabled',false);
                    $('#btn-close').prop('disabled',false);
                }
            });
            e.preventDefault();
        });
        });
</script>