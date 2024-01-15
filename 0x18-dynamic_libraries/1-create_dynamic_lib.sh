#!/bin/bash
gcc -c -flip *.c
gcc -shared *.o -o liball.so
