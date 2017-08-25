#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class ParamKnob
{
  public:
    ParamKnob();
    void setValue(int realValue);
    void updateValue();
    float getCurrentValue();
  private:
    float _startValue;
    float _currentValue;
    float _mapFloat(float x, float in_min, float in_max, float out_min, float out_max);
};

#endif
