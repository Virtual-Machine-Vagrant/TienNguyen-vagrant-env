class php_fpm {
  require php_configuration

  $pid_path = "/var/run/php5-fpm.pid"
  $log_path = "/var/log/php5-fpm.error.log"
  $socket_path = "/var/run/php5-fpm.socket"

  exec { 'fix locale':
    command => '/usr/sbin/locale-gen en_US.UTF-8 && export LANG=en_US.UTF-8'
  }

  # describe configuration file for php5-fpm
  file { 'php_fpm conf':
    path    => '/etc/php5/fpm/php-fpm.conf',
    ensure  => present,
    content => template('configuration/php-fpm/php-fpm.conf.erb'),
    notify  => Service["php5-fpm"],
    require => Package["php5-fpm"],
  }

  # describe php5-fpm service, provided by php5-fpm package
  service { 'php5-fpm':
    ensure  => running,
    enable  => true,
    require => [
      Exec["fix locale"],
      File["php_fpm conf"],
      Package["php5-fpm"],
    ],
  }
}

class { 'php_fpm': }