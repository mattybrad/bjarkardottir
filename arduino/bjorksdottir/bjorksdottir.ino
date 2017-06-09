#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform2;      //xy=70,63.750000953674316
AudioSynthWaveform       waveform3;      //xy=70.00000762939453,101.25000095367432
AudioSynthWaveform       waveform7;      //xy=70,271.25000286102295
AudioSynthWaveform       waveform1;      //xy=71.25000381469727,26.25
AudioSynthWaveform       waveform4;      //xy=71.25000381469727,152.50000190734863
AudioSynthWaveform       waveform6;      //xy=71.25000381469727,221.25000286102295
AudioSynthWaveform       waveform10;     //xy=71.25000381469727,383.7500047683716
AudioSynthWaveform       waveform11;     //xy=71.25,419.9999990463257
AudioSynthWaveform       waveform5;      //xy=72.50000381469727,187.50000286102295
AudioSynthWaveform       waveform9;      //xy=72.50000381469727,337.5000047683716
AudioSynthWaveform       waveform8;      //xy=73.75,302.4999990463257
AudioSynthWaveform       waveform12;     //xy=73.75000381469727,453.7500066757202
AudioSynthWaveform       waveform15;     //xy=73.75000381469727,575.0000085830688
AudioSynthWaveform       waveform14;     //xy=75.00000381469727,540.0000076293945
AudioSynthWaveform       waveform13;     //xy=76.25,505.00000762939453
AudioSynthWaveform       waveform16;     //xy=77.50000381469727,630.0000095367432
AudioSynthWaveform       waveform18;     //xy=77.5,696.25
AudioSynthWaveform       waveform17;     //xy=78.75,662.5000095367432
AudioEffectEnvelope      envelope2;      //xy=225.00000381469727,58.750000953674316
AudioEffectEnvelope      envelope1;      //xy=226.25000762939453,26.250000953674316
AudioEffectEnvelope      envelope3;      //xy=226.25000762939453,95.00000143051147
AudioEffectEnvelope      envelope6;      //xy=233.75,221.25
AudioEffectEnvelope      envelope7;      //xy=233.75000762939453,268.75000381469727
AudioEffectEnvelope      envelope8;      //xy=233.75000762939453,300.00000381469727
AudioEffectEnvelope      envelope9;      //xy=233.75000762939453,333.7500047683716
AudioEffectEnvelope      envelope5;      //xy=235.00000762939453,187.50000286102295
AudioEffectEnvelope      envelope4;      //xy=236.25,153.75
AudioEffectEnvelope      envelope10;     //xy=245.00000762939453,385.0000057220459
AudioEffectEnvelope      envelope11;     //xy=245.00000762939453,418.7500057220459
AudioEffectEnvelope      envelope12;     //xy=246.25000762939453,451.2500066757202
AudioEffectEnvelope      envelope15;     //xy=246.25000762939453,571.2500085830688
AudioEffectEnvelope      envelope16;     //xy=246.25,625
AudioEffectEnvelope      envelope17;     //xy=246.25000762939453,657.5000095367432
AudioEffectEnvelope      envelope14;     //xy=247.50000762939453,537.5000076293945
AudioEffectEnvelope      envelope18;     //xy=247.50000762939453,690.0000114440918
AudioEffectEnvelope      envelope13;     //xy=248.75000762939453,505.00000762939453
AudioMixer4              mixer9;         //xy=416.25000762939453,646.2500095367432
AudioMixer4              mixer5;         //xy=420.00000762939453,186.25000381469727
AudioMixer4              mixer7;         //xy=420.00000762939453,413.75000762939453
AudioMixer4              mixer8;         //xy=421.25000762939453,533.7500076293945
AudioMixer4              mixer6;         //xy=422.50000762939453,296.25000381469727
AudioMixer4              mixer4;         //xy=423.75,71.25
AudioFilterStateVariable filter1;        //xy=577.7500076293945,110.25000190734863
AudioFilterStateVariable filter3;        //xy=577.2500076293945,326.25000381469727
AudioFilterStateVariable filter2;        //xy=578.2500076293945,230.00000190734863
AudioFilterStateVariable filter6;        //xy=581.5000076293945,633.2500095367432
AudioFilterStateVariable filter5;        //xy=582.2500076293945,527.5000076293945
AudioFilterStateVariable filter4;        //xy=584.0000076293945,421.7500057220459
AudioMixer4              mixer1;         //xy=761.7500114440918,208.75000381469727
AudioMixer4              mixer2;         //xy=761.5000114440918,504.25000762939453
AudioMixer4              mixer3;         //xy=881.7500114440918,347.75000381469727
AudioOutputI2S           i2s1;           //xy=1020.0000152587891,346.75000381469727
AudioConnection          patchCord1(waveform2, envelope2);
AudioConnection          patchCord2(waveform3, envelope3);
AudioConnection          patchCord3(waveform7, envelope7);
AudioConnection          patchCord4(waveform1, envelope1);
AudioConnection          patchCord5(waveform4, envelope4);
AudioConnection          patchCord6(waveform6, envelope6);
AudioConnection          patchCord7(waveform10, envelope10);
AudioConnection          patchCord8(waveform11, envelope11);
AudioConnection          patchCord9(waveform5, envelope5);
AudioConnection          patchCord10(waveform9, envelope9);
AudioConnection          patchCord11(waveform8, envelope8);
AudioConnection          patchCord12(waveform12, envelope12);
AudioConnection          patchCord13(waveform15, envelope15);
AudioConnection          patchCord14(waveform14, envelope14);
AudioConnection          patchCord15(waveform13, envelope13);
AudioConnection          patchCord16(waveform16, envelope16);
AudioConnection          patchCord17(waveform18, envelope18);
AudioConnection          patchCord18(waveform17, envelope17);
AudioConnection          patchCord19(envelope2, 0, mixer4, 1);
AudioConnection          patchCord20(envelope1, 0, mixer4, 0);
AudioConnection          patchCord21(envelope3, 0, mixer4, 2);
AudioConnection          patchCord22(envelope6, 0, mixer5, 2);
AudioConnection          patchCord23(envelope7, 0, mixer6, 0);
AudioConnection          patchCord24(envelope8, 0, mixer6, 1);
AudioConnection          patchCord25(envelope9, 0, mixer6, 2);
AudioConnection          patchCord26(envelope5, 0, mixer5, 1);
AudioConnection          patchCord27(envelope4, 0, mixer5, 0);
AudioConnection          patchCord28(envelope10, 0, mixer7, 0);
AudioConnection          patchCord29(envelope11, 0, mixer7, 1);
AudioConnection          patchCord30(envelope12, 0, mixer7, 2);
AudioConnection          patchCord31(envelope15, 0, mixer8, 2);
AudioConnection          patchCord32(envelope16, 0, mixer9, 0);
AudioConnection          patchCord33(envelope17, 0, mixer9, 1);
AudioConnection          patchCord34(envelope14, 0, mixer8, 1);
AudioConnection          patchCord35(envelope18, 0, mixer9, 2);
AudioConnection          patchCord36(envelope13, 0, mixer8, 0);
AudioConnection          patchCord37(mixer9, 0, filter6, 0);
AudioConnection          patchCord38(mixer5, 0, filter2, 0);
AudioConnection          patchCord39(mixer7, 0, filter4, 0);
AudioConnection          patchCord40(mixer8, 0, filter5, 0);
AudioConnection          patchCord41(mixer6, 0, filter3, 0);
AudioConnection          patchCord42(mixer4, 0, filter1, 0);
AudioConnection          patchCord43(filter1, 0, mixer1, 0);
AudioConnection          patchCord44(filter3, 0, mixer1, 2);
AudioConnection          patchCord45(filter2, 0, mixer1, 1);
AudioConnection          patchCord46(filter6, 0, mixer2, 2);
AudioConnection          patchCord47(filter5, 0, mixer2, 1);
AudioConnection          patchCord48(filter4, 0, mixer2, 0);
AudioConnection          patchCord49(mixer1, 0, mixer3, 0);
AudioConnection          patchCord50(mixer2, 0, mixer3, 1);
AudioConnection          patchCord51(mixer3, 0, i2s1, 0);
AudioConnection          patchCord52(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=599.5,41.000000953674316
// GUItool: end automatically generated code

void setup() {
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.3);

  int waveform = WAVEFORM_SQUARE;
               
  waveform1.begin(0.1,getFreq(20),waveform);
  waveform4.begin(0.1,getFreq(25),waveform);
  waveform7.begin(0.1,getFreq(30),waveform);
  waveform10.begin(0.1,getFreq(35),waveform);
  waveform13.begin(0.1,getFreq(39),waveform);
  waveform16.begin(0.1,getFreq(44),waveform);

  waveform2.begin(0.1,getFreq(20+12),waveform);
  waveform5.begin(0.1,getFreq(25+12),waveform);
  waveform8.begin(0.1,getFreq(30+12),waveform);
  waveform11.begin(0.1,getFreq(35+12),waveform);
  waveform14.begin(0.1,getFreq(39+12),waveform);
  waveform17.begin(0.1,getFreq(44+12),waveform);

  waveform3.begin(0.1,getFreq(20+24),waveform);
  waveform6.begin(0.1,getFreq(25+24),waveform);
  waveform9.begin(0.1,getFreq(30+24),waveform);
  waveform12.begin(0.1,getFreq(35+24),waveform);
  waveform15.begin(0.1,getFreq(39+24),waveform);
  waveform18.begin(0.1,getFreq(44+24),waveform);

  filter1.frequency(5000);
  filter2.frequency(5000);
  filter3.frequency(5000);
  filter4.frequency(5000);
  filter5.frequency(5000);
  filter6.frequency(5000);

  Serial.begin(9600);

}

