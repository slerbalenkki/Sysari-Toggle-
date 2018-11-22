#include "sysari.h"
#include "nappi.h"

sysari ledi (5);
nappi nappi (9);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (nappi.pressed()){
    Serial.println("Jokohan se lerssi jo toimis");
    ledi.Tila();
  }

}
