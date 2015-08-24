#!/bin/sh

# Character         Meaning
# ^                 Anchor to the begining of a line
# $                 Anchor to the end of a lien
# .                 Any single character
# []                The sequare braces contain a range of characters any one of
#                   which may be matched, such as a range of characters like a-e
#                   or inverted range by preceding the range with ^ symbol


# ?                 Math is optaionl but may be matched at most once
# *                 Must be matched zero or more times
# +                 Must be matched one or more times
# {n}               Must be mathced n times
# {n, }             Must be matched n or more times
# {n, m}            Must be matched between n or m times, inclusive
