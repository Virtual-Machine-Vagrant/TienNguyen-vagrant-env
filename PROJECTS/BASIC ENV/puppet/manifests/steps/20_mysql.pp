class mysql {
  require base
  require apt

  # add mysql percona repository
  apt::source { 'mysql-percona':
    location => "http://repo.percona.com/apt",
    key      => {
      'id'     => '430BDF5C56E7C94E848EE60C1C4CBDCDCD2EFD2A',
      'server' => 'keyserver.ubuntu.com',
    },
  }

  # package install list
  $packages_install = [
    "percona-server-server-5.6",
    "percona-server-client-5.6"
  ]

  # install packages
  package { $packages_install:
    ensure  => present,
    require => [
      Apt::Source['mysql-percona'],
      Class['apt::update'],
    ],
  }

  # define mysql configuration
  file { 'mysql configuration':
    path    => '/etc/mysql/my.cnf',
    ensure  => present,
    content => template('configuration/mysql/my.cnf.erb'),
    require => Package["percona-server-server-5.6"],
    notify  => Service['mysql'],
  }

  # define mysql service provided
  service { "mysql":
    ensure  => running,
    enable  => true,
    require => File['mysql configuration'],
  }
}

class { 'mysql': }
