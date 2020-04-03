#!/bin/bash

#This script assumes that one is at the root catalog of the repo structure.

set -e

git submodule init
git submodule foreach "git clean -xfd; git reset --hard"

mkdir build || rm -r build/*
cd build

cmake ..
make
tests/ExampleTests

cd ..