#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo1;     //xy=76.90472793579102,745.2380332946777
AudioSynthWaveformDc     dc2;            //xy=81.90473937988281,787.8572425842285
AudioMixer4              mixer11;        //xy=142.85715103149414,340.00000762939453
AudioSynthWaveform       waveform2;      //xy=378.57144927978516,95.17860317230225
AudioSynthWaveform       waveform3;      //xy=378.5714569091797,132.67860317230225
AudioSynthWaveform       waveform7;      //xy=378.57144927978516,302.6786050796509
AudioSynthWaveform       waveform1;      //xy=379.8214530944824,57.67860221862793
AudioSynthWaveform       waveform4;      //xy=379.8214530944824,183.92860412597656
AudioSynthWaveform       waveform6;      //xy=379.8214530944824,252.67860507965088
AudioSynthWaveform       waveform10;     //xy=379.8214530944824,415.1786069869995
AudioSynthWaveform       waveform11;     //xy=379.82144927978516,451.4286012649536
AudioSynthWaveform       waveform5;      //xy=381.0714530944824,218.92860507965088
AudioSynthWaveform       waveform9;      //xy=381.0714530944824,368.9286069869995
AudioSynthWaveform       waveform8;      //xy=382.32144927978516,333.9286012649536
AudioSynthWaveform       waveform12;     //xy=382.3214530944824,485.17860889434814
AudioSynthWaveform       waveform15;     //xy=382.3214530944824,606.4286108016968
AudioSynthWaveform       waveform14;     //xy=383.5714530944824,571.4286098480225
AudioSynthWaveform       waveform13;     //xy=384.82144927978516,536.4286098480225
AudioSynthWaveform       waveform16;     //xy=386.0714530944824,661.4286117553711
AudioSynthWaveform       waveform18;     //xy=386.07144927978516,727.6786022186279
AudioSynthWaveform       waveform17;     //xy=387.32144927978516,693.9286117553711
AudioEffectEnvelope      envelope2;      //xy=533.5714530944824,90.17860317230225
AudioEffectEnvelope      envelope1;      //xy=534.8214569091797,57.678603172302246
AudioEffectEnvelope      envelope3;      //xy=534.8214569091797,126.4286036491394
AudioEffectEnvelope      envelope6;      //xy=542.3214492797852,252.67860221862793
AudioEffectEnvelope      envelope7;      //xy=542.3214569091797,300.1786060333252
AudioEffectEnvelope      envelope8;      //xy=542.3214569091797,331.4286060333252
AudioEffectEnvelope      envelope9;      //xy=542.3214569091797,365.1786069869995
AudioEffectEnvelope      envelope5;      //xy=543.5714569091797,218.92860507965088
AudioEffectEnvelope      envelope4;      //xy=544.8214492797852,185.17860221862793
AudioEffectEnvelope      envelope10;     //xy=553.5714569091797,416.4286079406738
AudioEffectEnvelope      envelope11;     //xy=553.5714569091797,450.1786079406738
AudioEffectEnvelope      envelope12;     //xy=554.8214569091797,482.67860889434814
AudioEffectEnvelope      envelope15;     //xy=554.8214569091797,602.6786108016968
AudioEffectEnvelope      envelope16;     //xy=554.8214492797852,656.4286022186279
AudioEffectEnvelope      envelope17;     //xy=554.8214569091797,688.9286117553711
AudioEffectEnvelope      envelope14;     //xy=556.0714569091797,568.9286098480225
AudioEffectEnvelope      envelope18;     //xy=556.0714569091797,721.4286136627197
AudioEffectEnvelope      envelope13;     //xy=557.3214569091797,536.4286098480225
AudioMixer4              mixer9;         //xy=724.8214569091797,677.6786117553711
AudioEffectEnvelope      envelope22;     //xy=726.0714492797852,505.17860221862793
AudioEffectEnvelope      envelope23;     //xy=726.0714569091797,621.4286117553711
AudioEffectEnvelope      envelope24;     //xy=726.0714569091797,728.9286117553711
AudioMixer4              mixer5;         //xy=728.5714569091797,217.6786060333252
AudioMixer4              mixer7;         //xy=728.5714569091797,445.17860984802246
AudioMixer4              mixer8;         //xy=729.8214569091797,565.1786098480225
AudioMixer4              mixer6;         //xy=731.0714569091797,327.6786060333252
AudioMixer4              mixer4;         //xy=732.3214492797852,102.67860221862793
AudioEffectEnvelope      envelope19;     //xy=732.3214492797852,163.92860221862793
AudioEffectEnvelope      envelope20;     //xy=741.0714492797852,275.17860221862793
AudioEffectEnvelope      envelope21;     //xy=746.0714492797852,385.17860221862793
AudioMixer4              mixer10;        //xy=749.0475959777832,799.0476417541504
AudioFilterStateVariable filter1;        //xy=886.3214569091797,141.67860412597656
AudioFilterStateVariable filter3;        //xy=885.8214569091797,357.6786060333252
AudioFilterStateVariable filter2;        //xy=886.8214569091797,261.42860412597656
AudioFilterStateVariable filter6;        //xy=890.0714569091797,664.6786117553711
AudioFilterStateVariable filter5;        //xy=890.8214569091797,558.9286098480225
AudioFilterStateVariable filter4;        //xy=892.5714569091797,453.1786079406738
AudioMixer4              mixer1;         //xy=1070.321460723877,240.1786060333252
AudioMixer4              mixer2;         //xy=1070.071460723877,535.6786098480225
AudioMixer4              mixer3;         //xy=1203.1786575317383,376.32144355773926
AudioEffectMultiply      vca1;      //xy=1329.047679901123,474.5238356590271
AudioEffectBitcrusher    bitcrusher1;    //xy=1394.0476455688477,416.19049644470215
AudioOutputI2S           i2s1;           //xy=1429.04780960083,353.17864418029785
AudioConnection          patchCord1(lfo1, 0, mixer10, 0);
AudioConnection          patchCord2(lfo1, 0, mixer11, 0);
AudioConnection          patchCord3(dc2, 0, mixer10, 1);
AudioConnection          patchCord4(dc2, 0, mixer11, 1);
AudioConnection          patchCord5(mixer11, envelope19);
AudioConnection          patchCord6(mixer11, envelope20);
AudioConnection          patchCord7(mixer11, envelope21);
AudioConnection          patchCord8(mixer11, envelope22);
AudioConnection          patchCord9(mixer11, envelope23);
AudioConnection          patchCord10(mixer11, envelope24);
AudioConnection          patchCord11(waveform2, envelope2);
AudioConnection          patchCord12(waveform3, envelope3);
AudioConnection          patchCord13(waveform7, envelope7);
AudioConnection          patchCord14(waveform1, envelope1);
AudioConnection          patchCord15(waveform4, envelope4);
AudioConnection          patchCord16(waveform6, envelope6);
AudioConnection          patchCord17(waveform10, envelope10);
AudioConnection          patchCord18(waveform11, envelope11);
AudioConnection          patchCord19(waveform5, envelope5);
AudioConnection          patchCord20(waveform9, envelope9);
AudioConnection          patchCord21(waveform8, envelope8);
AudioConnection          patchCord22(waveform12, envelope12);
AudioConnection          patchCord23(waveform15, envelope15);
AudioConnection          patchCord24(waveform14, envelope14);
AudioConnection          patchCord25(waveform13, envelope13);
AudioConnection          patchCord26(waveform16, envelope16);
AudioConnection          patchCord27(waveform18, envelope18);
AudioConnection          patchCord28(waveform17, envelope17);
AudioConnection          patchCord29(envelope2, 0, mixer4, 1);
AudioConnection          patchCord30(envelope1, 0, mixer4, 0);
AudioConnection          patchCord31(envelope3, 0, mixer4, 2);
AudioConnection          patchCord32(envelope6, 0, mixer5, 2);
AudioConnection          patchCord33(envelope7, 0, mixer6, 0);
AudioConnection          patchCord34(envelope8, 0, mixer6, 1);
AudioConnection          patchCord35(envelope9, 0, mixer6, 2);
AudioConnection          patchCord36(envelope5, 0, mixer5, 1);
AudioConnection          patchCord37(envelope4, 0, mixer5, 0);
AudioConnection          patchCord38(envelope10, 0, mixer7, 0);
AudioConnection          patchCord39(envelope11, 0, mixer7, 1);
AudioConnection          patchCord40(envelope12, 0, mixer7, 2);
AudioConnection          patchCord41(envelope15, 0, mixer8, 2);
AudioConnection          patchCord42(envelope16, 0, mixer9, 0);
AudioConnection          patchCord43(envelope17, 0, mixer9, 1);
AudioConnection          patchCord44(envelope14, 0, mixer8, 1);
AudioConnection          patchCord45(envelope18, 0, mixer9, 2);
AudioConnection          patchCord46(envelope13, 0, mixer8, 0);
AudioConnection          patchCord47(mixer9, 0, filter6, 0);
AudioConnection          patchCord48(envelope22, 0, filter4, 1);
AudioConnection          patchCord49(envelope23, 0, filter5, 1);
AudioConnection          patchCord50(envelope24, 0, filter6, 1);
AudioConnection          patchCord51(mixer5, 0, filter2, 0);
AudioConnection          patchCord52(mixer7, 0, filter4, 0);
AudioConnection          patchCord53(mixer8, 0, filter5, 0);
AudioConnection          patchCord54(mixer6, 0, filter3, 0);
AudioConnection          patchCord55(mixer4, 0, filter1, 0);
AudioConnection          patchCord56(envelope19, 0, filter1, 1);
AudioConnection          patchCord57(envelope20, 0, filter2, 1);
AudioConnection          patchCord58(envelope21, 0, filter3, 1);
AudioConnection          patchCord59(mixer10, 0, vca1, 1);
AudioConnection          patchCord60(filter1, 0, mixer1, 0);
AudioConnection          patchCord61(filter3, 0, mixer1, 2);
AudioConnection          patchCord62(filter2, 0, mixer1, 1);
AudioConnection          patchCord63(filter6, 0, mixer2, 2);
AudioConnection          patchCord64(filter5, 0, mixer2, 1);
AudioConnection          patchCord65(filter4, 0, mixer2, 0);
AudioConnection          patchCord66(mixer1, 0, mixer3, 0);
AudioConnection          patchCord67(mixer2, 0, mixer3, 1);
AudioConnection          patchCord68(mixer3, 0, vca1, 0);
AudioConnection          patchCord69(vca1, bitcrusher1);
AudioConnection          patchCord70(bitcrusher1, 0, i2s1, 1);
AudioConnection          patchCord71(bitcrusher1, 0, i2s1, 0);
AudioControlSGTL5000     sgtl5000_1;     //xy=908.0714492797852,72.42860317230225
// GUItool: end automatically generated code


