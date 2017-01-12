class bashrc {
  require base

  file { 'bashrc customized by default':
    path => "/home/$box::user/.bashrc",
    content => template('configuration/bashrc/bashrc.erb'),
    ensure => present,
    owner => $box::user,
    group => $box::group,
  }
}

class { 'bashrc': }
