#!/bin/sh


# This shift command moves all the parameter variable down by one, so that
# $2 becomes $1, $3 becomes $2, and so on.

while [ "$1" != "" ]; do
    echo "$1"
    shift
done

exit 0
