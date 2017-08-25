#include "Arduino.h"
#include "ParamKnob.h"

ParamKnob::ParamKnob()
{
  //_startValue = startValue;
  _currentValue = _startValue;
}

void ParamKnob::setValue(int realValue)
{
  _currentValue = realValue;
}

void ParamKnob::updateValue()
{
  // this will be used to help smooth values at some point
}

float ParamKnob::getCurrentValue()
{
  return _mapFloat(_currentValue,0,1023,0,1000);
}

float ParamKnob::_mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

