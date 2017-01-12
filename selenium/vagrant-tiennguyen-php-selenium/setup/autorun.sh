# Stop and start apache2
service apache2 stop
service apache2 start
#=========================================================
# Start Selenium
java -jar /usr/local/bin/selenium-server-standalone.jar &