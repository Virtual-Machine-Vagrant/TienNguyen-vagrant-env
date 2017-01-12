class nginx {
  require base
  require apt

  $error_log_path = "/var/log/nginx/error.log"
  $pid_path = "/var/run/nginx.pid"
  $access_log_path = "/var/log/nginx/access.log"

  # add nginx repository
  apt::source { 'nginx':
    location => "http://nginx.org/packages/ubuntu",
    repos    => 'nginx',
    key      => {
      'id'     => '573BFD6B3D8FBC641079A6ABABF5BD827BD9BF62',
      'source' => 'http://nginx.org/keys/nginx_signing.key',
    },
  }

  # package install list
  $packages_install = [
    "nginx"
  ]

  # install packages
  package { $packages_install:
    ensure  => present,
    require => [
      Apt::Source['nginx'],
      Class['apt::update'],
    ],
  }

  file { 'nginx conf':
    path    => '/etc/nginx/nginx.conf',
    ensure  => present,
    content => template('configuration/nginx/nginx.conf.erb'),
    require => Package['nginx'],
    notify  => Service['nginx'],
  }

  file { 'nginx vhost':
    path    => '/etc/nginx/conf.d/example.conf',
    ensure  => present,
    content => template('configuration/nginx/example.conf.erb'),
    require => File['nginx conf'],
    notify  => Service['nginx'],
  }

  service { 'nginx':
    ensure  => running,
    enable  => true,
    require => [
      Package['nginx'],
      File['nginx vhost']
    ],
  }

}

class { 'nginx': }
