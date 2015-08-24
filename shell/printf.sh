#!/bin/sh

# printf "format string" parameter1 parmater2 ...

# Escape sequence                 |   Description
# \"                                  Backslash character
# \a                                  Alert(ring the bell or beep)
# \b                                  Backspace character
# \c                                  Suppress further output
# \f                                  Form feed character
# \n                                  Newline character
# \r                                  Carriage return
# \t                                  Tab character
# \v                                  Vertical tab character
# \ooo                                The single character with octal value ooo
# \xHH                                The single character with hexadecimal value HH

# D          Output a decimal number
# C          Output a character
# S          Output a string
# %          Output the % character

# printf "%s\n" hello
printf "%s %d\t%s\n" "Hi There" 15 people
