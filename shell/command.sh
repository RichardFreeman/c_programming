#!/bin/sh

### The colon command is a null command, It's very usefull to simplify
### the logic of conditions, being an alias for true. Since it's built-in,
### ; runs faster than true.

### Maybe you can implement an infinite loop in place of the more common
### while true.

rm -f fred

if [ -f fred ]; then
    :
else
    echo file fred did not exist
fi

exit 0
