#
# example project vagrant file
#

Vagrant.configure(2) do |config|

  config.vm.box = "ubuntu/trusty64"
  config.vm.provider "virtualbox" do |v|
    v.cpus = 1
    v.memory = 2048
  end

  # setup network, ports and synced folder
  config.vm.network :forwarded_port, guest: 80, host: 8081
  config.vm.network :private_network, ip: "192.168.33.30"
  config.vm.synced_folder ".", "/home/web/example"

  # fix vagrant box
  config.vm.provision "shell", inline: "rm -f /root/.profile"
  config.vm.provision "shell", inline: "sudo -u vagrant /usr/bin/touch /home/vagrant/.hushlogin"

  # run provision
  puppet_dir = "puppet"
  config.vm.provision :puppet, run: "always" do |puppet|
    puppet.manifests_path = "#{puppet_dir}/manifests"
    puppet.manifest_file = "site.pp"
    puppet.module_path = ["#{puppet_dir}/modules"]
  end

end
