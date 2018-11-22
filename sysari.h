#ifndef sysari_h
#define sysari_h

#include <Arduino.h>

const int LEDON = LOW;
const int LEDOFF = HIGH;

class sysari{
  public:
    sysari(int pin);
    void Tila();
  private:
    int _pin;
    int ledState=LEDOFF;
};

#endif



