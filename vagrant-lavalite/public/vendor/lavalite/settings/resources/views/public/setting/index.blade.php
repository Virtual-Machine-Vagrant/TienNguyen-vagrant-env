
<div class="row">
  <div class="col-md-12">
    @forelse($settings as $setting)
      <div class="row">

                              <div class="col-md-4 col-sm-6 ">
                                 <div class="form-group">
                                      <label for="user_id">{!! trans('settings::setting.label.user_id') !!}</label><br />
                                      {!! $setting['user_id'] !!}
                                 </div>
                              </div>

                              <div class="col-md-4 col-sm-6 ">
                                 <div class="form-group">
                                      <label for="skey">{!! trans('settings::setting.label.skey') !!}</label><br />
                                      {!! $setting['skey'] !!}
                                 </div>
                              </div>

                              <div class="col-md-4 col-sm-6 ">
                                 <div class="form-group">
                                      <label for="name">{!! trans('settings::setting.label.name') !!}</label><br />
                                      {!! $setting['name'] !!}
                                 </div>
                              </div>

                              <div class="col-md-4 col-sm-6 ">
                                 <div class="form-group">
                                      <label for="value">{!! trans('settings::setting.label.value') !!}</label><br />
                                      {!! $setting['value'] !!}
                                 </div>
                              </div>

                              <div class="col-md-4 col-sm-6 ">
                                 <div class="form-group">
                                      <label for="type">{!! trans('settings::setting.label.type') !!}</label><br />
                                      {!! $setting['type'] !!}
                                 </div>
                              </div>
        </div>
    @empty
    <p>No settings</p>
    @endif
  </div>
</div>
   
