#ifndef _FANCYDELAY_H
#define _FANCYDELAY_H

#include <Arduino.h> 

class FancyDelay{
  unsigned long _period, _last;

  public:
  FancyDelay(unsigned long period) : _period(period) {
    _last = millis();
  }

  bool ready(){
    if((millis() - _last) >= _period){
      _last += _period;
      return true;
    }
    return false;
  }
};

class FancyMicrosDelay{
  unsigned long _period, _last;

  public:
  FancyMicrosDelay(unsigned long period) : _period(period) {
    _last = micros();
  }

  bool ready(){
    if((micros() - _last) >= _period){
      _last += _period;
      return true;
    }
    return false;
  }
};

#endif