# describe class base
class base {
  require box

  # list of base packages to install
  $packages_install = [
    "mc",
    "curl",
    "wget",
    "git",
    "nano",
  ]

  # list of base packages to remove
  $packages_remove = [
    "command-not-found"
  ]

  package { $packages_install:
    ensure => present,
  }

  package { $packages_remove:
    ensure => absent,
  }
}

# declare class base
class { 'base': }
