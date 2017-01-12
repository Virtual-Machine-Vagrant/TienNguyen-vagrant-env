
<div class="dashboard-content">
    <div class="panel panel-color panel-inverse user-message">
        <div class="panel-heading">
            <div class="row">
                <div class="col-sm-6 col-md-6">
                    <h3 class="panel-title">
                        {!!trans('message::message.user_names')!!}
                    </h3>
                    <p class="panel-sub-title m-t-5 text-muted">
                        Sub title goes here with small font
                    </p>
                </div>
            </div>
        </div>
        <div class="panel-body">
            <div class="col-md-3">
                <a id="compose-id" class="btn btn-danger btn-block margin-bottom text-uppercase">
                    Compose
                </a>
                <div class="box box-solid">
                    <div class="box-header with-border">
                        <h3 class="box-title">
                            Folders
                        </h3>
                    </div>
                    <div class="box-body no-padding">



                        <ul class="nav nav-pills nav-stacked">
                            <li class="cur">
                                <a id="btn-inbox">
                                    <i class="fa fa-inbox">
                                    </i>
                                    Inbox
                                    <span class="label label-success pull-right" id="inbox_id">
                                        {!!Message::count('Inbox')!!}
                                    </span>
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-sent">
                                    <i class="fa fa-envelope-o">
                                    </i>
                                    Sent
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-draft">
                                    <i class="fa fa-file-text-o">
                                    </i>
                                    Drafts
                                    <span class="label label-default pull-right">
                                        {!!Message::count('Draft')!!}
                                    </span>
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-junk">
                                    <i class="fa fa-filter">
                                    </i>
                                    Junk
                                    <span class="label label-warning pull-right">
                                        {!!Message::count('Junk')!!}
                                    </span>
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-trash">
                                    <i class="fa fa-trash-o">
                                    </i>
                                    Trash
                                    <span class="label label-danger pull-right" id="trash_id">
                                        {!!Message::count('Trash')!!}
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
                    </div>
                    <div class="box-body no-padding">
                        <ul class="nav nav-pills nav-stacked">
                            <li class="cur">
                                <a id="btn-starred">
                                    <i class="fa fa-circle text-yellow">
                                    </i>
                                    Starred
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-Important">
                                    <i class="fa fa-circle text-red">
                                    </i>
                                    Important
                                </a>
                            </li>
                            <!-- <li class="cur">
                                <a id="btn-Promotions">
                                    <i class="fa fa-circle text-green">
                                    </i>
                                    Promotions
                                </a>
                            </li>
                            <li class="cur">
                                <a id="btn-Social">
                                    <i class="fa fa-circle text-light-blue">
                                    </i>
                                    Social
                                </a>
                            </li> -->
                        </ul>
                    </div>
                </div>
            </div>
            <div class="col-md-9">
                <div id='entry-message'></div>
            </div>
        </div>
    </div>
</div>

    <script>
      $(function () {

        $('#entry-message').load('{{URL::to('user/message/status/Inbox')}}');

        $('#btn-inbox').parent().addClass("active");

        $('#compose-id').click(function(){
           $(".cur").removeClass("active");
           $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/compose')}}');
        });

        $('#btn-inbox').click(function(){
           $(".cur").removeClass("active");
           $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Inbox')}}');
        });

        $('#btn-sent').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Sent')}}');
        });

        $('#btn-draft').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Draft')}}');
        });

        $('#btn-trash').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Trash')}}');
        });

        $('#btn-junk').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Junk')}}');
        });
        $('#btn-starred').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/starred')}}');
        });

        $('#btn-Important').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/important')}}');
        });

        $('#btn-Promotions').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Promotions')}}');
        });

        $('#btn-Social').click(function(){
            $(".cur").removeClass("active");
            $( this ).parent().addClass("active");
            $('#entry-message').load('{{URL::to('user/message/status/Social')}}');
        });

        $(".checkbox-toggle").click(function () {
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
        });

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

<style type="text/css">
    a{
        cursor: pointer;
    }
</style>
