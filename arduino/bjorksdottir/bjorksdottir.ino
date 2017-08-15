#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo2;      //xy=75.00001525878906,586.6666297912598
AudioSynthWaveformDc     filterEnvelopeDC; //xy=251.66666412353516,420.6666660308838
AudioSynthWaveformSineModulated lfo1;           //xy=259.99998474121094,538.66672706604
AudioFilterStateVariable squareWaveSmoothingFilter;        //xy=305,677.5
AudioSynthWaveform       waveform1B;     //xy=485.66666412353516,94.66666603088379
AudioSynthWaveform       waveform1C;     //xy=485.66666412353516,131.6666660308838
AudioSynthWaveform       waveform3A;     //xy=485.66666412353516,301.6666660308838
AudioSynthWaveform       waveform1A;     //xy=486.66666412353516,56.66666603088379
AudioSynthWaveform       waveform2A;     //xy=486.66666412353516,182.6666660308838
AudioSynthWaveform       waveform2C;     //xy=486.66666412353516,251.6666660308838
AudioSynthWaveform       waveform4A;     //xy=486.66666412353516,414.6666660308838
AudioSynthWaveform       waveform4B;     //xy=486.66666412353516,450.6666660308838
AudioSynthWaveform       waveform2B;     //xy=488.66666412353516,217.6666660308838
AudioSynthWaveform       waveform3C;     //xy=488.66666412353516,367.6666660308838
AudioSynthWaveform       waveform3B;     //xy=489.66666412353516,332.6666660308838
AudioSynthWaveform       waveform4C;     //xy=489.66666412353516,484.6666660308838
AudioSynthWaveform       waveform5C;     //xy=489.66666412353516,605.6666660308838
AudioSynthWaveform       waveform5B;     //xy=490.66666412353516,570.6666660308838
AudioSynthWaveform       waveform5A;     //xy=491.66666412353516,535.6666660308838
AudioSynthWaveform       waveform6A;     //xy=493.66666412353516,660.6666660308838
AudioSynthWaveform       waveform6C;     //xy=493.66666412353516,726.6666660308838
AudioSynthWaveform       waveform6B;     //xy=494.66666412353516,692.6666660308838
AudioEffectEnvelope      envelope2;      //xy=640.6666641235352,89.66666603088379
AudioEffectEnvelope      envelope1;      //xy=641.6666641235352,56.66666603088379
AudioEffectEnvelope      envelope3;      //xy=641.6666641235352,125.66666603088379
AudioEffectEnvelope      envelope6;      //xy=649.6666641235352,251.6666660308838
AudioEffectEnvelope      envelope7;      //xy=649.6666641235352,299.6666660308838
AudioEffectEnvelope      envelope8;      //xy=649.6666641235352,330.6666660308838
AudioEffectEnvelope      envelope9;      //xy=649.6666641235352,364.6666660308838
AudioEffectEnvelope      envelope5;      //xy=650.6666641235352,217.6666660308838
AudioEffectEnvelope      envelope4;      //xy=651.6666641235352,184.6666660308838
AudioSynthWaveformDc     vcaDC;            //xy=655.6666641235352,788.6666660308838
AudioEffectEnvelope      envelope10;     //xy=660.6666641235352,415.6666660308838
AudioEffectEnvelope      envelope11;     //xy=660.6666641235352,449.6666660308838
AudioEffectEnvelope      envelope12;     //xy=661.6666641235352,481.6666660308838
AudioEffectEnvelope      envelope15;     //xy=661.6666641235352,601.6666660308838
AudioEffectEnvelope      envelope16;     //xy=661.6666641235352,655.6666660308838
AudioEffectEnvelope      envelope17;     //xy=661.6666641235352,687.6666660308838
AudioEffectEnvelope      envelope14;     //xy=663.6666641235352,567.6666660308838
AudioEffectEnvelope      envelope18;     //xy=663.6666641235352,720.6666660308838
AudioEffectEnvelope      envelope13;     //xy=664.6666641235352,535.6666660308838
AudioEffectEnvelope      filterEnvelope1; //xy=804.333366394043,150.6666774749756
AudioEffectEnvelope      filterEnvelope2; //xy=812.333366394043,274.6666774749756
AudioEffectEnvelope      filterEnvelope5; //xy=813.333366394043,620.6666774749756
AudioEffectEnvelope      filterEnvelope6; //xy=813.333366394043,732.6666774749756
AudioEffectEnvelope      filterEnvelope3; //xy=818.333366394043,374.6666774749756
AudioEffectEnvelope      filterEnvelope4; //xy=820.333366394043,492.6666774749756
AudioMixer4              stringMixer6;   //xy=973.6666641235352,671.6666660308838
AudioMixer4              stringMixer2;   //xy=977.6666641235352,211.6666660308838
AudioMixer4              stringMixer4;   //xy=977.6666641235352,439.6666660308838
AudioMixer4              stringMixer5;   //xy=978.6666641235352,559.6666660308838
AudioMixer4              stringMixer3;   //xy=980.6666641235352,321.6666660308838
AudioMixer4              stringMixer1;   //xy=981.6666641235352,96.66666603088379
AudioMixer4              filterModMixer3; //xy=985.6666641235352,378.6666660308838
AudioMixer4              filterModMixer1; //xy=986.6666641235352,154.6666660308838
AudioMixer4              filterModMixer2; //xy=990.6666641235352,267.6666660308838
AudioMixer4              filterModMixer4; //xy=993.6666641235352,498.6666660308838
AudioMixer4              filterModMixer6; //xy=995.6666641235352,729.6666660308838
AudioMixer4              filterModMixer5; //xy=998.6666641235352,618.6666660308838
AudioMixer4              vcaSignalMixer; //xy=998.6666641235352,793.6666660308838
AudioFilterStateVariable filter3;        //xy=1134.6666641235352,351.6666660308838
AudioFilterStateVariable filter1;        //xy=1135.6666641235352,135.6666660308838
AudioFilterStateVariable filter2;        //xy=1135.6666641235352,255.6666660308838
AudioFilterStateVariable filter5;        //xy=1139.6666641235352,552.6666660308838
AudioFilterStateVariable filter6;        //xy=1139.6666641235352,658.6666660308838
AudioFilterStateVariable filter4;        //xy=1141.6666641235352,447.6666660308838
AudioMixer4              stringGroupMixer1; //xy=1319.6666641235352,234.6666660308838
AudioMixer4              stringGroupMixer2; //xy=1319.6666641235352,529.6666660308838
AudioMixer4              stringGroupMixerMaster; //xy=1452.6666641235352,370.6666660308838
AudioEffectMultiply      vca1;           //xy=1534.6666641235352,482.6666660308838
AudioEffectWaveshaper    waveshape1;     //xy=1635.6666641235352,416.6666660308838
AudioMixer4              distortionMixer; //xy=1767.6666641235352,473.6666660308838
AudioEffectBitcrusher    bitcrusher1;    //xy=1902.6666641235352,403.6666660308838
AudioPlayQueue           glitch;         //xy=1971.4285714285713,482.85714285714283
AudioMixer4              finalMixer;         //xy=2089.4642333984375,407.67859840393066
AudioOutputI2S           i2s1;           //xy=2261.238140106201,294.38093662261963
AudioAnalyzePeak         peak1;          //xy=2266.8093938827515,506.23808574676514
AudioRecordQueue         glitchRecord;         //xy=2299.999855041504,405.7142925262451
AudioConnection          patchCord1(lfo2, 0, squareWaveSmoothingFilter, 0);
AudioConnection          patchCord2(filterEnvelopeDC, filterEnvelope1);
AudioConnection          patchCord3(filterEnvelopeDC, filterEnvelope2);
AudioConnection          patchCord4(filterEnvelopeDC, filterEnvelope3);
AudioConnection          patchCord5(filterEnvelopeDC, filterEnvelope4);
AudioConnection          patchCord6(filterEnvelopeDC, filterEnvelope5);
AudioConnection          patchCord7(filterEnvelopeDC, filterEnvelope6);
AudioConnection          patchCord8(lfo1, 0, filterModMixer1, 1);
AudioConnection          patchCord9(lfo1, 0, filterModMixer2, 1);
AudioConnection          patchCord10(lfo1, 0, filterModMixer3, 1);
AudioConnection          patchCord11(lfo1, 0, filterModMixer4, 1);
AudioConnection          patchCord12(lfo1, 0, filterModMixer5, 1);
AudioConnection          patchCord13(lfo1, 0, filterModMixer6, 1);
AudioConnection          patchCord14(lfo1, 0, vcaSignalMixer, 1);
AudioConnection          patchCord15(squareWaveSmoothingFilter, 0, vcaSignalMixer, 2);
AudioConnection          patchCord16(waveform1B, envelope2);
AudioConnection          patchCord17(waveform1C, envelope3);
AudioConnection          patchCord18(waveform3A, envelope7);
AudioConnection          patchCord19(waveform1A, envelope1);
AudioConnection          patchCord20(waveform2A, envelope4);
AudioConnection          patchCord21(waveform2C, envelope6);
AudioConnection          patchCord22(waveform4A, envelope10);
AudioConnection          patchCord23(waveform4B, envelope11);
AudioConnection          patchCord24(waveform2B, envelope5);
AudioConnection          patchCord25(waveform3C, envelope9);
AudioConnection          patchCord26(waveform3B, envelope8);
AudioConnection          patchCord27(waveform4C, envelope12);
AudioConnection          patchCord28(waveform5C, envelope15);
AudioConnection          patchCord29(waveform5B, envelope14);
AudioConnection          patchCord30(waveform5A, envelope13);
AudioConnection          patchCord31(waveform6A, envelope16);
AudioConnection          patchCord32(waveform6C, envelope18);
AudioConnection          patchCord33(waveform6B, envelope17);
AudioConnection          patchCord34(envelope2, 0, stringMixer1, 1);
AudioConnection          patchCord35(envelope1, 0, stringMixer1, 0);
AudioConnection          patchCord36(envelope3, 0, stringMixer1, 2);
AudioConnection          patchCord37(envelope6, 0, stringMixer2, 2);
AudioConnection          patchCord38(envelope7, 0, stringMixer3, 0);
AudioConnection          patchCord39(envelope8, 0, stringMixer3, 1);
AudioConnection          patchCord40(envelope9, 0, stringMixer3, 2);
AudioConnection          patchCord41(envelope5, 0, stringMixer2, 1);
AudioConnection          patchCord42(envelope4, 0, stringMixer2, 0);
AudioConnection          patchCord43(vcaDC, 0, vcaSignalMixer, 0);
AudioConnection          patchCord44(envelope10, 0, stringMixer4, 0);
AudioConnection          patchCord45(envelope11, 0, stringMixer4, 1);
AudioConnection          patchCord46(envelope12, 0, stringMixer4, 2);
AudioConnection          patchCord47(envelope15, 0, stringMixer5, 2);
AudioConnection          patchCord48(envelope16, 0, stringMixer6, 0);
AudioConnection          patchCord49(envelope17, 0, stringMixer6, 1);
AudioConnection          patchCord50(envelope14, 0, stringMixer5, 1);
AudioConnection          patchCord51(envelope18, 0, stringMixer6, 2);
AudioConnection          patchCord52(envelope13, 0, stringMixer5, 0);
AudioConnection          patchCord53(filterEnvelope1, 0, filterModMixer1, 0);
AudioConnection          patchCord54(filterEnvelope2, 0, filterModMixer2, 0);
AudioConnection          patchCord55(filterEnvelope5, 0, filterModMixer5, 0);
AudioConnection          patchCord56(filterEnvelope6, 0, filterModMixer6, 0);
AudioConnection          patchCord57(filterEnvelope3, 0, filterModMixer3, 0);
AudioConnection          patchCord58(filterEnvelope4, 0, filterModMixer4, 0);
AudioConnection          patchCord59(stringMixer6, 0, filter6, 0);
AudioConnection          patchCord60(stringMixer2, 0, filter2, 0);
AudioConnection          patchCord61(stringMixer4, 0, filter4, 0);
AudioConnection          patchCord62(stringMixer5, 0, filter5, 0);
AudioConnection          patchCord63(stringMixer3, 0, filter3, 0);
AudioConnection          patchCord64(stringMixer1, 0, filter1, 0);
AudioConnection          patchCord65(filterModMixer3, 0, filter3, 1);
AudioConnection          patchCord66(filterModMixer1, 0, filter1, 1);
AudioConnection          patchCord67(filterModMixer2, 0, filter2, 1);
AudioConnection          patchCord68(filterModMixer4, 0, filter4, 1);
AudioConnection          patchCord69(filterModMixer6, 0, filter6, 1);
AudioConnection          patchCord70(filterModMixer5, 0, filter5, 1);
AudioConnection          patchCord71(vcaSignalMixer, 0, vca1, 1);
AudioConnection          patchCord72(filter3, 0, stringGroupMixer1, 2);
AudioConnection          patchCord73(filter1, 0, stringGroupMixer1, 0);
AudioConnection          patchCord74(filter2, 0, stringGroupMixer1, 1);
AudioConnection          patchCord75(filter5, 0, stringGroupMixer2, 1);
AudioConnection          patchCord76(filter6, 0, stringGroupMixer2, 2);
AudioConnection          patchCord77(filter4, 0, stringGroupMixer2, 0);
AudioConnection          patchCord78(stringGroupMixer1, 0, stringGroupMixerMaster, 0);
AudioConnection          patchCord79(stringGroupMixer2, 0, stringGroupMixerMaster, 1);
AudioConnection          patchCord80(stringGroupMixerMaster, 0, vca1, 0);
AudioConnection          patchCord81(vca1, waveshape1);
AudioConnection          patchCord82(vca1, 0, distortionMixer, 1);
AudioConnection          patchCord83(waveshape1, 0, distortionMixer, 0);
AudioConnection          patchCord84(distortionMixer, bitcrusher1);
AudioConnection          patchCord85(bitcrusher1, 0, finalMixer, 0);
AudioConnection          patchCord86(glitch, 0, finalMixer, 1);
AudioConnection          patchCord87(finalMixer, peak1);
AudioConnection          patchCord88(finalMixer, 0, i2s1, 0);
AudioConnection          patchCord89(finalMixer, 0, i2s1, 1);
AudioConnection          patchCord90(distortionMixer, glitchRecord);
AudioControlSGTL5000     sgtl5000_1;     //xy=1157.6666641235352,66.66666603088379
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

