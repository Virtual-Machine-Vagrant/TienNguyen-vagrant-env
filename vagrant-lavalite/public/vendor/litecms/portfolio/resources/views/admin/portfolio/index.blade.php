@extends('admin::curd.index')
@section('heading')
<i class="fa fa-file-text-o"></i> {!! trans('portfolio::portfolio.name') !!} <small> {!! trans('cms.manage') !!} {!! trans('portfolio::portfolio.names') !!}</small>
@stop

@section('title')
{!! trans('portfolio::portfolio.names') !!}
@stop

@section('breadcrumb')
<ol class="breadcrumb">
    <li><a href="{!! trans_url('admin') !!}"><i class="fa fa-dashboard"></i> {!! trans('cms.home') !!} </a></li>
    <li class="active">{!! trans('portfolio::portfolio.names') !!}</li>
</ol>
@stop

@section('entry')
<div class="box box-warning" id='portfolio-portfolio-entry'>
</div>
@stop

@section('tools')
@stop

@section('content')
<table id="portfolio-portfolio-list" class="table table-striped table-bordered data-table">
    <thead  class="list_head">
        <th>{!! trans('portfolio::portfolio.label.title')!!}</th>
        <th>{!! trans('portfolio::portfolio.label.category_id')!!}</th>
        <th>{!! trans('portfolio::portfolio.label.status')!!}</th>
        <th>{!! trans('published')!!}</th>
    </thead>
    <thead  class="search_bar">
        <th>{!! Form::text('search[title]')->raw()!!}</th>
        <th>{!! Form::select('select[category_id]')->raw()->options(['' => 'All'] + Portfolio::getCategory())!!}</th>
        <th>{!! Form::select('search[status]')->raw()->options(['' => 'All']+trans('portfolio::portfolio.options.status'))!!}</th>
         <th>{!! Form::select('search[published]')
                ->options(['' => 'All','Yes' => 'Published', ' ' => 'Unpublished'])
                ->raw()!!}</th>
    </thead>
</table>
@stop

@section('script')
<script type="text/javascript">

var oTable;
$(document).ready(function(){
    app.load('#portfolio-portfolio-entry', '{!!trans_url('admin/portfolio/portfolio/0')!!}');
    oTable = $('#portfolio-portfolio-list').dataTable( {
        "bProcessing": true,
        "sDom": 'R<>rt<ilp><"clear">',
        "bServerSide": true,
        "sAjaxSource": '{!! trans_url('/admin/portfolio/portfolio') !!}',
        "fnServerData" : function ( sSource, aoData, fnCallback ) {

            $('#portfolio-portfolio-list .search_bar input, #portfolio-portfolio-list .search_bar select').each(
                function(){
                    aoData.push( { 'name' : $(this).attr('name'), 'value' : $(this).val() } );
                }
            );
            app.dataTable(aoData);
            $.ajax({
                'dataType'  : 'json',
                'data'      : aoData,
                'type'      : 'GET',
                'url'       : sSource,
                'success'   : fnCallback
            });
        },

        "columns": [
            {data :'title'},
                    {data :'category_id'},
                    {data :'status'},
                    {data :'published'},
        ],
        "pageLength": 25
    });

    $('#portfolio-portfolio-list tbody').on( 'click', 'tr', function () {

        oTable.$('tr.selected').removeClass('selected');
        $(this).addClass('selected');

        var d = $('#portfolio-portfolio-list').DataTable().row( this ).data();

        $('#portfolio-portfolio-entry').load('{!!trans_url('admin/portfolio/portfolio')!!}' + '/' + d.id);
    });

    $("#portfolio-portfolio-list .search_bar input, #portfolio-portfolio-list .search_bar select").on('keyup select', function (e) {
        e.preventDefault();
        console.log(e.keyCode);
        if (e.keyCode == 13 || e.keyCode == 9) {
            oTable.api().draw();
        }
    });
    $("#portfolio-portfolio-list .search_bar select, #published_on").on('change', function (e) {
        e.preventDefault();
        oTable.api().draw();
    });
});
</script>
@stop

@section('style')
@stop
