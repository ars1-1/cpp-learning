#!/bin/bash
make clean
cmake .
make
exec ./fr*.app
exec ./clean.sh