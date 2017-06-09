#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformDc     dc1;            //xy=69,458
AudioSynthWaveform       waveform1;      //xy=72,122
AudioSynthWaveform       waveform2;      //xy=73,166
AudioSynthWaveform       waveform4;      //xy=73,263
AudioSynthWaveform       waveform3;      //xy=75,216
AudioSynthWaveform       waveform6;      //xy=75,362
AudioSynthWaveform       waveform5;      //xy=76,314
AudioEffectEnvelope      envelope8;      //xy=210,466
AudioEffectEnvelope      envelope1;      //xy=214,122
AudioEffectEnvelope      envelope2;      //xy=214,164
AudioEffectEnvelope      envelope7;      //xy=214,422
AudioEffectEnvelope      envelope3;      //xy=218,216
AudioEffectEnvelope      envelope4;      //xy=218,263
AudioEffectEnvelope      envelope5;      //xy=220,308
AudioEffectEnvelope      envelope6;      //xy=222,354
AudioFilterStateVariable filter6;        //xy=369,352
AudioFilterStateVariable filter5;        //xy=371,305
AudioFilterStateVariable filter2;        //xy=372,165
AudioFilterStateVariable filter1;        //xy=374,119
AudioFilterStateVariable filter4;        //xy=374,258
AudioFilterStateVariable filter3;        //xy=376,210
AudioMixer4              mixer1;         //xy=568,175
AudioMixer4              mixer2;         //xy=569,308
AudioMixer4              mixer3;         //xy=688,249
AudioOutputI2S           i2s1;           //xy=810,248
AudioConnection          patchCord1(dc1, envelope7);
AudioConnection          patchCord2(dc1, envelope8);
AudioConnection          patchCord3(waveform1, envelope1);
AudioConnection          patchCord4(waveform2, envelope2);
AudioConnection          patchCord5(waveform4, envelope4);
AudioConnection          patchCord6(waveform3, envelope3);
AudioConnection          patchCord7(waveform6, envelope6);
AudioConnection          patchCord8(waveform5, envelope5);
AudioConnection          patchCord9(envelope8, 0, filter2, 1);
AudioConnection          patchCord10(envelope1, 0, filter1, 0);
AudioConnection          patchCord11(envelope2, 0, filter2, 0);
AudioConnection          patchCord12(envelope7, 0, filter1, 1);
AudioConnection          patchCord13(envelope3, 0, filter3, 0);
AudioConnection          patchCord14(envelope4, 0, filter4, 0);
AudioConnection          patchCord15(envelope5, 0, filter5, 0);
AudioConnection          patchCord16(envelope6, 0, filter6, 0);
AudioConnection          patchCord17(filter6, 0, mixer2, 2);
AudioConnection          patchCord18(filter5, 0, mixer2, 1);
AudioConnection          patchCord19(filter2, 0, mixer1, 1);
AudioConnection          patchCord20(filter1, 0, mixer1, 0);
AudioConnection          patchCord21(filter4, 0, mixer2, 0);
AudioConnection          patchCord22(filter3, 0, mixer1, 2);
AudioConnection          patchCord23(mixer1, 0, mixer3, 0);
AudioConnection          patchCord24(mixer2, 0, mixer3, 1);
AudioConnection          patchCord25(mixer3, 0, i2s1, 0);
AudioConnection          patchCord26(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=397,36
// GUItool: end automatically generated code


void setup() {
  AudioMemory(20);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.3);

  int waveform = WAVEFORM_SQUARE;
               
  waveform1.begin(0.1,getFreq(20),waveform);
  waveform2.begin(0.1,getFreq(25),waveform);
  waveform3.begin(0.1,getFreq(30),waveform);
  waveform4.begin(0.1,getFreq(35),waveform);
  waveform5.begin(0.1,getFreq(39),waveform);
  waveform6.begin(0.1,getFreq(44),waveform);

  envelope1.release(800);
  envelope7.sustain(0.2);
  envelope7.decay(500);
  envelope7.release(500);
  envelope8.sustain(0.2);
  envelope8.decay(500);

  dc1.amplitude(1.0);

  filter1.resonance(2.0);
  filter1.frequency(200);
  filter1.octaveControl(4);
  filter2.resonance(2.0);
  filter2.frequency(200);
  filter2.octaveControl(4);

  pinMode(20, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(17, OUTPUT);

  Serial.begin(9600);
}

byte touchStatus;
bool thisStatus;
bool thisTouched;
void loop() {
  for(int j=0;j<8;j++) {
    digitalWrite(20, bitRead(j,0));
    digitalWrite(21, bitRead(j,1));
    digitalWrite(17, bitRead(j,2));
    for(int k=0;k<9;k++) {
      touchRead(16);
      for(int i=0;i<3;i++) {
        digitalWrite(21, bitRead(i, 0));
        digitalWrite(20, bitRead(i, 1));
        thisTouched = touchRead(16) > 3000;
        thisStatus = bitRead(touchStatus, i);
        if(i == 0) {
          if(!thisStatus && thisTouched) {
            envelope1.noteOn();
            envelope7.noteOn();
          }
          else if(thisStatus && !thisTouched) {
            envelope1.noteOff();
            envelope7.noteOff();
          }
        }
        if(i == 1) {
          if(!thisStatus && thisTouched) {
            envelope2.noteOn();
            envelope8.noteOn();
          }
          else if(thisStatus && !thisTouched) {
            envelope2.noteOff();
            envelope8.noteOff();
          }
        }
        bitWrite(touchStatus, i, thisTouched);
      }
    }
  }
  //Serial.println(AudioMemoryUsageMax());
}

// unnecessary?
void wait(unsigned int milliseconds)
{
  elapsedMillis msec=0;

  while (msec <= milliseconds) {

  }
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}

