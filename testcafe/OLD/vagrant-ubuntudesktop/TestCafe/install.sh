#!/bin/sh

chmod +x ./testcafe.sh

test -d /usr/local/bin || sudo mkdir -p /usr/local/bin

sudo ln -s -f "$(pwd)/testcafe.sh" /usr/local/bin/testcafe
testcafe

exit 0