// define knobs
int FILTER_FREQUENCY_KNOB = 24;
int FILTER_RESONANCE_KNOB = 0;
int AMP_ATTACK_KNOB = 27;
int AMP_SUSTAIN_KNOB = 0;
int AMP_DECAY_KNOB = 0;
int AMP_RELEASE_KNOB = 0;
int AMP_RELEASE2_KNOB = 0;
int VOLUME_KNOB = 0;
int DISTORTION_KNOB = 0;
int BIT_CRUSH_KNOB = 0;
int FINE_TUNING_KNOB = 0;
int COARSE_TUNING_KNOB = 0;
int LFO1_FREQUENCY_KNOB = 0;
int LFO2_FREQUENCY_KNOB = 0;
int WHAMMY_KNOB = 0;
int OCTAVE_FADE_KNOB = 25;
int OCTAVE_DELAY_KNOB = 26;
int WAVEFORM_KNOB = 0;
int FILTER_ATTACK_KNOB = 0;
int FILTER_DECAY_KNOB = 0;
int FILTER_SUSTAIN_KNOB = 0;
int FILTER_RELEASE_KNOB = 0;
int FILTER_ENVELOPE_KNOB = 25;

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
//int guitarTuning[6] = {-2,5,10,14,17,22};
int guitarTuning[6] = {0,5,10,15,19,24};

