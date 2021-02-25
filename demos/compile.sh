#!/bin/sh
# gcc -g -O0 -I/usr/local/include -Wall -Winline -L/usr/local/lib -o blink_pin blink_pin.c -lwiringPi -lwiringPiDev -lpthread -lm -lcrypt -lrt 
gcc -o blink_pin blink_pin.c -lwiringPi -lwiringPiDev -lpthread -lm -lcrypt -lrt
