#!/bin/bash
gcc -Wall -fPIC -shared -o /tmp/hack.so -nostartfiles -D_WINNING_NUMBERS='"9 8 10 24 75 9"' /dev/null
LD_PRELOAD=/tmp/hack.so

