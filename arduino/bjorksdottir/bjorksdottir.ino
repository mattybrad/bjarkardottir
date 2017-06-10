#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc1;            //xy=77.14285659790039,369.99999809265137
AudioSynthWaveform       waveform2;      //xy=202.85714721679688,72.32144260406494
AudioSynthWaveform       waveform3;      //xy=202.8571548461914,109.82144260406494
AudioSynthWaveform       waveform7;      //xy=202.85714721679688,279.8214445114136
AudioSynthWaveform       waveform1;      //xy=204.10715103149414,34.821441650390625
AudioSynthWaveform       waveform4;      //xy=204.10715103149414,161.07144355773926
AudioSynthWaveform       waveform6;      //xy=204.10715103149414,229.82144451141357
AudioSynthWaveform       waveform10;     //xy=204.10715103149414,392.3214464187622
AudioSynthWaveform       waveform11;     //xy=204.10714721679688,428.5714406967163
AudioSynthWaveform       waveform5;      //xy=205.35715103149414,196.07144451141357
AudioSynthWaveform       waveform9;      //xy=205.35715103149414,346.0714464187622
AudioSynthWaveform       waveform8;      //xy=206.60714721679688,311.0714406967163
AudioSynthWaveform       waveform12;     //xy=206.60715103149414,462.32144832611084
AudioSynthWaveform       waveform15;     //xy=206.60715103149414,583.5714502334595
AudioSynthWaveform       waveform14;     //xy=207.85715103149414,548.5714492797852
AudioSynthWaveform       waveform13;     //xy=209.10714721679688,513.5714492797852
AudioSynthWaveform       waveform16;     //xy=210.35715103149414,638.5714511871338
AudioSynthWaveform       waveform18;     //xy=210.35714721679688,704.8214416503906
AudioSynthWaveform       waveform17;     //xy=211.60714721679688,671.0714511871338
AudioEffectEnvelope      envelope2;      //xy=357.85715103149414,67.32144260406494
AudioEffectEnvelope      envelope1;      //xy=359.1071548461914,34.82144260406494
AudioEffectEnvelope      envelope3;      //xy=359.1071548461914,103.5714430809021
AudioEffectEnvelope      envelope6;      //xy=366.6071472167969,229.82144165039062
AudioEffectEnvelope      envelope7;      //xy=366.6071548461914,277.3214454650879
AudioEffectEnvelope      envelope8;      //xy=366.6071548461914,308.5714454650879
AudioEffectEnvelope      envelope9;      //xy=366.6071548461914,342.3214464187622
AudioEffectEnvelope      envelope5;      //xy=367.8571548461914,196.07144451141357
AudioEffectEnvelope      envelope4;      //xy=369.1071472167969,162.32144165039062
AudioEffectEnvelope      envelope10;     //xy=377.8571548461914,393.5714473724365
AudioEffectEnvelope      envelope11;     //xy=377.8571548461914,427.3214473724365
AudioEffectEnvelope      envelope12;     //xy=379.1071548461914,459.82144832611084
AudioEffectEnvelope      envelope15;     //xy=379.1071548461914,579.8214502334595
AudioEffectEnvelope      envelope16;     //xy=379.1071472167969,633.5714416503906
AudioEffectEnvelope      envelope17;     //xy=379.1071548461914,666.0714511871338
AudioEffectEnvelope      envelope14;     //xy=380.3571548461914,546.0714492797852
AudioEffectEnvelope      envelope18;     //xy=380.3571548461914,698.5714530944824
AudioEffectEnvelope      envelope13;     //xy=381.6071548461914,513.5714492797852
AudioMixer4              mixer9;         //xy=549.1071548461914,654.8214511871338
AudioEffectEnvelope      envelope22;     //xy=550.3571472167969,482.3214416503906
AudioEffectEnvelope      envelope23;     //xy=550.3571548461914,598.5714511871338
AudioEffectEnvelope      envelope24;     //xy=550.3571548461914,706.0714511871338
AudioMixer4              mixer5;         //xy=552.8571548461914,194.8214454650879
AudioMixer4              mixer7;         //xy=552.8571548461914,422.32144927978516
AudioMixer4              mixer8;         //xy=554.1071548461914,542.3214492797852
AudioMixer4              mixer6;         //xy=555.3571548461914,304.8214454650879
AudioMixer4              mixer4;         //xy=556.6071472167969,79.82144165039062
AudioEffectEnvelope      envelope19;     //xy=556.6071472167969,141.07144165039062
AudioEffectEnvelope      envelope20;     //xy=565.3571472167969,252.32144165039062
AudioEffectEnvelope      envelope21;     //xy=570.3571472167969,362.3214416503906
AudioFilterStateVariable filter1;        //xy=710.6071548461914,118.82144355773926
AudioFilterStateVariable filter3;        //xy=710.1071548461914,334.8214454650879
AudioFilterStateVariable filter2;        //xy=711.1071548461914,238.57144355773926
AudioFilterStateVariable filter6;        //xy=714.3571548461914,641.8214511871338
AudioFilterStateVariable filter5;        //xy=715.1071548461914,536.0714492797852
AudioFilterStateVariable filter4;        //xy=716.8571548461914,430.3214473724365
AudioMixer4              mixer1;         //xy=894.6071586608887,217.3214454650879
AudioMixer4              mixer2;         //xy=894.3571586608887,512.8214492797852
AudioMixer4              mixer3;         //xy=1014.6071586608887,356.3214454650879
AudioOutputI2S           i2s1;           //xy=1152.857162475586,355.3214454650879
AudioConnection          patchCord1(dc1, envelope19);
AudioConnection          patchCord2(dc1, envelope20);
AudioConnection          patchCord3(dc1, envelope21);
AudioConnection          patchCord4(dc1, envelope22);
AudioConnection          patchCord5(dc1, envelope23);
AudioConnection          patchCord6(dc1, envelope24);
AudioConnection          patchCord7(waveform2, envelope2);
AudioConnection          patchCord8(waveform3, envelope3);
AudioConnection          patchCord9(waveform7, envelope7);
AudioConnection          patchCord10(waveform1, envelope1);
AudioConnection          patchCord11(waveform4, envelope4);
AudioConnection          patchCord12(waveform6, envelope6);
AudioConnection          patchCord13(waveform10, envelope10);
AudioConnection          patchCord14(waveform11, envelope11);
AudioConnection          patchCord15(waveform5, envelope5);
AudioConnection          patchCord16(waveform9, envelope9);
AudioConnection          patchCord17(waveform8, envelope8);
AudioConnection          patchCord18(waveform12, envelope12);
AudioConnection          patchCord19(waveform15, envelope15);
AudioConnection          patchCord20(waveform14, envelope14);
AudioConnection          patchCord21(waveform13, envelope13);
AudioConnection          patchCord22(waveform16, envelope16);
AudioConnection          patchCord23(waveform18, envelope18);
AudioConnection          patchCord24(waveform17, envelope17);
AudioConnection          patchCord25(envelope2, 0, mixer4, 1);
AudioConnection          patchCord26(envelope1, 0, mixer4, 0);
AudioConnection          patchCord27(envelope3, 0, mixer4, 2);
AudioConnection          patchCord28(envelope6, 0, mixer5, 2);
AudioConnection          patchCord29(envelope7, 0, mixer6, 0);
AudioConnection          patchCord30(envelope8, 0, mixer6, 1);
AudioConnection          patchCord31(envelope9, 0, mixer6, 2);
AudioConnection          patchCord32(envelope5, 0, mixer5, 1);
AudioConnection          patchCord33(envelope4, 0, mixer5, 0);
AudioConnection          patchCord34(envelope10, 0, mixer7, 0);
AudioConnection          patchCord35(envelope11, 0, mixer7, 1);
AudioConnection          patchCord36(envelope12, 0, mixer7, 2);
AudioConnection          patchCord37(envelope15, 0, mixer8, 2);
AudioConnection          patchCord38(envelope16, 0, mixer9, 0);
AudioConnection          patchCord39(envelope17, 0, mixer9, 1);
AudioConnection          patchCord40(envelope14, 0, mixer8, 1);
AudioConnection          patchCord41(envelope18, 0, mixer9, 2);
AudioConnection          patchCord42(envelope13, 0, mixer8, 0);
AudioConnection          patchCord43(mixer9, 0, filter6, 0);
AudioConnection          patchCord44(envelope22, 0, filter4, 1);
AudioConnection          patchCord45(envelope23, 0, filter5, 1);
AudioConnection          patchCord46(envelope24, 0, filter6, 1);
AudioConnection          patchCord47(mixer5, 0, filter2, 0);
AudioConnection          patchCord48(mixer7, 0, filter4, 0);
AudioConnection          patchCord49(mixer8, 0, filter5, 0);
AudioConnection          patchCord50(mixer6, 0, filter3, 0);
AudioConnection          patchCord51(mixer4, 0, filter1, 0);
AudioConnection          patchCord52(envelope19, 0, filter1, 1);
AudioConnection          patchCord53(envelope20, 0, filter2, 1);
AudioConnection          patchCord54(envelope21, 0, filter3, 1);
AudioConnection          patchCord55(filter1, 0, mixer1, 0);
AudioConnection          patchCord56(filter3, 0, mixer1, 2);
AudioConnection          patchCord57(filter2, 0, mixer1, 1);
AudioConnection          patchCord58(filter6, 0, mixer2, 2);
AudioConnection          patchCord59(filter5, 0, mixer2, 1);
AudioConnection          patchCord60(filter4, 0, mixer2, 0);
AudioConnection          patchCord61(mixer1, 0, mixer3, 0);
AudioConnection          patchCord62(mixer2, 0, mixer3, 1);
AudioConnection          patchCord63(mixer3, 0, i2s1, 0);
AudioConnection          patchCord64(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=732.3571472167969,49.57144260406494
// GUItool: end automatically generated code

// define how many things there are
const int NUM_FRET_GROUPS = 9;
const int NUM_FRETS = 12;

// define pins
int FRET_GROUP_SELECT_PINS[3] = {2,3,4};
int FRET_CHANNEL_SELECT_PINS[3] = {5,6,7};
int TOUCH_PINS[2] = {16,17};

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

bool strings[6];

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];

