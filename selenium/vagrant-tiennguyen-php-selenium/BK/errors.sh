# Some errors when setting up environment and solutions

Run: sudo apt-get update
Error: W: GPG error: http://ppa.launchpad.net precise InRelease: The following signatures couldn't be verified because the public key is not available: NO_PUBKEY EB9B1D8886F44E2A
Solution: sudo apt-key adv --keyserver keyserver.ubuntu.com --recv-keys EB9B1D8886F44E2A
After that run first command line again
#=========================================================

Run: composer install
Error: Cannot create cache directory /home/vagrant/.composer/cache/repo/https---packagist.org/, or directory is not writable. Proceeding without cache
Cannot create cache directory /home/vagrant/.composer/cache/files/, or directory is not writable. Proceeding without cache
Solution: sudo chown -R $USER $HOME/.composer
#=========================================================

Run: php -version (after enable curl extention in /etc/php/5.6/cli/php.ini)
Error: PHP Warning:  PHP Startup: Unable to load dynamic library '/usr/lib/php/20131226/php_curl.dll' - /usr/lib/php/20131226/php_curl.dll: cannot open shared object file: No such file or directory in Unknown on line 0
Solution: 