// knob response curves
int INT_SQUARE_RESPONSE_CURVE[1023];
float FLOAT_RESPONSE_CURVE[1023];

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

int touchThreshold = 20000; // was 1200 with nscan=2, prescale=1
int fretTouchThreshold = 20000;
int touchTimeLimit = 100000;

int nextRelease[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextNote[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

float maxPeak = 0.0;

// adjustable values
float ampAttack = 0;
float ampDecay = 50;
float ampSustain = 0.3;
bool useAmpReleaseLong = true;
float ampReleaseLong = 15000; // for when a string is plucked
float ampReleaseShort = 50; // for when a string is muted
float ampRelease = ampReleaseLong;
float filterAttack = 2000;
float filterDecay = 2000;
float filterSustain = 0.1;
float filterRelease = 2000;
float lfo1Level = 0;
float lfo2Level = 0;
float lfo1Frequency = 10;
float lfo2Frequency = 10;
float distortionLevel = 0;
float filterCutoff = 2000;
float filterResonance = 2;
float filterEnvelopeLevel = 0.3;
float octaveDelay = 40;
float octaveFade = 0; // 0 is 6-string mode, 0.5 is 12-string, 1 is 18-string
bool killSwitch = false;
float portamento = 1000;
float mainVolume = 0.5;
float bitCrushRate = 44100;
float bitCrushResolution = 16;
float waveSelectRaw = 0;
float oscPulseWidth = 0.5;
int waveSelect = 0;
int waveSelectPrevious = waveSelect;
float whammy = 1;

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];
AudioFilterStateVariable* filters[6];
AudioEffectEnvelope* filterEnvelopes[6];
AudioMixer4* stringMixers[6];
AudioMixer4* filterModMixers[6];

float WAVESHAPE_EXAMPLE[17] = {
  -0.25,
  -0.25,
  -0.2,
  -0.2,
  -0.2,
  -0.2,
  -0.15,
  -0.1,
  0,
  0.1,
  0.15,
  0.2,
  0.2,
  0.2,
  0.2,
  0.25,
  0.25
};

void setup() {
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  

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
  filterEnvelopes[0] = &filterEnvelope1;
  filterEnvelopes[1] = &filterEnvelope2;
  filterEnvelopes[2] = &filterEnvelope3;
  filterEnvelopes[3] = &filterEnvelope4;
  filterEnvelopes[4] = &filterEnvelope5;
  filterEnvelopes[5] = &filterEnvelope6;
  stringMixers[0] = &stringMixer1;
  stringMixers[1] = &stringMixer2;
  stringMixers[2] = &stringMixer3;
  stringMixers[3] = &stringMixer4;
  stringMixers[4] = &stringMixer5;
  stringMixers[5] = &stringMixer6;
  filterModMixers[0] = &filterModMixer1;
  filterModMixers[1] = &filterModMixer2;
  filterModMixers[2] = &filterModMixer3;
  filterModMixers[3] = &filterModMixer4;
  filterModMixers[4] = &filterModMixer5;
  filterModMixers[5] = &filterModMixer6;
  for(int i=0;i<18;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),getWaveform(waveSelect));
    envelopes[i]->attack(ampAttack);
    envelopes[i]->decay(ampDecay);
    envelopes[i]->sustain(ampSustain);
    envelopes[i]->release(ampRelease);
    if(i<6) {
      filters[i]->frequency(filterCutoff);
      filters[i]->resonance(filterResonance);
      filters[i]->octaveControl(3);
      filterEnvelopes[i]->attack(filterAttack);
      filterEnvelopes[i]->decay(filterDecay);
      filterEnvelopes[i]->sustain(filterSustain);
      filterEnvelopes[i]->release(filterRelease);
    }
  }

  filterEnvelopeDC.amplitude(1);
  vcaDC.amplitude(1);

  squareWaveSmoothingFilter.frequency(1000);
  lfo2.begin(1,5,WAVEFORM_SQUARE);
  lfo1.amplitude(1);
  lfo1.frequency(3);
  vcaSignalMixer.gain(1,0);
  vcaSignalMixer.gain(2,0);
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
  //Serial.println(touchRead(STRING_PIN));
  //Serial.println(touchRead(FRET_PIN));
  
  glitchRecord.begin();
}

