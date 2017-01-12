sudo apt-get update
#=========================================================
echo "Installing dependencies ..."
sudo apt-get install -y curl
sudo apt-get install -y unzip
sudo apt-get install -y curl php5-cli git
sudo apt-get install -y php-mbstring php-mcrypt php-gd 
sudo apt-get install -y php5.6-xml
sudo apt-get install -y php5.6-curl

# sudo apt-get install php7.0-gd php7.0-mcrypt php7.0-curl php7.0-intl php7.0-xsl php7.0-mbstring php7.0-openssl php7.0-zip
#=========================================================
echo "Stopping and starting Apache once PHP is installed"

 /etc/init.d/apache2 stop
 /etc/init.d/apache2 start
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
# Install apt-repository ppa in order to install PHP and Java
echo "Install apt-repository ppa in order to install PHP and Java"
#sudo apt-get install -y software-properties-common
sudo apt-get install -y python-software-properties
sudo apt-get update
#=========================================================
