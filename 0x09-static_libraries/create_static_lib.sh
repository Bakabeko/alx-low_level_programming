#!/bin/bash 
gcc -c *.c
ar -rc -Wall -Werror -Wextra -pedantic -c liball.a *.o
