<div class="no-padding">
   <div id="calendar"></div>
</div>
@section('script')
<script type="text/javascript">
$(function () {
    $('#calendar').fullCalendar({
        header: {
            left: 'prev,next today',
            center: 'title',
            right: 'month,agendaWeek,agendaDay'
        },
        buttonText: {
            today: 'today',
            month: 'month',
            week: 'week',
            day: 'day'
        },
        //Random default events
        eventSources: [
        // your event source
        {
        url: '{!!Trans::to('user/calendar/calendar/ajax/list')!!}', // use the `url` property
        }
        ],
        editable: false,
        droppable: false, // this allows things to be dropped onto the calendar !!!
        resizable: false,
    });
       
});
</script>
@show
@section('style')
<style type="text/css">
    .fc-time{
       display : none;
    }
</style>
@show