// define how many things there are
const int NUM_FRET_GROUPS = 9;
const int NUM_FRETS = 12;

// define pins
int SELECT_PINS_I[3] = {5,6,7};
int SELECT_PINS_J[3] = {2,3,4};
int DIGITAL_SENSOR_PIN = 39;
int ANALOG_SENSOR_PINS[4] = {34,33,31,32};
int PALM_PIN = 30;
int STRING_PIN = 17;
int FRET_PIN = 16;
int STRING_MUX_PINS[8] = {4,3,2,5,1,6,0,7};
int STRING_LIGHT_PINS[6] = {20,21,35,36,37,38};
//int STRING_MUX_LAYOUT[6] = {};

// lookup tables
int FRET_LOOKUP[NUM_FRET_GROUPS][8] = {
  {1,2,3,4,5,6,7,8},
  {9,10,11,12,1,2,3,4},
  {5,6,7,8,9,10,11,12},
  {1,2,3,4,5,6,7,8},
  {9,10,11,12,1,2,3,4},
  {5,6,7,8,9,10,11,12},
  {1,2,3,4,5,6,7,8},
  {9,10,11,12,1,2,3,4},
  {5,6,7,8,9,10,11,12}
};
int STRING_LOOKUP[NUM_FRET_GROUPS][8] = {
  {0,0,0,0,0,0,0,0},
  {0,0,0,0,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {2,2,2,2,2,2,2,2},
  {2,2,2,2,3,3,3,3},
  {3,3,3,3,3,3,3,3},
  {4,4,4,4,4,4,4,4},
  {4,4,4,4,5,5,5,5},
  {5,5,5,5,5,5,5,5}
};

// define knob/sensor numbers
const int AMP_ENV_ATTACK = 0;
const int AMP_ENV_DECAY = 1;
const int AMP_ENV_SUSTAIN = 2;
const int AMP_ENV_RELEASE = 3;

bool strings[6] = {false,false,false,false,false,false};
float targetFrequencies[6] = {440,440,440,440,440,440};
float currentFrequencies[6] = {440,440,440,440,440,440};
int knobValues[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int stringLights[6] = {0,0,0,0,0,0};

int touchThreshold = 1200;
int fretTouchThreshold = 2000;

int touchTimeLimit = 100000;

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];
AudioFilterStateVariable* filters[6];
AudioEffectEnvelope* filterEnvelopes[6];

void setup() {
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  // initialise the DC source for the filter envelopes
  //dc1.amplitude(1.0);

  // init LED pins
  for(int i=0;i<6;i++) {
    pinMode(STRING_LIGHT_PINS[i], OUTPUT);
  }

  pinMode(SELECT_PINS_I[0], OUTPUT);
  pinMode(SELECT_PINS_I[1], OUTPUT);
  pinMode(SELECT_PINS_I[2], OUTPUT);
  pinMode(SELECT_PINS_J[0], OUTPUT);
  pinMode(SELECT_PINS_J[1], OUTPUT);
  pinMode(SELECT_PINS_J[2], OUTPUT);
   
  oscillators[0] = &waveform1;
  oscillators[1] = &waveform4;
  oscillators[2] = &waveform7;
  oscillators[3] = &waveform10;
  oscillators[4] = &waveform13;
  oscillators[5] = &waveform16;
  envelopes[0] = &envelope1;
  envelopes[1] = &envelope4;
  envelopes[2] = &envelope7;
  envelopes[3] = &envelope10;
  envelopes[4] = &envelope13;
  envelopes[5] = &envelope16;
  filters[0] = &filter1;
  filters[1] = &filter2;
  filters[2] = &filter3;
  filters[3] = &filter4;
  filters[4] = &filter5;
  filters[5] = &filter6;
  filterEnvelopes[0] = &envelope19;
  filterEnvelopes[1] = &envelope20;
  filterEnvelopes[2] = &envelope21;
  filterEnvelopes[3] = &envelope22;
  filterEnvelopes[4] = &envelope23;
  filterEnvelopes[5] = &envelope24;
  for(int i=0;i<6;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),WAVEFORM_SQUARE);
    envelopes[i]->sustain(0.1);
    envelopes[i]->decay(5);
    envelopes[i]->release(50);
    filters[i]->frequency(100);
    filters[i]->resonance(1.5);
    filters[i]->octaveControl(10);
    filterEnvelopes[i]->attack(0);
    filterEnvelopes[i]->sustain(0.3);
    filterEnvelopes[i]->decay(2000);
    filterEnvelopes[i]->release(1000);
  }
  
  lfo1.begin(0.7,5,WAVEFORM_SINE);
  mixer10.gain(0,0);
  dc2.amplitude(0.5);
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);

  // calibration
  int testChannel = 6;
  digitalWrite(SELECT_PINS_I[0], bitRead(testChannel, 0));
  digitalWrite(SELECT_PINS_I[1], bitRead(testChannel, 1));
  digitalWrite(SELECT_PINS_I[2], bitRead(testChannel, 2));
  digitalWrite(SELECT_PINS_J[0], bitRead(testChannel, 0));
  digitalWrite(SELECT_PINS_J[1], bitRead(testChannel, 1));
  digitalWrite(SELECT_PINS_J[2], bitRead(testChannel, 2));
  Serial.println(touchRead(STRING_PIN));
  //Serial.println(touchRead(FRET_PIN));
  
}

