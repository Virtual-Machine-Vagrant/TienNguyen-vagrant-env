#! /bin/sh
# Tien Nguyen - 20/10/2016
#=========================================================
# Update current system
echo "Updating packages ..."
sudo apt-get update
#=========================================================
# Remove all PHP versions
echo "Remove all PHP versions"
sudo apt-get purge php.*
sudo apt-get update
#=========================================================
# Install apt-repository ppa in order to install PHP and Java
echo "Install apt-repository ppa in order to install PHP and Java"
#sudo apt-get install -y software-properties-common
sudo apt-get install -y python-software-properties
sudo apt-get update
#=========================================================
# Install PHP 5.6
echo "Install PHP 5.6"
sudo add-apt-repository ppa:ondrej/php
sudo apt-get update
sudo apt-get install -y php5.6
#=========================================================
# Install PHP extensions
echo "Install PHP extensions"
sudo apt-get install -y php5-curl
sudo apt-get install -y php5.6-xml
#=========================================================
# Install GIT
echo "Install GIT"
sudo apt-get install -y curl php5-cli git
sudo apt-get update
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
# Install Java 8
echo "Install Java 8"
sudo add-apt-repository ppa:openjdk-r/ppa
sudo apt-get update
sudo apt-get install -y openjdk-8-jdk
#=========================================================
# Install PHPUnit 
echo "Install PHPUnit"
sudo wget https://phar.phpunit.de/phpunit.phar
sudo chmod +x phpunit.phar
sudo mv phpunit.phar /usr/bin/phpunit

#=========================================================
# Install selenium-server-standalone-3.0.1.jar
echo "Download and install selenium"
sudo wget http://selenium-release.storage.googleapis.com/3.0/selenium-server-standalone-3.0.0.jar
sudo chmod +x selenium-server-standalone-3.0.0.jar
sudo mv selenium-server-standalone-3.0.0.jar /usr/local/bin/
#=========================================================
# Install PHP Unit and Selenium
echo "Install PHP Unit and Selenium"
sudo composer require --dev phpunit/phpunit-selenium
#=========================================================