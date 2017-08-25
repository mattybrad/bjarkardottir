#include "Arduino.h"
#include "ParamKnob.h"

ParamKnob::ParamKnob()
{
  isActive = false;
  _currentValue = _startValue;
  _lastUpdateTime = millis();

  // real knob value is only a target for the output value
  // the output value accelerates towards the real value
  // the acceleration is proportional to the difference between the current and target values
  _acceleration = 0; // units: knob increments per second per second
  _velocity = 0; // units: knob increments per second
}

void ParamKnob::init(float minValue, float maxValue, float startValue)
{
  _minValue = minValue;
  _maxValue = maxValue;
  _startValue = constrain(startValue, minValue, maxValue);
}

void ParamKnob::setValue(float realValue)
{
  float delta = realValue - _currentValue;
  //_currentValue = realValue;
  //_acceleration = 0.1 * delta;
  _changed = abs(delta) > 10;
  _velocity = 0.01 * delta;

  int thisTime = millis();
  int deltaTime = thisTime - _lastUpdateTime;
  if(deltaTime > 0) {
    //_velocity += _acceleration;
    _currentValue += _velocity;
    _lastUpdateTime = thisTime;
  }
}

void ParamKnob::updateValue()
{
  // unused
}

float ParamKnob::getCurrentValue()
{
  return isActive ? _mapFloat(_currentValue,0,1023,_minValue,_maxValue) : _startValue;
}

bool ParamKnob::isChanged()
{
  return _changed;
}

float ParamKnob::_mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

