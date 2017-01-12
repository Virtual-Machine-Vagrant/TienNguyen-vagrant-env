#
# describe php class
#
class php {
  require base
  require apt

  # add php56 repo
  apt::source { 'php5-5.6':
    location => "http://ppa.launchpad.net/ondrej/php5-5.6/ubuntu",
    key      => {
      'id'     => '14AA40EC0831756756D7F66C4F4EA0AAE5267A6C',
      'server' => 'keyserver.ubuntu.com',
    }
  }

  # define php5 and modules we wish to install
  $packages_install = [
    "php5-common",
    "php5-cli",
    "php5-fpm",
    "php5-curl",
    "php5-gd",
    "php5-imagick",
    "php5-mysql",
  ]

  # install php5 and all requested modules
  package { $packages_install:
    ensure  => present,
    require => [
      Apt::Source['php5-5.6'],
      Class['apt::update'],
    ],
  }
}

#
# describe composer class
#
class composer {
  require php

  exec { 'install latest composer':
    command => 'curl -sS https://getcomposer.org/installer | php -- --install-dir=/usr/local/bin --filename=composer',
    path    => ['/usr/bin', '/usr/local/bin'],
    creates => '/usr/local/bin/composer',
    require => [
      Package['curl'],
      Package['php5-cli'],
    ],
  }
}

# define php class and composer
class { 'php': }
class { 'composer': }
