@extends('admin::curd.index')
@section('heading')
<i class="fa fa-file-text-o"></i> {!! trans('portfolio::category.name') !!} <small> {!! trans('cms.manage') !!} {!! trans('portfolio::category.names') !!}</small>
@stop

@section('title')
{!! trans('portfolio::category.names') !!}
@stop

@section('breadcrumb')
<ol class="breadcrumb">
    <li><a href="{!! trans_url('admin') !!}"><i class="fa fa-dashboard"></i> {!! trans('cms.home') !!} </a></li>
    <li class="active">{!! trans('portfolio::category.names') !!}</li>
</ol>
@stop

@section('entry')
<div class="box box-warning" id='portfolio-category-entry'>
</div>
@stop

@section('tools')
@stop

@section('content')
<table id="portfolio-category-list" class="table table-striped table-bordered data-table">
    <thead  class="list_head">
        <th>{!! trans('portfolio::category.label.name')!!}</th>
        <th>{!! trans('portfolio::category.label.status')!!}</th>
    </thead>
    <thead  class="search_bar">
        <th>{!! Form::text('search[name]')->raw()!!}</th>
        <th>{!! Form::text('search[status]')->raw()!!}</th>
    </thead>
</table>
@stop

@section('script')
<script type="text/javascript">

var oTable;
$(document).ready(function(){
    app.load('#portfolio-category-entry', '{!!trans_url('admin/portfolio/category/0')!!}');
    oTable = $('#portfolio-category-list').dataTable( {
        "bProcessing": true,
        "sDom": 'R<>rt<ilp><"clear">',
        "bServerSide": true,
        "sAjaxSource": '{!! trans_url('/admin/portfolio/category') !!}',
        "fnServerData" : function ( sSource, aoData, fnCallback ) {

            $('#portfolio-category-list .search_bar input, #portfolio-category-list .search_bar select').each(
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
            {data :'name'},
                    {data :'status'},
        ],
        "pageLength": 25
    });

    $('#portfolio-category-list tbody').on( 'click', 'tr', function () {

        oTable.$('tr.selected').removeClass('selected');
        $(this).addClass('selected');

        var d = $('#portfolio-category-list').DataTable().row( this ).data();

        $('#portfolio-category-entry').load('{!!trans_url('admin/portfolio/category')!!}' + '/' + d.id);
    });

    $("#portfolio-category-list .search_bar input, #portfolio-category-list .search_bar select").on('keyup select', function (e) {
        e.preventDefault();
        console.log(e.keyCode);
        if (e.keyCode == 13 || e.keyCode == 9) {
            oTable.api().draw();
        }
    });
});
</script>
@stop

@section('style')
@stop

