#include <CapacitiveSensor.h>

const int SEND_PIN = 2;
const int RECEIVE_PIN = 3;
const int SELECT_PIN_1 = 4;
const int SELECT_PIN_2 = 5;
const int SELECT_PIN_3 = 6;
const int LED_PIN_1 = 8;
const int LED_PIN_2 = 9;
const int LED_PIN_3 = 10;
long capacitance;
long threshold;
const int SAMPLES = 6;

CapacitiveSensor sensor = CapacitiveSensor(SEND_PIN, RECEIVE_PIN);

void setup()                    
{
    sensor.set_CS_AutocaL_Millis(0xFFFFFFFF); // turn off autocalibrate
    Serial.begin(9600); // for debugging
    pinMode(SELECT_PIN_1, OUTPUT);
    pinMode(SELECT_PIN_2, OUTPUT);
    pinMode(SELECT_PIN_3, OUTPUT);
    pinMode(7, OUTPUT); // dummy pin, temporary
    pinMode(LED_PIN_1, OUTPUT);
    pinMode(LED_PIN_2, OUTPUT);
    pinMode(LED_PIN_3, OUTPUT);

    // hold wire on channel 0 on boot, but no other wires
    // loop a bunch of times to stabilise capacitance reading
    // (not sure why!)

    for(int i=0; i < 100; i++) {
  
      // select channel 0 and read capacitance of touched pin
      digitalWrite(SELECT_PIN_1, LOW);
      digitalWrite(SELECT_PIN_2, LOW);
      digitalWrite(SELECT_PIN_3, LOW);
      long capacitance1 = sensor.capacitiveSensor(SAMPLES);
  
      // select channel 1 and read capacitance of untouched pin
      digitalWrite(SELECT_PIN_1, HIGH);
      digitalWrite(SELECT_PIN_2, LOW);
      digitalWrite(SELECT_PIN_3, LOW);
      long capacitance2 = sensor.capacitiveSensor(SAMPLES);

      // calibrated threshold is average of high and low values
      threshold = (capacitance1 + capacitance2) / 2;
    }
    Serial.println(threshold);
}

void loop()                    
{
    // 9 iterations, 1 for each multiplexer
    for(int j = 0; j < 9; j ++) {

      // 8 iterations, 1 for each multiplexer channel
      for(int i = 0; i < 8; i ++) {
        digitalWrite(SELECT_PIN_1, bitRead(i, 0));
        digitalWrite(SELECT_PIN_2, bitRead(i, 1));
        digitalWrite(SELECT_PIN_3, bitRead(i, 2));
        capacitance = sensor.capacitiveSensor(SAMPLES); // taking this value as low as possible for speed
        if(j==0) digitalWrite(LED_PIN_1 + i, capacitance > threshold); // light LED if over threshold
        else digitalWrite(7, capacitance > threshold); // just to simulate how long it would take
      }
    }
}
