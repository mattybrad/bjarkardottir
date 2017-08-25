#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class ParamKnob
{
  public:
    ParamKnob();
    void init(float minValue, float maxValue, float startValue);
    void setValue(float realValue);
    void updateValue();
    float getCurrentValue();
    bool isChanged();
  private:
    int _lastUpdateTime;
    bool _changed;
    float _acceleration;
    float _velocity;
    float _minValue;
    float _maxValue;
    float _startValue;
    float _currentValue;
    float _mapFloat(float x, float in_min, float in_max, float out_min, float out_max);
};

#endif
