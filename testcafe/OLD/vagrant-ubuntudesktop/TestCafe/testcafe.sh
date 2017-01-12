#!/bin/sh

printf "\n"

testcafeRun=`readlink -f $(which testcafe)`
cd "$(dirname "$testcafeRun")"

chmod +x ./node

if [ $# -eq 0 ]
    then
        sudo ./node --max-old-space-size=1900 -e "new (require('./index').TestCafe)(null, true);"
    else
        sudo ./node --max-old-space-size=1900 ./lib/cli/index.js "$@"
fi

exit 0
