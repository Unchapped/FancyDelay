#ifndef _FANCYDELAY_H
#define _FANCYDELAY_H

#include <Arduino.h> 

class FancyDelay{
  unsigned long _period, _next;

  public:
  FancyDelay(unsigned long period) : _period(period) {
    _next = millis() + _period;
  }

  bool ready(){
    if(millis() >= _next){
      _next += _period;
      return true;
    }
    return false;
  }
};

class FancyMicrosDelay{
  unsigned long _period, _next;

  public:
  FancyMicrosDelay(unsigned long period) : _period(period) {
    _next = micros() + _period;
  }

  bool ready(){
    if(micros() >= _next){
      _next += _period;
      return true;
    }
    return false;
  }
};

#endif