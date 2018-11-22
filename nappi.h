#ifndef nappi_h
#define nappi_h

#include <Arduino.h>

const int BUTTONPRESSED=LOW;
const int BOUNCE=20;

/*Luodaan luokka metodeista painikkeen käsittelyä varten ja
 * muuttujat
 */

class nappi{
  
  public:
    //Konstruktori joka liittää metodit vailtuille tuloille
    nappi(int pin);
    nappi(int pin, int keepTime);
    //Metodi joka kertoo painikkeen painalluksesta
    bool pressed();
    bool released();
    bool kept();
  
  private:
    //Mihin tuloon painike liitetään
    int _pin;
    //Tilatieto vanhasta painikkeen tilasta
    int _prevPState;
    int _prevRState;
    //Aikaleima
    unsigned long _timeStamp;
    unsigned long _keepTime;
};
#endif
    
