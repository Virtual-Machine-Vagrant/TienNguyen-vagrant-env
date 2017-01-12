#!/bin/bash

# specify stable versions to grab
FIREFOX_VERSION="47.0.1"
SELENIUM_VERSION="2.53/selenium-server-standalone-2.53.1.jar"

#=========================================================
echo "Updating packages ..."
#=========================================================
sudo apt-get update

#=========================================================
echo "Installing dependencies ..."
#=========================================================
sudo apt-get install -y curl
sudo apt-get install -y unzip
# install java
sudo apt-get install -y openjdk-7-jre

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
sudo add-apt-repository ppa:ondrej/php5-oldstable
sudo apt-get update

# installing PHP and it's dependencies
sudo apt-get -y install php5 libapache2-mod-php5 php5-mcrypt
sudo apt-get -y install php5-curl

# =========================================================
# echo "Installing GUI ... "
# =========================================================
# sudo apt-get install -y ubuntu-desktop gnome

# # install GUI
# sudo apt-get install -y xfce4 virtualbox-guest-dkms virtualbox-guest-utils virtualbox-guest-x11
# # Permit anyone to start the GUI
# sudo sed -i 's/allowed_users=.*$/allowed_users=anybody/' /etc/X11/Xwrapper.config

#=========================================================
echo "Installing xvfb for headless testing"
#=========================================================
sudo apt-get -y install xvfb

#=========================================================
echo "Installing firefox ${FIREFOX_VERSION} ... "
#=========================================================
wget https://ftp.mozilla.org/pub/firefox/releases/${FIREFOX_VERSION}/firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2 && tar xjf firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2
sudo mv firefox-sdk /opt/firefox
sudo rm -rf /usr/bin/firefox
sudo ln -s /opt/firefox/bin/firefox /usr/bin/firefox
sudo rm -rf firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2

#=========================================================
echo "Downloading selenium server ${SELENIUM_VERSION}..."
#=========================================================
sudo wget "https://selenium-release.storage.googleapis.com/${SELENIUM_VERSION}" -O selenium-server-standalone.jar
sudo chown vagrant:vagrant selenium-server-standalone.jar
sudo chmod +x selenium-server-standalone.jar

#=========================================================
echo "Installing composer for PHP tests"
#=========================================================
curl -sS https://getcomposer.org/installer | sudo php -- --install-dir=/usr/local/bin --filename=composer

# https://blog.liandrew.ca/blackbox-testing/2016/05/09/How-to-create-a-Selenium-Vagrant-base-box-to-run-headless-web-tests/
