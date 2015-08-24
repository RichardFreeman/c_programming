#!/bin/sh


# Its typical use is to replace the current shell with a different program.
exec wall "Thanks for all the fish"


# The second use of exec is to modify the current file descriptors.
exec 3< afile
