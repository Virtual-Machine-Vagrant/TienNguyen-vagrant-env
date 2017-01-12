# specify stable versions to grab
FIREFOX_VERSION="47.0.1"
SELENIUM_VERSION="3.0/selenium-server-standalone-3.0.1.jar"

#=========================================================
echo "Update current system"
sudo apt-get update
#=========================================================
# Installing composer for PHP tests
echo "Installing composer for PHP tests"
sudo wget https://getcomposer.org/download/1.2.1/composer.phar
sudo chmod +x composer.phar
sudo mv composer.phar /usr/local/bin/composer
sudo chown -R $USER $HOME/.composer
sudo apt-get update
#=========================================================
# Install PHPUnit 
echo "Install PHPUnit"
sudo wget https://phar.phpunit.de/phpunit.phar
sudo chmod +x phpunit.phar
sudo mv phpunit.phar /usr/bin/phpunit

#=========================================================
# Install selenium-server-standalone-3.0.1.jar
#echo "Download and install selenium"
#sudo wget http://selenium-release.storage.googleapis.com/3.0/selenium-server-standalone-3.0.0.jar
#sudo chmod +x selenium-server-standalone-3.0.0.jar
#sudo mv selenium-server-standalone-3.0.0.jar /usr/local/bin/
#=========================================================
# Install PHP Unit and Selenium
echo "Install PHP Unit and Selenium"
 #sudo apt-get update
 #cd /vagrant/myproject/
 #composer install
 #composer require phpunit/phpunit-selenium --dev
#=========================================================
echo "Installing xvfb for headless testing"
sudo apt-get -y install xvfb
#=========================================================
echo "Installing firefox ${FIREFOX_VERSION} ... "
wget https://ftp.mozilla.org/pub/firefox/releases/${FIREFOX_VERSION}/firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2 && tar xjf firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2
sudo mv firefox-sdk /opt/firefox
sudo rm -rf /usr/bin/firefox
sudo ln -s /opt/firefox/bin/firefox /usr/bin/firefox
sudo rm -rf firefox-${FIREFOX_VERSION}.linux-x86_64.sdk.tar.bz2
#=========================================================
echo "Downloading selenium server ${SELENIUM_VERSION}..."
wget "https://selenium-release.storage.googleapis.com/${SELENIUM_VERSION}" -O selenium-server-standalone.jar
chown vagrant:vagrant selenium-server-standalone.jar
chmod +x selenium-server-standalone.jar
sudo mv selenium-server-standalone.jar /usr/local/bin/
#=========================================================
