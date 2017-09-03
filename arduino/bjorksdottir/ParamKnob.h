#ifndef Morse_h
#define Morse_h

#include "Arduino.h"

class ParamKnob
{
  public:
    ParamKnob();
    static const int LINEAR_RESPONSE = 0;
    static const int QUADRATIC_RESPONSE = 1;
    static const int CUBIC_RESPONSE = 2;
    static const int WHAMMY_RESPONSE = 3;
    void init(float minValue, float maxValue, float startValue, int responseCurve);
    void setValue(float realValue);
    float getCurrentValue();
    bool isChanged();
    bool isActive;
  private:
    int _lastUpdateTime;
    bool _changed;
    float _acceleration;
    float _velocity;
    float _minValue;
    float _maxValue;
    float _startValue;
    float _currentValue;
    int _responseCurve;
    float _doResponseCalculation(float x);
    float _mapFloat(float x, float in_min, float in_max, float out_min, float out_max);
};

#endif