void loop() {
  envelope1.noteOn();
  delay(30);
  envelope2.noteOn();
  delay(30);
  envelope3.noteOn();
  delay(1000);
  envelope4.noteOn();
  delay(30);
  envelope5.noteOn();
  delay(30);
  envelope6.noteOn();
  delay(1000);
  envelope7.noteOn();
  delay(30);
  envelope8.noteOn();
  delay(30);
  envelope9.noteOn();
  delay(1000);
  envelope10.noteOn();
  delay(30);
  envelope11.noteOn();
  delay(30);
  envelope12.noteOn();
  delay(1000);
  envelope13.noteOn();
  delay(30);
  envelope14.noteOn();
  delay(30);
  envelope15.noteOn();
  delay(1000);
  envelope16.noteOn();
  delay(30);
  envelope17.noteOn();
  delay(30);
  envelope18.noteOn();
  delay(1000);
  envelope1.noteOff();
  envelope2.noteOff();
  envelope3.noteOff();
  envelope4.noteOff();
  envelope5.noteOff();
  envelope6.noteOff();
  envelope7.noteOff();
  envelope8.noteOff();
  envelope9.noteOff();
  envelope10.noteOff();
  envelope11.noteOff();
  envelope12.noteOff();
  envelope13.noteOff();
  envelope14.noteOff();
  envelope15.noteOff();
  envelope16.noteOff();
  envelope17.noteOff();
  envelope18.noteOff();

  Serial.println(AudioMemoryUsageMax());
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}


