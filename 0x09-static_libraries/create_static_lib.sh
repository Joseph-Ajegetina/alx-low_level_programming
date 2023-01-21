#!/bin/bash

gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -cr liball.c *.c
