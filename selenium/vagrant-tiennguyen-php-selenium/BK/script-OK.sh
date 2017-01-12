#! /bin/sh
# Tien Nguyen - 20/10/2016

# Update current system
echo "Updating packages ..."
sudo apt-get update

# Remove all PHP versions
echo "Remove all PHP versions"
sudo apt-get purge php.*
sudo apt-get update

# Install apt-repository ppa in order to install PHP and Java
echo "Install apt-repository ppa in order to install PHP and Java"
#sudo apt-get install -y software-properties-common
sudo apt-get install -y python-software-properties
sudo apt-get update

# Install PHP 5.6
echo "Install PHP 5.6"
sudo add-apt-repository ppa:ondrej/php
sudo apt-get update
sudo apt-get install -y php5.6

# Install PHP extensions
echo "Install PHP extensions"
sudo apt-get install -y php5-curl
sudo apt-get install -y php5.6-xml

# Install GIT
echo "Install GIT"
sudo apt-get install -y curl php5-cli git
sudo apt-get update

# To avoid an error "default: dpkg-preconfigure: unable to re-open stdin: No such file or directory"
echo "To avoid an error "default: dpkg-preconfigure: unable to re-open stdin: No such file or directory""
export DEBIAN_FRONTEND=noninteractive

# Install Java 8
echo "Install Java 8"
sudo add-apt-repository ppa:openjdk-r/ppa
sudo apt-get update
sudo apt-get install -y openjdk-8-jdk
