#ifndef _FANCYDELAY_H
#define _FANCYDELAY_H

#include <Arduino.h> 

class FancyDelay{
  unsigned long _period, _last;
  unsigned long (*_timebase)();
  
  public:
  FancyDelay(unsigned long period, unsigned long (*timebase)() = millis) : _period(period), _timebase(timebase) {
    _last = _timebase();
  }

  bool ready(){
    if((_timebase() - _last) >= _period){
      _last += _period;
      return true;
    }
    return false;
  }
};

#endif