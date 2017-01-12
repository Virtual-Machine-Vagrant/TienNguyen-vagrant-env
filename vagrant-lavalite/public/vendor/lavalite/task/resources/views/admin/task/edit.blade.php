<div class="box-header with-border">
    <h3 class="box-title"> Edit  {!! trans('task::task.name') !!} [{!!$task->name!!}] </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-primary btn-sm" data-action='UPDATE' data-form='#task-task-edit'  data-load-to='#task-task-entry' data-datatable='#task-task-list'><i class="fa fa-floppy-o"></i> Save</button>
        <button type="button" class="btn btn-default btn-sm" data-action='CANCEL' data-load-to='#task-task-entry' data-href='{{trans_url('admin/task/task')}}/{{$task->getRouteKey()}}'><i class="fa fa-times-circle"></i> {{ trans('cms.cancel') }}</button>
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>

    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#task" data-toggle="tab">{!! trans('task::task.tab.name') !!}</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('task-task-edit')
        ->method('PUT')
        ->enctype('multipart/form-data')
        ->action(trans_url('admin/task/task/'. $task->getRouteKey()))!!}
        <div class="tab-content">
            <div class="tab-pane active" id="task">
                @include('task::admin.task.partial.entry')
            </div>
        </div>
        {!!Form::close()!!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>