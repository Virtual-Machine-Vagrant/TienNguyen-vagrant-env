<div class="box-header with-border">
    <h3 class="box-title"> {{ trans('cms.view') }}   {!! trans('task::task.name') !!}  [{!! $task->name !!}]  </h3>
    <div class="box-tools pull-right">
        <button type="button" class="btn btn-success btn-sm" data-action='NEW' data-load-to='#task-task-entry' data-href='{{trans_url('admin/task/task/create')}}'><i class="fa fa-times-circle"></i> New</button>
        @if($task->id )
        <button type="button" class="btn btn-primary btn-sm" data-action="EDIT" data-load-to='#task-task-entry' data-href='{{ trans_url('/admin/task/task') }}/{{$task->getRouteKey()}}/edit'><i class="fa fa-pencil-square"></i> Edit</button>
        <button type="button" class="btn btn-danger btn-sm" data-action="DELETE" data-load-to='#task-task-entry' data-datatable='#task-task-list' data-href='{{ trans_url('/admin/task/task') }}/{{$task->getRouteKey()}}' >
        <i class="fa fa-times-circle"></i> Delete
        </button>
        @endif
        <button class="btn btn-box-tool" data-widget="collapse"><i class="fa fa-minus"></i></button>
    </div>
</div>
<div class="box-body" >
    <div class="nav-tabs-custom">
        <!-- Nav tabs -->
        <ul class="nav nav-tabs primary">
            <li class="active"><a href="#details" data-toggle="tab">  {!! trans('task::task.name') !!}</a></li>
        </ul>
        {!!Form::vertical_open()
        ->id('task-task-show')
        ->method('POST')
        ->files('true')
        ->action(trans_url('admin/task/task'))!!}
            <div class="tab-content">
                <div class="tab-pane active" id="details">
                    @include('task::admin.task.partial.entry')
                </div>
            </div>
        {!! Form::close() !!}
    </div>
</div>
<div class="box-footer" >
    &nbsp;
</div>