#!/bin/sh

echo "Please input your password!"

read password

while [ "$password" != "secret" ] 
do
 echo "Please try again!"
 read password
done

exit 0
