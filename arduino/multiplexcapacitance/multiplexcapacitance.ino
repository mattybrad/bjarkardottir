#include <CapacitiveSensor.h>

const int SEND_PIN = 2;
const int RECEIVE_PIN = 3;
const int SELECT_PIN_1 = 4;
const int SELECT_PIN_2 = 5;
const int SELECT_PIN_3 = 6;
const int LED_PIN_1 = 8;
const int LED_PIN_2 = 9;
const int LED_PIN_3 = 10;

CapacitiveSensor   sensor = CapacitiveSensor(SEND_PIN, RECEIVE_PIN);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

void setup()                    
{
   sensor.set_CS_AutocaL_Millis(0xFFFFFFFF); // turn off autocalibrate
   Serial.begin(9600); // just in case
   pinMode(SELECT_PIN_1, OUTPUT);
   pinMode(SELECT_PIN_2, OUTPUT);
   pinMode(SELECT_PIN_3, OUTPUT);
   pinMode(7, OUTPUT); // dummy pin, temporary
   pinMode(LED_PIN_1, OUTPUT);
   pinMode(LED_PIN_2, OUTPUT);
   pinMode(LED_PIN_3, OUTPUT);
}

void loop()                    
{
    long capacitance;
    int threshold = map(analogRead(0), 0, 1023, 0, 500); // adjust sensitivity using potentiometer

    // 9 iterations, 1 for each multiplexer
    for(int j = 0; j < 9; j ++) {

      // 8 iterations, 1 for each multiplexer channel
      for(int i = 0; i < 8; i ++) {
        digitalWrite(SELECT_PIN_1, bitRead(i, 0));
        digitalWrite(SELECT_PIN_2, bitRead(i, 1));
        digitalWrite(SELECT_PIN_3, bitRead(i, 2));
        capacitance = sensor.capacitiveSensor(4); // taking this value as low as possible for speed
        if(j==0) digitalWrite(8 + i, capacitance > threshold); // light LED if over threshold
        else digitalWrite(7, capacitance > threshold); // just to simulate how long it would take
      }
    }
}
