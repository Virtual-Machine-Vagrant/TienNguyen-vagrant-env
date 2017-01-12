#
# describe configuration for php
#
class php_configuration {
  require php

  # setup php.ini for cli
  file { 'php.ini for cli':
    path    => '/etc/php5/cli/php.ini',
    ensure  => present,
    content => template('configuration/php/cli_php.ini.erb'),
    require => Package['php5-cli'],
  }

  # setup php.ini for fpm
  file { 'php.ini for fpm':
    path    => '/etc/php5/fpm/php.ini',
    ensure  => present,
    content => template('configuration/php/fpm_php.ini.erb'),
    require => Package['php5-fpm'],
  }
}

class { 'php_configuration': }
