#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo2;           //xy=65.71429443359375,568.1785969734192
AudioSynthWaveformDc     dc2;            //xy=115.71428680419922,800.1786003112793
AudioSynthWaveformSineModulated lfo1;           //xy=124.71428680419922,725.4286003112793
AudioMixer4              filterEnvelopeSignals;        //xy=186.71428680419922,324.4285717010498
AudioSynthWaveform       waveform1B;      //xy=422.7142868041992,79.4285717010498
AudioSynthWaveform       waveform1C;      //xy=422.7142868041992,116.4285717010498
AudioSynthWaveform       waveform3A;      //xy=422.7142868041992,286.4285717010498
AudioSynthWaveform       waveform1A;      //xy=423.7142868041992,41.428571701049805
AudioSynthWaveform       waveform2A;      //xy=423.7142868041992,167.4285717010498
AudioSynthWaveform       waveform2C;      //xy=423.7142868041992,236.4285717010498
AudioSynthWaveform       waveform4A;     //xy=423.7142868041992,399.4285717010498
AudioSynthWaveform       waveform4B;     //xy=423.7142868041992,435.4285717010498
AudioSynthWaveform       waveform2B;      //xy=425.7142868041992,202.4285717010498
AudioSynthWaveform       waveform3C;      //xy=425.7142868041992,352.4285717010498
AudioSynthWaveform       waveform3B;      //xy=426.7142868041992,317.4285717010498
AudioSynthWaveform       waveform4C;     //xy=426.7142868041992,469.4285717010498
AudioSynthWaveform       waveform5C;     //xy=426.7142868041992,590.4285717010498
AudioSynthWaveform       waveform5B;     //xy=427.7142868041992,555.4285717010498
AudioSynthWaveform       waveform5A;     //xy=428.7142868041992,520.4285717010498
AudioSynthWaveform       waveform6A;     //xy=430.7142868041992,645.4285717010498
AudioSynthWaveform       waveform6C;     //xy=430.7142868041992,711.4285717010498
AudioSynthWaveform       waveform6B;     //xy=431.7142868041992,677.4285717010498
AudioEffectEnvelope      envelope2;      //xy=577.7142868041992,74.4285717010498
AudioEffectEnvelope      envelope1;      //xy=578.7142868041992,41.428571701049805
AudioEffectEnvelope      envelope3;      //xy=578.7142868041992,110.4285717010498
AudioEffectEnvelope      envelope6;      //xy=586.7142868041992,236.4285717010498
AudioEffectEnvelope      envelope7;      //xy=586.7142868041992,284.4285717010498
AudioEffectEnvelope      envelope8;      //xy=586.7142868041992,315.4285717010498
AudioEffectEnvelope      envelope9;      //xy=586.7142868041992,349.4285717010498
AudioEffectEnvelope      envelope5;      //xy=587.7142868041992,202.4285717010498
AudioEffectEnvelope      envelope4;      //xy=588.7142868041992,169.4285717010498
AudioEffectEnvelope      envelope10;     //xy=597.7142868041992,400.4285717010498
AudioEffectEnvelope      envelope11;     //xy=597.7142868041992,434.4285717010498
AudioEffectEnvelope      envelope12;     //xy=598.7142868041992,466.4285717010498
AudioEffectEnvelope      envelope15;     //xy=598.7142868041992,586.4285717010498
AudioEffectEnvelope      envelope16;     //xy=598.7142868041992,640.4285717010498
AudioEffectEnvelope      envelope17;     //xy=598.7142868041992,672.4285717010498
AudioEffectEnvelope      envelope14;     //xy=600.7142868041992,552.4285717010498
AudioEffectEnvelope      envelope18;     //xy=600.7142868041992,705.4285717010498
AudioEffectEnvelope      envelope13;     //xy=601.7142868041992,520.4285717010498
AudioMixer4              stringMixer6;         //xy=768.7142868041992,661.4285717010498
AudioEffectEnvelope      envelope22;     //xy=770.7142868041992,489.4285717010498
AudioEffectEnvelope      envelope23;     //xy=770.7142868041992,605.4285717010498
AudioMixer4              stringMixer2;         //xy=772.7142868041992,201.4285717010498
AudioEffectEnvelope      envelope24;     //xy=770.7142868041992,712.4285717010498
AudioMixer4              stringMixer4;         //xy=772.7142868041992,429.4285717010498
AudioMixer4              stringMixer5;         //xy=773.7142868041992,549.4285717010498
AudioMixer4              stringMixer3;         //xy=775.7142868041992,311.4285717010498
AudioMixer4              stringMixer1;         //xy=776.7142868041992,86.4285717010498
AudioEffectEnvelope      envelope19;     //xy=776.7142868041992,147.4285717010498
AudioEffectEnvelope      envelope20;     //xy=785.7142868041992,259.4285717010498
AudioEffectEnvelope      envelope21;     //xy=790.7142868041992,369.4285717010498
AudioMixer4              vcaSignalMixer;        //xy=793.7142868041992,783.4285717010498
AudioFilterStateVariable filter3;        //xy=929.7142868041992,341.4285717010498
AudioFilterStateVariable filter1;        //xy=930.7142868041992,125.4285717010498
AudioFilterStateVariable filter2;        //xy=930.7142868041992,245.4285717010498
AudioFilterStateVariable filter5;        //xy=934.7142868041992,542.4285717010498
AudioFilterStateVariable filter6;        //xy=934.7142868041992,648.4285717010498
AudioFilterStateVariable filter4;        //xy=936.7142868041992,437.4285717010498
AudioMixer4              stringGroupMixer1;         //xy=1114.7142868041992,224.4285717010498
AudioMixer4              stringGroupMixer2;         //xy=1114.7142868041992,519.4285717010498
AudioMixer4              stringGroupMixerMaster;         //xy=1247.7142868041992,360.4285717010498
AudioEffectMultiply      vca1;           //xy=1329.28560256958,472.9999828338623
AudioEffectWaveshaper    waveshape1;     //xy=1430.7143783569336,406.6071529388428
AudioMixer4              distortionMixer;        //xy=1562.5000228881836,463.75000762939453
AudioEffectBitcrusher    bitcrusher1;    //xy=1747.6428451538086,398.4642696380615
AudioAnalyzePeak         peak1;          //xy=1914.6072044372559,492.9285659790039
AudioOutputI2S           i2s1;           //xy=1927.6428451538086,313.49997329711914
AudioConnection          patchCord1(lfo2, lfo1);
AudioConnection          patchCord2(lfo2, 0, vcaSignalMixer, 2);
AudioConnection          patchCord3(dc2, 0, vcaSignalMixer, 1);
AudioConnection          patchCord4(dc2, 0, filterEnvelopeSignals, 1);
AudioConnection          patchCord5(lfo1, 0, filterEnvelopeSignals, 0);
AudioConnection          patchCord6(lfo1, 0, vcaSignalMixer, 0);
AudioConnection          patchCord7(filterEnvelopeSignals, envelope19);
AudioConnection          patchCord8(filterEnvelopeSignals, envelope20);
AudioConnection          patchCord9(filterEnvelopeSignals, envelope21);
AudioConnection          patchCord10(filterEnvelopeSignals, envelope22);
AudioConnection          patchCord11(filterEnvelopeSignals, envelope23);
AudioConnection          patchCord12(filterEnvelopeSignals, envelope24);
AudioConnection          patchCord13(waveform1B, envelope2);
AudioConnection          patchCord14(waveform1C, envelope3);
AudioConnection          patchCord15(waveform3A, envelope7);
AudioConnection          patchCord16(waveform1A, envelope1);
AudioConnection          patchCord17(waveform2A, envelope4);
AudioConnection          patchCord18(waveform2C, envelope6);
AudioConnection          patchCord19(waveform4A, envelope10);
AudioConnection          patchCord20(waveform4B, envelope11);
AudioConnection          patchCord21(waveform2B, envelope5);
AudioConnection          patchCord22(waveform3C, envelope9);
AudioConnection          patchCord23(waveform3B, envelope8);
AudioConnection          patchCord24(waveform4C, envelope12);
AudioConnection          patchCord25(waveform5C, envelope15);
AudioConnection          patchCord26(waveform5B, envelope14);
AudioConnection          patchCord27(waveform5A, envelope13);
AudioConnection          patchCord28(waveform6A, envelope16);
AudioConnection          patchCord29(waveform6C, envelope18);
AudioConnection          patchCord30(waveform6B, envelope17);
AudioConnection          patchCord31(envelope2, 0, stringMixer1, 1);
AudioConnection          patchCord32(envelope1, 0, stringMixer1, 0);
AudioConnection          patchCord33(envelope3, 0, stringMixer1, 2);
AudioConnection          patchCord34(envelope6, 0, stringMixer2, 2);
AudioConnection          patchCord35(envelope7, 0, stringMixer3, 0);
AudioConnection          patchCord36(envelope8, 0, stringMixer3, 1);
AudioConnection          patchCord37(envelope9, 0, stringMixer3, 2);
AudioConnection          patchCord38(envelope5, 0, stringMixer2, 1);
AudioConnection          patchCord39(envelope4, 0, stringMixer2, 0);
AudioConnection          patchCord40(envelope10, 0, stringMixer4, 0);
AudioConnection          patchCord41(envelope11, 0, stringMixer4, 1);
AudioConnection          patchCord42(envelope12, 0, stringMixer4, 2);
AudioConnection          patchCord43(envelope15, 0, stringMixer5, 2);
AudioConnection          patchCord44(envelope16, 0, stringMixer6, 0);
AudioConnection          patchCord45(envelope17, 0, stringMixer6, 1);
AudioConnection          patchCord46(envelope14, 0, stringMixer5, 1);
AudioConnection          patchCord47(envelope18, 0, stringMixer6, 2);
AudioConnection          patchCord48(envelope13, 0, stringMixer5, 0);
AudioConnection          patchCord49(stringMixer6, 0, filter6, 0);
AudioConnection          patchCord50(envelope22, 0, filter4, 1);
AudioConnection          patchCord51(envelope23, 0, filter5, 1);
AudioConnection          patchCord52(stringMixer2, 0, filter2, 0);
AudioConnection          patchCord53(envelope24, 0, filter6, 1);
AudioConnection          patchCord54(stringMixer4, 0, filter4, 0);
AudioConnection          patchCord55(stringMixer5, 0, filter5, 0);
AudioConnection          patchCord56(stringMixer3, 0, filter3, 0);
AudioConnection          patchCord57(stringMixer1, 0, filter1, 0);
AudioConnection          patchCord58(envelope19, 0, filter1, 1);
AudioConnection          patchCord59(envelope20, 0, filter2, 1);
AudioConnection          patchCord60(envelope21, 0, filter3, 1);
AudioConnection          patchCord61(vcaSignalMixer, 0, vca1, 1);
AudioConnection          patchCord62(filter3, 0, stringGroupMixer1, 2);
AudioConnection          patchCord63(filter1, 0, stringGroupMixer1, 0);
AudioConnection          patchCord64(filter2, 0, stringGroupMixer1, 1);
AudioConnection          patchCord65(filter5, 0, stringGroupMixer2, 1);
AudioConnection          patchCord66(filter6, 0, stringGroupMixer2, 2);
AudioConnection          patchCord67(filter4, 0, stringGroupMixer2, 0);
AudioConnection          patchCord68(stringGroupMixer1, 0, stringGroupMixerMaster, 0);
AudioConnection          patchCord69(stringGroupMixer2, 0, stringGroupMixerMaster, 1);
AudioConnection          patchCord70(stringGroupMixerMaster, 0, vca1, 0);
AudioConnection          patchCord71(vca1, waveshape1);
AudioConnection          patchCord72(vca1, 0, distortionMixer, 1);
AudioConnection          patchCord73(waveshape1, 0, distortionMixer, 0);
AudioConnection          patchCord74(distortionMixer, bitcrusher1);
AudioConnection          patchCord75(bitcrusher1, 0, i2s1, 1);
AudioConnection          patchCord76(bitcrusher1, 0, i2s1, 0);
AudioConnection          patchCord77(bitcrusher1, peak1);
AudioControlSGTL5000     sgtl5000_1;     //xy=952.7142868041992,56.428571701049805
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
int KILL_SWITCH_PIN = 24;
int KILL_SWITCH_LIGHT_PIN = 10;
int STRING_MUX_PINS[8] = {4,3,2,5,1,6,0,7};
int STRING_LIGHT_PINS[6] = {20,21,38,37,36,35};

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

