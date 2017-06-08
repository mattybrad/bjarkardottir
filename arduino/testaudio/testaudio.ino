#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=103,126
AudioSynthWaveform       waveform2;      //xy=104,170
AudioSynthWaveform       waveform4;      //xy=104,267
AudioSynthWaveform       waveform3;      //xy=106,220
AudioSynthWaveform       waveform6;      //xy=106,366
AudioSynthWaveform       waveform5;      //xy=107,318
AudioEffectEnvelope      envelope1;      //xy=245,126
AudioEffectEnvelope      envelope2;      //xy=245,168
AudioEffectEnvelope      envelope3;      //xy=249,220
AudioEffectEnvelope      envelope4;      //xy=249,267
AudioEffectEnvelope      envelope5;      //xy=251,312
AudioEffectEnvelope      envelope6;      //xy=253,358
AudioMixer4              mixer1;         //xy=436,175
AudioMixer4              mixer2;         //xy=437,308
AudioMixer4              mixer3;         //xy=616,250
AudioOutputI2S           i2s1;           //xy=782,248
AudioConnection          patchCord1(waveform1, envelope1);
AudioConnection          patchCord2(waveform2, envelope2);
AudioConnection          patchCord3(waveform4, envelope4);
AudioConnection          patchCord4(waveform3, envelope3);
AudioConnection          patchCord5(waveform6, envelope6);
AudioConnection          patchCord6(waveform5, envelope5);
AudioConnection          patchCord7(envelope1, 0, mixer1, 0);
AudioConnection          patchCord8(envelope2, 0, mixer1, 1);
AudioConnection          patchCord9(envelope3, 0, mixer1, 2);
AudioConnection          patchCord10(envelope4, 0, mixer2, 0);
AudioConnection          patchCord11(envelope5, 0, mixer2, 1);
AudioConnection          patchCord12(envelope6, 0, mixer2, 2);
AudioConnection          patchCord13(mixer1, 0, mixer3, 0);
AudioConnection          patchCord14(mixer2, 0, mixer3, 1);
AudioConnection          patchCord15(mixer3, 0, i2s1, 0);
AudioConnection          patchCord16(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=397,36
// GUItool: end automatically generated code


void setup() {
  AudioMemory(10);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.3);

  int waveform = WAVEFORM_SQUARE;
               
  waveform1.begin(0.1,getFreq(20),waveform);
  waveform2.begin(0.1,getFreq(25),waveform);
  waveform3.begin(0.1,getFreq(30),waveform);
  waveform4.begin(0.1,getFreq(35),waveform);
  waveform5.begin(0.1,getFreq(39),waveform);
  waveform6.begin(0.1,getFreq(44),waveform);
}

void loop() {
  envelope1.noteOn();
  delay(500);
  envelope2.noteOn();
  delay(500);
  envelope3.noteOn();
  delay(500);
  envelope4.noteOn();
  delay(500);
  envelope5.noteOn();
  delay(500);
  envelope6.noteOn();
  delay(500);
  envelope1.noteOff();
  envelope2.noteOff();
  envelope3.noteOff();
  envelope4.noteOff();
  envelope5.noteOff();
  envelope6.noteOff();
  delay(1000);
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

