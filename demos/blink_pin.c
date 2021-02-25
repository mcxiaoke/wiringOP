#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wiringPi.h>
int main (int argc, char *argv[])
{
  if (argc < 2){
    printf("Usage: %s gpio_pin\n",argv[0]);
    exit(1);
  }
  int pn = atoi(argv[1]);
  wiringPiSetup () ;
  pinMode (pn, OUTPUT) ;
  for (;;)
  {
    digitalWrite (pn, HIGH) ; delay (1000) ;
    digitalWrite (pn,  LOW) ; delay (1000) ;
  }
  return 0 ;
}