bool isTouched;
long timeStart;
long timeTotal;
int thisString;
bool isFirstNote = true;
int loopTime = 80; // rough guess for first loop for now
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
      if(i<1) {
        capacitance = 0;
        //capacitance = fakeTouchRead(i*8+j);
        capacitance = touchRead(FRET_PIN);
        //Serial.println(capacitance);
        
        fretTouched = capacitance > fretTouchThreshold;
        if(fretTouched) {
          Serial.println("TOUCHED");
          stringPositions[thisString] = max(stringPositions[thisString], thisFret);
        }
      }

      thisString = STRING_MUX_PINS[j];
      if(thisString<6) {
      
        // will use a more complex pressure-sensitive method later, but for now simple on/off for strings
        //touchReading = touchReadTimeLim(STRING_PIN, touchTimeLimit); // using special function found on random teensy internet forum
        touchReading = touchRead(STRING_PIN);
        //touchReading = random(1000) ? 0 : touchThreshold + 1;
        //int test = touchRead(STRING_PIN);
        //Serial.println(touchReading);
        isTouched = touchReading > touchThreshold || touchReading < 0;
        if(!strings[thisString] && isTouched) {
          // string has just been pressed
          muteString(thisString);
        } else if(strings[thisString] && !isTouched) {
          // string has been released
          pluckString(thisString);
        } else if(nextRelease[thisString] != -1 && millis() >= nextRelease[thisString]) {
          envelopes[thisString]->noteOff();
          filterEnvelopes[thisString]->noteOff();
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
  }

  // record glitch data
  while(glitchRecord.available()) {
    glitchRecord.readBuffer();
    glitchRecord.freeBuffer();
  }

  // set parameter values
  switch(999) {
    case 0:
    lfo1Level = mapFloat(knobValues[24],0,1023,0,1);
    lfo2Level = mapFloat(knobValues[25],0,1023,0,1);
    lfo1Frequency = mapFloat(knobValues[26],0,1023,1,200);
    lfo2Frequency = mapFloat(knobValues[27],0,1023,1,200);
    break;

    case 1:
    ampAttack = mapFloat(knobValues[24],0,1023,0,1000);
    ampDecay = mapFloat(knobValues[25],0,1023,0,1000);
    ampSustain = mapFloat(knobValues[26],0,1023,0,1);
    ampReleaseShort = mapFloat(knobValues[27],0,1023,0,20000);
    break;

    case 2:
    filterCutoff = mapFloat(knobValues[24],0,1023,1,1000);
    filterResonance = mapFloat(knobValues[25],0,1023,0.7,5);
    portamento = mapFloat(knobValues[26],0,1023,0,50);
    lfo1Level = mapFloat(knobValues[27],0,1023,0,1);
    break;

    case 3:
    filterAttack = mapFloat(knobValues[24],0,1023,0,1000);
    filterDecay = mapFloat(knobValues[25],0,1023,0,1000);
    filterSustain = mapFloat(knobValues[26],0,1023,0,1);
    filterEnvelopeLevel = mapFloat(knobValues[27],0,1023,0,1);
    break;

    case 4:
    mainVolume = mapFloat(knobValues[24],0,1023,0,1);
    distortionLevel = mapFloat(knobValues[25],0,1023,0,1);
    bitCrushRate = mapFloat(knobValues[26],0,1023,1,44100);
    bitCrushResolution = mapFloat(knobValues[27],0,1023,2,16);
    break;

    case 5:
    waveSelectPrevious = waveSelect;
    waveSelectRaw = mapFloat(knobValues[24],0,1023,0,4.99);
    waveSelect = floor(waveSelectRaw);
    oscPulseWidth = max(0,min(1,waveSelectRaw-4));
    whammy = mapFloat(knobValues[25],0,1023,0.25,4);
    octaveFade = mapFloat(knobValues[26],0,1023,0,1);
    octaveDelay = mapFloat(knobValues[27],0,1023,0,1000);
    break;
  }
  //filterCutoff = map(knobValues[FILTER_FREQUENCY_KNOB],0,1023,10,5000);
  //octaveFade = mapFloat(knobValues[OCTAVE_FADE_KNOB],0,1023,0,1);
  //octaveDelay = mapFloat(knobValues[OCTAVE_DELAY_KNOB],0,1023,0,1000);
  //ampAttack = map(knobValues[AMP_ATTACK_KNOB],0,1023,0,1000);
  //filterEnvelopeLevel = mapFloat(knobValues[FILTER_ENVELOPE_KNOB],0,1023,0,1);

  // do stuff with parameters
  ampRelease = useAmpReleaseLong?ampReleaseLong:ampReleaseShort;
  adjustOctaveVolumes();
  bitcrusher1.bits(bitCrushResolution);
  bitcrusher1.sampleRate(bitCrushRate);
  distortionMixer.gain(0,distortionLevel);
  distortionMixer.gain(1,1-distortionLevel);
  finalMixer.gain(0,mainVolume);
  lfo1.frequency(lfo1Frequency);
  lfo2.frequency(lfo2Frequency);
  float multiplier = 0.5;
  if(lfo1Level+lfo2Level>1) {
    multiplier = 0.5/(lfo1Level+lfo2Level);
  }
  vcaSignalMixer.gain(0,1-multiplier*(lfo1Level+lfo2Level));
  vcaSignalMixer.gain(1,multiplier*lfo1Level);
  vcaSignalMixer.gain(2,multiplier*lfo2Level);
  
  // set frequency of oscillators
  bool portamentoActive = portamento < 50;
  float amountToChange;
  float noteInterval;
  float deltaFreq;
  for(int i=0; i<6; i++) {
    if(waveSelect!=waveSelectPrevious) {
      oscillators[i]->begin(getWaveform(waveSelect));
      oscillators[i+6]->begin(getWaveform(waveSelect));
      oscillators[i+12]->begin(getWaveform(waveSelect));
    }
    
    // the 0.0594631 * frequency term is to get the interval between two semitones in Hz
    amountToChange = 0.0594631 * currentFrequencies[i] * portamento * loopTime * 0.001;
    targetFrequencies[i] = getFreq(20+stringPositions[i]+guitarTuning[i]);
    
    deltaFreq = targetFrequencies[i] - currentFrequencies[i];
    if(!portamentoActive || abs(deltaFreq) < amountToChange || isFirstNote) {
      currentFrequencies[i] = targetFrequencies[i];
    } else if(deltaFreq > 0) {
      currentFrequencies[i] += amountToChange;
    } else {
      currentFrequencies[i] -= amountToChange;
    }
    oscillators[i]->frequency(whammy*currentFrequencies[i]);
    oscillators[i+6]->frequency(2*whammy*currentFrequencies[i]);
    oscillators[i+12]->frequency(4*whammy*currentFrequencies[i]);
    if(waveSelect==4) {
      oscillators[i]->pulseWidth(oscPulseWidth);
      oscillators[i+6]->pulseWidth(oscPulseWidth);
      oscillators[i+12]->pulseWidth(oscPulseWidth);
    }
    for(int j=0;j<3;j++) {
      envelopes[i+6*j]->attack(ampAttack);
      envelopes[i+6*j]->decay(ampDecay);
      envelopes[i+6*j]->sustain(ampSustain);
      envelopes[i+6*j]->release(ampRelease);
    }

    // filters
    filters[i]->frequency(filterCutoff);
    filters[i]->resonance(filterResonance);
    filterEnvelopes[i]->attack(filterAttack);
    filterEnvelopes[i]->decay(filterDecay);
    filterEnvelopes[i]->sustain(filterSustain);
    filterEnvelopes[i]->release(filterRelease);
    filterModMixers[i]->gain(0, filterEnvelopeLevel);
    filterModMixers[i]->gain(1, 0);

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
  loopTime = timeTotal;
  Serial.print("TIME:");
  Serial.println(timeTotal);
  float thisPeak;
  if(peak1.available()) {
    thisPeak = peak1.read();
    analogWrite(KILL_SWITCH_LIGHT_PIN, 128 * thisPeak);
    if(thisPeak > maxPeak) maxPeak = thisPeak;
  }
  //Serial.println(maxPeak);
  //Serial.println(thisPeak);

  isFirstNote = false;
}

float getFreq(float noteNum) {
  return pow(2, (noteNum-49)/12) * 440;
}

int fakeTouchRead(int pin) {
  int returnValue;
  if(millis() % 6000 < 3000) {
    returnValue = pin == 2 || pin == 13 ? 100000 : 100;
  } else {
    returnValue = pin == 14 || pin == 25 ? 100000 : 100;
  }
  return returnValue;
}

void pluckString(int string) {
  envelopes[string]->noteOn();
  filterEnvelopes[string]->noteOn();
  stringLights[string] = 255;
  useAmpReleaseLong = true;
  envelopes[string]->release(ampReleaseLong);
  envelopes[string+6]->release(ampReleaseLong);
  envelopes[string+12]->release(ampReleaseLong);
  nextRelease[string] = millis() + 1000; // temp
  nextNote[string+6] = millis() + octaveDelay;
  nextNote[string+12] = millis() + 2 * octaveDelay;
}

void muteString(int string) {
  useAmpReleaseLong = false;
  envelopes[string]->release(ampReleaseShort);
  envelopes[string]->noteOff();
  envelopes[string+6]->release(ampReleaseShort);
  envelopes[string+6]->noteOff();
  envelopes[string+12]->release(ampReleaseShort);
  envelopes[string+12]->noteOff();
  filterEnvelopes[string]->noteOff();
}

void adjustOctaveVolumes() {
  for(int i=0;i<6;i++) {
    stringMixers[i]->gain(1,min(1,octaveFade*2));
    stringMixers[i]->gain(2,max(0,octaveFade*2-1));
  }
}

int getWaveform(int waveformNumber) {
  int returnWaveform;
  switch(waveformNumber) {
    case 0:
    returnWaveform = WAVEFORM_SQUARE;
    break;
    case 1:
    returnWaveform = WAVEFORM_SINE;
    break;
    case 2:
    returnWaveform = WAVEFORM_TRIANGLE;
    break;
    case 3:
    returnWaveform = WAVEFORM_SAWTOOTH;
    break;
    case 4:
    returnWaveform = WAVEFORM_PULSE;
    break;
  }
  return returnWaveform;
}

// stolen from a forum
float mapFloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