bool isTouched;
long timeStart;
long timeTotal;
void loop() {

  int capacitance;
  bool fretTouched;
  int stringPositions[6] = {0,0,0,0,0,0};
  int thisString;
  int thisFret;
  long touchReading;

  timeStart = millis();

  // 9 iterations, 1 for each multiplexer
  for(int i = 0; i < 8; i ++) {
    
    digitalWrite(SELECT_PINS_I[0], bitRead(i%5, 0));
    digitalWrite(SELECT_PINS_I[1], bitRead(i%5, 1));
    digitalWrite(SELECT_PINS_I[2], bitRead(i%5, 2));

    // 8 iterations, 1 for each multiplexer channel
    for(int j = 0; j < 8; j ++) {
      digitalWrite(SELECT_PINS_J[0], bitRead(j, 0));
      digitalWrite(SELECT_PINS_J[1], bitRead(j, 1));
      digitalWrite(SELECT_PINS_J[2], bitRead(j, 2));

      thisString = STRING_LOOKUP[i][j];
      thisFret = FRET_LOOKUP[i][j];

      // only 3 groups hooked up for now
      if(i<3) {
        //capacitance = fakeTouchRead(i*8+j);
        capacitance = touchRead(FRET_PIN);
        capacitance = 0;
        fretTouched = capacitance > fretTouchThreshold;
        if(fretTouched) {
          stringPositions[thisString] = max(stringPositions[thisString], thisFret);
        }
      }

      if(STRING_MUX_PINS[j]<6) {
      
        // will use a more complex pressure-sensitive method later, but for now simple on/off for strings
        touchReading = touchReadTimeLim(STRING_PIN, touchTimeLimit); // using special function found on random teensy internet forum
        isTouched = touchReading > touchThreshold || touchReading < 0;
        if(!strings[STRING_MUX_PINS[j]] && isTouched) {
          // string has just been pressed
          muteString(STRING_MUX_PINS[j]);
        } else if(strings[STRING_MUX_PINS[j]] && !isTouched) {
          // string has been released
          pluckString(STRING_MUX_PINS[j]);
        }
        strings[STRING_MUX_PINS[j]] = isTouched;

      }

      if(j<4) {
        knobValues[j*8+i] = analogRead(ANALOG_SENSOR_PINS[j]);
      }
    }
  }

  // set frequency of oscillators
  float portamento = 0.3;
  float deltaFreq;
  for(int i=0; i<6; i++) {
    targetFrequencies[i] = getFreq(32+stringPositions[i]+i*5+(i>3?-1:0));
    deltaFreq = targetFrequencies[i] - currentFrequencies[i];
    if(true || abs(deltaFreq) < portamento) {
      currentFrequencies[i] = targetFrequencies[i];
    } else if(deltaFreq > 0) {
      currentFrequencies[i] += portamento;
    } else {
      currentFrequencies[i] -= portamento;
    }
    oscillators[i]->frequency(currentFrequencies[i]);

    // fade LEDs
    if(stringLights[i]>0) {
      stringLights[i] -= 10;
      analogWrite(STRING_LIGHT_PINS[i], stringLights[i]);
    } else {
      digitalWrite(STRING_LIGHT_PINS[i], LOW);
    }
  }

  //bitcrusher1.sampleRate(map(knobValues[0],0,1023,10,44100));
  //lfo1.frequency(map(knobValues[0],0,1023,1,1000));

  timeTotal = millis() - timeStart;
  Serial.println(timeTotal);
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}

int fakeTouchRead(int pin) {
  int returnValue;
  if(millis() % 6000 < 3000) {
    returnValue = pin == 2 || pin == 13 ? 10000 : 2000;
  } else {
    returnValue = pin == 14 || pin == 25 ? 10000 : 2000;
  }
  return returnValue;
}

void pluckString(int string) {
  envelopes[string]->noteOn();
  filterEnvelopes[string]->noteOn();
  stringLights[string] = 255;
}

void muteString(int string) {
  envelopes[string]->noteOff();
}

void scheduleEvent() {
  
}

