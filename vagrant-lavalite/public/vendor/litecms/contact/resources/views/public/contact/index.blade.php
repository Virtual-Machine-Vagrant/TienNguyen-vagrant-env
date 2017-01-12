        <section class="contact">
            <div class="contact-details">
                <div class="container">
                    <div class="row">
                        <div class="col-md-6 contact-skew">
                            <div class="contact-detail-wraper">
                                <h1>Contacts</h1>
                                <div class="contact-icons">
                                    <p><i class="icon-envelope-open"></i><span>{!!$contacts['email']!!}</span></p>
                                    <p><i class="icon-phone"></i><span>{!!$contacts['phone']!!}</span></p>
                                    <p><i class="icon-screen-smartphone"></i><span>{!!$contacts['mobile']!!}</span></p>
                                </div>
                                <br>
                                <p>{!!$contacts['address']!!} </p>
                            </div>
                        </div>
                        <div class="col-md-6">
                            <div id="map"></div>
                        </div>
                    </div>
                </div>
            </div>
            <div class="contact-form">
                <div class="container">
                    <div class="row">
                        <div class="col-md-12">
                            <h1>Contact Us</h1>
                        </div>
                        @if(Session::has('success'))                        
                        <div class="col-md-12">
                            <div class = "alert alert-success">{!! Session::get('success') !!}</div>
                        </div>
                        @endif
                    </div>
                         {!!Form::vertical_open()
                        -> id('contactForm')
                        -> method('POST')
                        -> files('true')
                        -> action(trans_url('contacts/contact/sendMail'))!!}
                            <div class="row">
                                <div class="col-sm-6">
                                    {!!Form::text('name','')
                                    ->class('form-control')
                                    ->placeholder('Name')!!}
                                    <i class="form-control-feedback icon-user"></i>
                                </div>
                                <div class="col-sm-6">
                                    {!!Form::email('email','')
                                    ->class('form-control')
                                    ->placeholder('Email')!!}
                                    <i class="form-control-feedback icon-envelope-open"></i>
                                </div>
                            </div>
                            <div class="row">
                                <div class="col-sm-12">
                                   {!!Form::textarea('subject','')
                                   ->class('form-control')
                                   -> rows(10)
                                   ->placeholder('Message')!!}
                                   <i class="form-control-feedback icon-speech"></i>
                                </div>
                            </div>
                            <div class="row">
                                <div class="col-sm-12 text-right">
                                   <button type="submit" class="btn btn-danger btn-sm text-uppercase waves-effect waves-float">Send Message</button>
                                </div>
                            </div>
                    {!! Form::close() !!}
                </div>
            </div>
        </section>
<script type="text/javascript">
    $(function(){
        var markers = [
        {
            "lat": '9.9969491',
            "lng": '76.3006625',

            "description": 'Renfos Technologies <br/>Kaloor , Cochin , <br/> Kerala 682017'
        }
    ];


    // Google maps main api
    window.onload = function () {
        var mapOptions = {
            center: new google.maps.LatLng(markers[0].lat, markers[0].lng),
            zoom: 17,
            flat: true,
            scrollwheel:false,
            panControl:false,
            zoomControl:true,
            streetViewControl: false,
            mapTypeControl: false,

    // Google maps style
            styles: [{"featureType":"water","elementType":"geometry","stylers":[{"color":"#ea453e"},{"lightness":17}]},{"featureType":"landscape","elementType":"geometry","stylers":[{"color":"#e2e2e2"},{"lightness":20}]},{"featureType":"road.highway","elementType":"geometry.fill","stylers":[{"color":"#ffffff"},{"lightness":17}]},{"featureType":"road.highway","elementType":"geometry.stroke","stylers":[{"color":"#ffffff"},{"lightness":29},{"weight":0.2}]},{"featureType":"road.arterial","elementType":"geometry","stylers":[{"color":"#ffffff"},{"lightness":18}]},{"featureType":"road.local","elementType":"geometry","stylers":[{"color":"#ffffff"},{"lightness":16}]},{"featureType":"poi","elementType":"geometry","stylers":[{"color":"#f5f5f5"},{"lightness":21}]},{"featureType":"poi.park","elementType":"geometry","stylers":[{"color":"#dedede"},{"lightness":21}]},{"elementType":"labels.text.stroke","stylers":[{"visibility":"on"},{"color":"#ffffff"},{"lightness":16}]},{"elementType":"labels.text.fill","stylers":[{"saturation":36},{"color":"#333333"},{"lightness":40}]},{"elementType":"labels.icon","stylers":[{"visibility":"off"}]},{"featureType":"transit","elementType":"geometry","stylers":[{"color":"#f2f2f2"},{"lightness":19}]},{"featureType":"administrative","elementType":"geometry.fill","stylers":[{"color":"#fefefe"},{"lightness":20}]},{"featureType":"administrative","elementType":"geometry.stroke","stylers":[{"color":"#fefefe"},{"lightness":17},{"weight":1.2}]}],
            mapTypeId: google.maps.MapTypeId.ROADMAP
        };
            var infoWindow = new google.maps.InfoWindow();
            var map = new google.maps.Map(document.getElementById("map"), mapOptions);
            for (i = 0; i < markers.length; i++) {
            var data = markers[i]
            var myLatlng = new google.maps.LatLng(data.lat, data.lng);
            var marker = new google.maps.Marker({
            position: myLatlng,
            map: map,
            icon: 'img/pin.png',
            title: data.title
            });
            (function (marker, data) {
            google.maps.event.addListener(marker, "click", function (e) {
                infoWindow.setContent(data.description);
                infoWindow.open(map, marker);
              });
            })(marker, data);
        }
    };
    })
</script>