int nextRelease[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextNote[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

float maxPeak = 0.0;

// adjustable values
float ampAttack = 0;
float ampDecay = 50;
float ampSustain = 0.3;
float ampReleaseLong = 15000; // for when a string is plucked
float ampReleaseShort = 50; // for when a string is muted
float filterAttack = 0;
float filterDecay = 100;
float filterSustain = 0.5;
float filterRelease = 2000;
float lfo1Amount = 1;
float lfo2Amount = 1;
float distortionLevel = 0;
float filterCutoff = 200;
float filterResonance = 1.5;
float octaveDelay = 40;
float octaveFade = 0.6; // 0 is 6-string mode, 0.5 is 12-string, 1 is 18-string
bool killSwitch = false;

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];
AudioFilterStateVariable* filters[6];
AudioEffectEnvelope* filterEnvelopes[6];
AudioMixer4* stringMixers[6];

float WAVESHAPE_EXAMPLE[17] = {
  -0.3,
  -0.1,
  -0.4,
  -0.1,
  -0.5,
  -0.9,
  -0.6,
  -0.1,
  0.3,
  0.9,
  0.0,
  0.5,
  0.6,
  0.1,
  0.2,
  0.5,
  0.2
};

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
  pinMode(KILL_SWITCH_PIN, INPUT);
  pinMode(KILL_SWITCH_LIGHT_PIN, OUTPUT);
   
  oscillators[0] = &waveform1A;
  oscillators[1] = &waveform2A;
  oscillators[2] = &waveform3A;
  oscillators[3] = &waveform4A;
  oscillators[4] = &waveform5A;
  oscillators[5] = &waveform6A;
  oscillators[6] = &waveform1B;
  oscillators[7] = &waveform2B;
  oscillators[8] = &waveform3B;
  oscillators[9] = &waveform4B;
  oscillators[10] = &waveform5B;
  oscillators[11] = &waveform6B;
  oscillators[12] = &waveform1C;
  oscillators[13] = &waveform2C;
  oscillators[14] = &waveform3C;
  oscillators[15] = &waveform4C;
  oscillators[16] = &waveform5C;
  oscillators[17] = &waveform6C;
  envelopes[0] = &envelope1;
  envelopes[1] = &envelope4;
  envelopes[2] = &envelope7;
  envelopes[3] = &envelope10;
  envelopes[4] = &envelope13;
  envelopes[5] = &envelope16;
  envelopes[6] = &envelope2;
  envelopes[7] = &envelope5;
  envelopes[8] = &envelope8;
  envelopes[9] = &envelope11;
  envelopes[10] = &envelope14;
  envelopes[11] = &envelope17;
  envelopes[12] = &envelope3;
  envelopes[13] = &envelope6;
  envelopes[14] = &envelope9;
  envelopes[15] = &envelope12;
  envelopes[16] = &envelope15;
  envelopes[17] = &envelope18;
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
  stringMixers[0] = &stringMixer1;
  stringMixers[1] = &stringMixer2;
  stringMixers[2] = &stringMixer3;
  stringMixers[3] = &stringMixer4;
  stringMixers[4] = &stringMixer5;
  stringMixers[5] = &stringMixer6;
  for(int i=0;i<18;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),WAVEFORM_SQUARE);
    envelopes[i]->sustain(ampAttack);
    envelopes[i]->sustain(ampSustain);
    envelopes[i]->decay(ampDecay);
    envelopes[i]->release(ampReleaseLong);
    if(i<6) {
      filters[i]->frequency(filterCutoff);
      filters[i]->resonance(filterResonance);
      filters[i]->octaveControl(10);
      filterEnvelopes[i]->attack(filterAttack);
      filterEnvelopes[i]->decay(filterDecay);
      filterEnvelopes[i]->sustain(filterSustain);
      filterEnvelopes[i]->release(filterRelease);
    }
  }
  
  //lfo2.begin(0,2.6,WAVEFORM_SQUARE);
  lfo1.amplitude(1);
  lfo1.frequency(440);
  filterEnvelopeSignals.gain(0,0);
  vcaSignalMixer.gain(0,0);
  vcaSignalMixer.gain(1,1);
  dc2.amplitude(1);
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);
  waveshape1.shape(WAVESHAPE_EXAMPLE, 17);
  distortionMixer.gain(0,0.5*distortionLevel);
  distortionMixer.gain(1,0.5*(1-distortionLevel));

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
int thisString;
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

      thisString = STRING_MUX_PINS[j];
      if(thisString<6) {
      
        // will use a more complex pressure-sensitive method later, but for now simple on/off for strings
        touchReading = touchReadTimeLim(STRING_PIN, touchTimeLimit); // using special function found on random teensy internet forum
        isTouched = touchReading > touchThreshold || touchReading < 0;
        if(!strings[thisString] && isTouched) {
          // string has just been pressed
          muteString(thisString);
        } else if(strings[thisString] && !isTouched) {
          // string has been released
          pluckString(thisString);
        } else if(nextRelease[thisString] != -1 && millis() >= nextRelease[thisString]) {
          envelopes[thisString]->noteOff();
          envelopes[thisString+6]->noteOff();
          envelopes[thisString+12]->noteOff();
          nextRelease[thisString] = - 1;
          nextRelease[thisString+6] = -1;
          nextRelease[thisString+12] = -1;
        }
        strings[thisString] = isTouched;
        if(nextNote[thisString+6] != -1 && millis() >= nextNote[thisString+6]) {
          envelopes[thisString+6]->noteOn();
          nextNote[thisString+6] = -1;
        }
        if(nextNote[thisString+12] != -1 && millis() >= nextNote[thisString+12]) {
          envelopes[thisString+12]->noteOn();
          nextNote[thisString+12] = -1;
        }
        killSwitch = digitalRead(KILL_SWITCH_PIN);
        //stringGroupMixerMaster.gain(0,killSwitch?0:1);
        //stringGroupMixerMaster.gain(1,killSwitch?0:1);
      }

      if(j<4) {
        knobValues[j*8+i] = analogRead(ANALOG_SENSOR_PINS[j]);
      }
    }

    adjustOctaveVolumes();
  }

  // set frequency of oscillators
  float portamento = 0.3;
  float deltaFreq;
  for(int i=0; i<6; i++) {
    targetFrequencies[i] = getFreq(20+stringPositions[i]+i*5+(i>3?-1:0));
    deltaFreq = targetFrequencies[i] - currentFrequencies[i];
    if(true || abs(deltaFreq) < portamento) {
      currentFrequencies[i] = targetFrequencies[i];
    } else if(deltaFreq > 0) {
      currentFrequencies[i] += portamento;
    } else {
      currentFrequencies[i] -= portamento;
    }
    oscillators[i]->frequency(currentFrequencies[i]);
    oscillators[i+6]->frequency(2*currentFrequencies[i]);
    oscillators[i+12]->frequency(4*currentFrequencies[i]);

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
  //Serial.println(timeTotal);
  float thisPeak;
  if(peak1.available()) {
    thisPeak = peak1.read();
    analogWrite(KILL_SWITCH_LIGHT_PIN, 128 * thisPeak);
    if(thisPeak > maxPeak) maxPeak = thisPeak;
  }
  Serial.println(maxPeak);
  Serial.println(thisPeak);
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
  envelopes[string]->release(ampReleaseLong);
  envelopes[string+6]->release(ampReleaseLong);
  envelopes[string+12]->release(ampReleaseLong);
  nextRelease[string] = millis() + 1000; // temp
  nextNote[string+6] = millis() + octaveDelay;
  nextNote[string+12] = millis() + 2 * octaveDelay;
}

void muteString(int string) {
  envelopes[string]->release(ampReleaseShort);
  envelopes[string]->noteOff();
  envelopes[string+6]->release(ampReleaseShort);
  envelopes[string+6]->noteOff();
  envelopes[string+12]->release(ampReleaseShort);
  envelopes[string+12]->noteOff();
}

void adjustOctaveVolumes() {
  for(int i=0;i<6;i++) {
    stringMixers[i]->gain(1,min(1,octaveFade*2));
    stringMixers[i]->gain(2,max(0,octaveFade*2-1));
  }
}

