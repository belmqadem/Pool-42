#!/bin/sh

find . -name "*.c" -type f -exec cc -c -Wall -Wextra -Werror {} \;
ar rc libft.a *.o
find . -name "*.o" -type f -delete