void setup() {
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  // initialise the DC source for the filter envelopes
  dc1.amplitude(1.0);

  pinMode(FRET_GROUP_SELECT_PINS[0], OUTPUT);
  pinMode(FRET_GROUP_SELECT_PINS[1], OUTPUT);
  pinMode(FRET_GROUP_SELECT_PINS[2], OUTPUT);
   
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
  for(int i=0;i<6;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),WAVEFORM_SQUARE);
    envelopes[i]->sustain(0);
    envelopes[i]->decay(5000);
    envelopes[i]->release(0.2);
  }
  

  
}

void loop() {

  int capacitance;
  bool fretTouched;
  int stringPositions[6] = {0,0,0,0,0,0};
  int thisString;
  int thisFret;

  // 9 iterations, 1 for each multiplexer
  for(int j = 0; j < 9; j ++) {
    
    digitalWrite(FRET_GROUP_SELECT_PINS[0], bitRead(j%5, 0));
    digitalWrite(FRET_GROUP_SELECT_PINS[1], bitRead(j%5, 1));
    digitalWrite(FRET_GROUP_SELECT_PINS[2], bitRead(j%5, 2));

    // 8 iterations, 1 for each multiplexer channel
    for(int i = 0; i < 8; i ++) {
      digitalWrite(FRET_CHANNEL_SELECT_PINS[0], bitRead(i, 0));
      digitalWrite(FRET_CHANNEL_SELECT_PINS[1], bitRead(i, 1));
      digitalWrite(FRET_CHANNEL_SELECT_PINS[2], bitRead(i, 2));

      thisString = STRING_LOOKUP[j][i];
      thisFret = FRET_LOOKUP[j][i];
      
      capacitance = fakeTouchRead(j*8+i);
      fretTouched = capacitance > 3000;
      if(fretTouched) {
        stringPositions[thisString] = max(stringPositions[thisString], thisFret);
      }
      
    }
  }

  // set frequency of oscillators
  for(int i=0; i<6; i++) {
    oscillators[i]->frequency(getFreq(44+stringPositions[i]+i*5));
  }

  // this part will be inside the big loop for speed, for now it's here for simplicity
  // check for string plucks
  bool isTouched;
  for(int i = 0; i < 3; i ++) {
    digitalWrite(FRET_GROUP_SELECT_PINS[0], bitRead(i, 0));
    digitalWrite(FRET_GROUP_SELECT_PINS[1], bitRead(i, 1));
    digitalWrite(FRET_GROUP_SELECT_PINS[2], bitRead(i, 2));
    
    // will use a more complex pressure-sensitive method later, but for now simple on/off for strings
    isTouched = touchRead(TOUCH_PINS[1]) > 3000;
    if(!strings[i] && isTouched) {
      // string has just been pressed
      Serial.println("PRESSED:");
      Serial.println(i);
      muteString(i);
    } else if(strings[i] && !isTouched) {
      // string has been released
      Serial.println("RELEASED:");
      Serial.println(i);
      pluckString(i);
    }
    strings[i] = isTouched;
  }

  for(int i = 0; i < 6; i ++) {
    //Serial.print(stringPositions[i]);
    //Serial.print(" ");
  }
  //Serial.print("\n");

  //delay(500);
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}

int fakeTouchRead(int pin) {
  return pin == 2 || pin == 13 ? 4000 : 2000;
}

void pluckString(int string) {
  envelopes[string]->noteOn();
}

void muteString(int string) {
  envelopes[string]->noteOff();
}

