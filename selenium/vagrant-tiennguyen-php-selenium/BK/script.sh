#! /bin/sh
# Tien Nguyen - 20/10/2016
#=========================================================
# Update current system
echo "Updating packages ..."
sudo apt-get update
#=========================================================
echo "Installing dependencies ..."
#=========================================================
sudo apt-get install -y curl
sudo apt-get install -y unzip
#=========================================================
# Remove all PHP versions
echo "Remove all PHP versions"
sudo apt-get purge php.*
sudo apt-get update
#=========================================================
echo "Installing LAMP stack ... "
#=========================================================
sudo apt-get -y install apache2

# set up root password for MySQL
sudo debconf-set-selections <<< 'mysql-server mysql-server/root_password password password'
sudo debconf-set-selections <<< 'mysql-server mysql-server/root_password_again password password'

# depedencies
sudo apt-get -y install mysql-server libapache2-mod-auth-mysql php5-mysql

# ensure we get PHP 5.4.x, required for composer
sudo apt-get install -y software-properties-common
sudo apt-get install -y python-software-properties
sudo add-apt-repository ppa:ondrej/php
sudo apt-get update

# installing PHP and it's dependencies
sudo apt-get -y install php5.6 libapache2-mod-php5 php5-mcrypt
sudo apt-get -y install php5-curl
sudo apt-get install -y php5.6-xml
sudo apt-get install -y curl php5-cli git
sudo apt-get update
#=========================================================

#=========================================================
# To avoid an error "default: dpkg-preconfigure: unable to re-open stdin: No such file or directory"
echo "To avoid an error "default: dpkg-preconfigure: unable to re-open stdin: No such file or directory""
export DEBIAN_FRONTEND=noninteractive
#=========================================================
# Use launchpad-getkeys to fix apt-get update “the following signatures couldn’t be verified because the public key is not available” by script of vagrant
sudo apt-get install launchpad-getkeys
sudo launchpad-getkeys
sudo apt-get update
#=========================================================
# Installing composer for PHP tests
echo "Installing composer for PHP tests"
sudo wget https://getcomposer.org/download/1.2.1/composer.phar
sudo chmod +x composer.phar
sudo mv composer.phar /usr/local/bin/composer
sudo chown -R $USER $HOME/.composer
composer install
sudo apt-get update
#=========================================================
