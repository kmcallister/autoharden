#!/bin/sh -xe

autoreconf -fi
./configure "$@"
make clean
make
