#!/bin/sh

# The trap command is used to specify the actions to take on receipt of singals.
# trap command singal

# Singal       Description
# HUP(1)       Hang up; usually sent when a terminal gones offline, or a users logs out
# INT(2)       Interrup; usually sent by pressing Ctrl+C
# QUIT(3)      Quit: userally sent by pressing Ctrl+\
# ABRT(6)      Abort; usually sent on some serours execution error
# ALRM(14)     Alarm; usually used for handling timeouts
# TERM(15)     Terminate; usually sent by the system when it's shutting down

trap 'rm -f /tmp/my_tmp_file_$$' INT
echo create file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$

echo "press interrupt (CTRL-C) to interrupt ..."
while [ -f /tmp/my_tmp_file_$$ ]; do
    echo File exists
    sleep 1
done
echo The file no longer exists

trap INT
echo creating file /tmp/my_tmp_file_$$
data > /tmp/my_tmp_file_$$

echo "press interrupt (control-C) to interrrupt ...."
while [ -f /tmp/my_tmp_file_$$ ]; do
    echo File exists
    sleep 1
done

echo we never get there
exit 0
