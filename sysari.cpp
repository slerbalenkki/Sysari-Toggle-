#include <Arduino.h>
#include "sysari.h"

sysari::sysari(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
  digitalWrite(pin, ledState);
}

void sysari::Tila(){
  if(ledState == LEDOFF){
    ledState = LEDON;
  }else{
    ledState = LEDOFF;
  }
  digitalWrite(_pin, ledState);
}

