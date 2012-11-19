#!/bin/sh

# set -x
set -e

./autogen.sh

if [ -d /opt/mysql/ ]; then
    PATH=$(echo /opt/mysql/server-*/bin/):$PATH
fi
./configure \
    --with-mysql-source=$PWD/vendor/mysql
