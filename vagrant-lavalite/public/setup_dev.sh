#!/bin/bash

#
# display nice banner
#
echo -e "\e[32mSetting up.."
echo ""
echo -e "\t  _______  __   __  _______  __   __  _______  ___      _______  "
echo -e "\t |       ||  |_|  ||   _   ||  |_|  ||       ||   |    |       | "
echo -e "\t |    ___||       ||  |_|  ||       ||    _  ||   |    |    ___| "
echo -e "\t |   |___ |       ||       ||       ||   |_| ||   |    |   |___  "
echo -e "\t |    ___| |     | |       ||       ||    ___||   |___ |    ___| "
echo -e "\t |   |___ |   _   ||   _   || ||_|| ||   |    |       ||   |___  "
echo -e "\t |_______||__| |__||__| |__||_|   |_||___|    |_______||_______| "
echo -e "\t  _______  ______    _______      ___  _______  _______  _______ "
echo -e "\t |       ||    _ |  |       |    |   ||       ||       ||       |"
echo -e "\t |    _  ||   | ||  |   _   |    |   ||    ___||       ||_     _|"
echo -e "\t |   |_| ||   |_||_ |  | |  |    |   ||   |___ |       |  |   |  "
echo -e "\t |    ___||    __  ||  |_|  | ___|   ||    ___||      _|  |   |  "
echo -e "\t |   |    |   |  | ||       ||       ||   |___ |     |_   |   |  "
echo -e "\t |___|    |___|  |_||_______||_______||_______||_______|  |___|  "
echo ""
echo ""

#
# applications settings
#
APP_DEBUG="true"
APP_KEY=$(openssl rand -hex 16)
DB_HOST="localhost"
DB_DATABASE="tiennguyen_dev"
DB_USERNAME="root"
DB_PASSWORD=""

#
# put settings into .env
#
cat > ./.env <<EOL
APP_DEBUG=$APP_DEBUG
APP_KEY=$APP_KEY

DB_HOST=$DB_HOST
DB_DATABASE=$DB_DATABASE
DB_USERNAME=$DB_USERNAME
DB_PASSWORD=$DB_PASSWORD
EOL
echo -e "\e[32mEnvironment created successfully."

#
# install composer dependencies
#
COMPOSER=$(which composer)
$COMPOSER install --no-dev

#
# reset database
#
MYSQL=$(which mysql)
MYSQL_PARAMS="-u$DB_USERNAME"
if [ ! -z $DB_PASSWORD ]; then
    MYSQL_PARAMS="$MYSQL_PARAMS -p$DB_PASSWORD"
fi
$MYSQL $MYSQL_PARAMS -e "DROP DATABASE IF EXISTS $DB_DATABASE"
$MYSQL $MYSQL_PARAMS -e "CREATE DATABASE $DB_DATABASE"
echo -e "\e[32mDatabase created successfully."

#
# fill database
#
PHP=$(which php)
$PHP ./artisan cache:clear
$PHP ./artisan config:clear
$PHP ./artisan migrate --force
$PHP ./artisan db:seed --force

echo -e "\e[33mDone! Have fun."
echo -e "\e[39m"

