#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       lfo2;           //xy=84,808
AudioFilterStateVariable squareWaveSmoothingFilter; //xy=182,736
AudioMixer4              lfo1FreqModMixer; //xy=255,649
AudioRecordQueue         queue1;         //xy=266,845
AudioSynthWaveformDc     filterEnvelopeDC; //xy=273,441
AudioSynthWaveformSineModulated lfo1;           //xy=281,559
AudioSynthWaveform       waveform1B;     //xy=507,115
AudioSynthWaveform       waveform1C;     //xy=507,152
AudioSynthWaveform       waveform3A;     //xy=507,322
AudioSynthWaveform       waveform1A;     //xy=508,77
AudioSynthWaveform       waveform2A;     //xy=508,203
AudioSynthWaveform       waveform2C;     //xy=508,272
AudioSynthWaveform       waveform4A;     //xy=508,435
AudioSynthWaveform       waveform4B;     //xy=508,471
AudioSynthWaveform       waveform2B;     //xy=510,238
AudioSynthWaveform       waveform3C;     //xy=510,388
AudioSynthWaveform       waveform3B;     //xy=511,353
AudioSynthWaveform       waveform4C;     //xy=511,505
AudioSynthWaveform       waveform5C;     //xy=511,626
AudioSynthWaveform       waveform5B;     //xy=512,591
AudioSynthWaveform       waveform5A;     //xy=513,556
AudioSynthWaveform       waveform6A;     //xy=515,681
AudioSynthWaveform       waveform6C;     //xy=515,747
AudioSynthWaveform       waveform6B;     //xy=516,713
AudioEffectEnvelope      envelope2;      //xy=662,110
AudioEffectEnvelope      envelope1;      //xy=663,77
AudioEffectEnvelope      envelope3;      //xy=663,146
AudioEffectEnvelope      envelope6;      //xy=671,272
AudioEffectEnvelope      envelope7;      //xy=671,320
AudioEffectEnvelope      envelope8;      //xy=671,351
AudioEffectEnvelope      envelope9;      //xy=671,385
AudioEffectEnvelope      envelope5;      //xy=672,238
AudioEffectEnvelope      envelope4;      //xy=673,205
AudioSynthWaveformDc     vcaDC;          //xy=677,809
AudioEffectEnvelope      envelope10;     //xy=682,436
AudioEffectEnvelope      envelope11;     //xy=682,470
AudioEffectEnvelope      envelope12;     //xy=683,502
AudioEffectEnvelope      envelope15;     //xy=683,622
AudioEffectEnvelope      envelope16;     //xy=683,676
AudioEffectEnvelope      envelope17;     //xy=683,708
AudioEffectEnvelope      envelope14;     //xy=685,588
AudioEffectEnvelope      envelope18;     //xy=685,741
AudioEffectEnvelope      envelope13;     //xy=686,556
AudioEffectEnvelope      filterEnvelope1; //xy=826,171
AudioEffectEnvelope      filterEnvelope2; //xy=834,295
AudioEffectEnvelope      filterEnvelope5; //xy=835,641
AudioEffectEnvelope      filterEnvelope6; //xy=835,753
AudioEffectEnvelope      filterEnvelope3; //xy=840,395
AudioEffectEnvelope      filterEnvelope4; //xy=842,513
AudioMixer4              stringMixer6;   //xy=995,692
AudioMixer4              stringMixer2;   //xy=999,232
AudioMixer4              stringMixer4;   //xy=999,460
AudioMixer4              stringMixer5;   //xy=1000,580
AudioMixer4              stringMixer3;   //xy=1002,342
AudioMixer4              stringMixer1;   //xy=1003,117
AudioMixer4              filterModMixer3; //xy=1007,399
AudioMixer4              filterModMixer1; //xy=1008,175
AudioMixer4              filterModMixer2; //xy=1012,288
AudioMixer4              filterModMixer4; //xy=1015,519
AudioMixer4              filterModMixer6; //xy=1017,750
AudioMixer4              filterModMixer5; //xy=1020,639
AudioMixer4              vcaSignalMixer; //xy=1020,814
AudioFilterStateVariable filter3;        //xy=1156,372
AudioFilterStateVariable filter1;        //xy=1157,156
AudioFilterStateVariable filter2;        //xy=1157,276
AudioFilterStateVariable filter5;        //xy=1161,573
AudioFilterStateVariable filter6;        //xy=1161,679
AudioFilterStateVariable filter4;        //xy=1163,468
AudioMixer4              stringGroupMixer1; //xy=1341,255
AudioMixer4              stringGroupMixer2; //xy=1341,550
AudioMixer4              stringGroupMixerMaster; //xy=1474,391
AudioEffectMultiply      vca1;           //xy=1556,503
AudioEffectWaveshaper    waveshape1;     //xy=1657,437
AudioMixer4              distortionMixer; //xy=1789,494
AudioEffectBitcrusher    bitcrusher1;    //xy=1924,424
AudioPlayMemory          startSound;     //xy=1972,326
AudioPlayQueue           glitch;         //xy=1993,503
AudioMixer4              finalMixer;     //xy=2111,428
AudioOutputI2S           i2s1;           //xy=2283,315
AudioAnalyzePeak         peak1;          //xy=2288,527
AudioRecordQueue         glitchRecord;   //xy=2321,426
AudioConnection          patchCord1(lfo2, 0, squareWaveSmoothingFilter, 0);
AudioConnection          patchCord2(lfo2, queue1);
AudioConnection          patchCord3(squareWaveSmoothingFilter, 0, vcaSignalMixer, 2);
AudioConnection          patchCord4(squareWaveSmoothingFilter, 0, lfo1FreqModMixer, 0);
AudioConnection          patchCord5(lfo1FreqModMixer, lfo1);
AudioConnection          patchCord6(filterEnvelopeDC, filterEnvelope1);
AudioConnection          patchCord7(filterEnvelopeDC, filterEnvelope2);
AudioConnection          patchCord8(filterEnvelopeDC, filterEnvelope3);
AudioConnection          patchCord9(filterEnvelopeDC, filterEnvelope4);
AudioConnection          patchCord10(filterEnvelopeDC, filterEnvelope5);
AudioConnection          patchCord11(filterEnvelopeDC, filterEnvelope6);
AudioConnection          patchCord12(lfo1, 0, filterModMixer1, 1);
AudioConnection          patchCord13(lfo1, 0, filterModMixer2, 1);
AudioConnection          patchCord14(lfo1, 0, filterModMixer3, 1);
AudioConnection          patchCord15(lfo1, 0, filterModMixer4, 1);
AudioConnection          patchCord16(lfo1, 0, filterModMixer5, 1);
AudioConnection          patchCord17(lfo1, 0, filterModMixer6, 1);
AudioConnection          patchCord18(lfo1, 0, vcaSignalMixer, 1);
AudioConnection          patchCord19(waveform1B, envelope2);
AudioConnection          patchCord20(waveform1C, envelope3);
AudioConnection          patchCord21(waveform3A, envelope7);
AudioConnection          patchCord22(waveform1A, envelope1);
AudioConnection          patchCord23(waveform2A, envelope4);
AudioConnection          patchCord24(waveform2C, envelope6);
AudioConnection          patchCord25(waveform4A, envelope10);
AudioConnection          patchCord26(waveform4B, envelope11);
AudioConnection          patchCord27(waveform2B, envelope5);
AudioConnection          patchCord28(waveform3C, envelope9);
AudioConnection          patchCord29(waveform3B, envelope8);
AudioConnection          patchCord30(waveform4C, envelope12);
AudioConnection          patchCord31(waveform5C, envelope15);
AudioConnection          patchCord32(waveform5B, envelope14);
AudioConnection          patchCord33(waveform5A, envelope13);
AudioConnection          patchCord34(waveform6A, envelope16);
AudioConnection          patchCord35(waveform6C, envelope18);
AudioConnection          patchCord36(waveform6B, envelope17);
AudioConnection          patchCord37(envelope2, 0, stringMixer1, 1);
AudioConnection          patchCord38(envelope1, 0, stringMixer1, 0);
AudioConnection          patchCord39(envelope3, 0, stringMixer1, 2);
AudioConnection          patchCord40(envelope6, 0, stringMixer2, 2);
AudioConnection          patchCord41(envelope7, 0, stringMixer3, 0);
AudioConnection          patchCord42(envelope8, 0, stringMixer3, 1);
AudioConnection          patchCord43(envelope9, 0, stringMixer3, 2);
AudioConnection          patchCord44(envelope5, 0, stringMixer2, 1);
AudioConnection          patchCord45(envelope4, 0, stringMixer2, 0);
AudioConnection          patchCord46(vcaDC, 0, vcaSignalMixer, 0);
AudioConnection          patchCord47(envelope10, 0, stringMixer4, 0);
AudioConnection          patchCord48(envelope11, 0, stringMixer4, 1);
AudioConnection          patchCord49(envelope12, 0, stringMixer4, 2);
AudioConnection          patchCord50(envelope15, 0, stringMixer5, 2);
AudioConnection          patchCord51(envelope16, 0, stringMixer6, 0);
AudioConnection          patchCord52(envelope17, 0, stringMixer6, 1);
AudioConnection          patchCord53(envelope14, 0, stringMixer5, 1);
AudioConnection          patchCord54(envelope18, 0, stringMixer6, 2);
AudioConnection          patchCord55(envelope13, 0, stringMixer5, 0);
AudioConnection          patchCord56(filterEnvelope1, 0, filterModMixer1, 0);
AudioConnection          patchCord57(filterEnvelope2, 0, filterModMixer2, 0);
AudioConnection          patchCord58(filterEnvelope5, 0, filterModMixer5, 0);
AudioConnection          patchCord59(filterEnvelope6, 0, filterModMixer6, 0);
AudioConnection          patchCord60(filterEnvelope3, 0, filterModMixer3, 0);
AudioConnection          patchCord61(filterEnvelope4, 0, filterModMixer4, 0);
AudioConnection          patchCord62(stringMixer6, 0, filter6, 0);
AudioConnection          patchCord63(stringMixer2, 0, filter2, 0);
AudioConnection          patchCord64(stringMixer4, 0, filter4, 0);
AudioConnection          patchCord65(stringMixer5, 0, filter5, 0);
AudioConnection          patchCord66(stringMixer3, 0, filter3, 0);
AudioConnection          patchCord67(stringMixer1, 0, filter1, 0);
AudioConnection          patchCord68(filterModMixer3, 0, filter3, 1);
AudioConnection          patchCord69(filterModMixer1, 0, filter1, 1);
AudioConnection          patchCord70(filterModMixer2, 0, filter2, 1);
AudioConnection          patchCord71(filterModMixer4, 0, filter4, 1);
AudioConnection          patchCord72(filterModMixer6, 0, filter6, 1);
AudioConnection          patchCord73(filterModMixer5, 0, filter5, 1);
AudioConnection          patchCord74(vcaSignalMixer, 0, vca1, 1);
AudioConnection          patchCord75(filter3, 0, stringGroupMixer1, 2);
AudioConnection          patchCord76(filter1, 0, stringGroupMixer1, 0);
AudioConnection          patchCord77(filter2, 0, stringGroupMixer1, 1);
AudioConnection          patchCord78(filter5, 0, stringGroupMixer2, 1);
AudioConnection          patchCord79(filter6, 0, stringGroupMixer2, 2);
AudioConnection          patchCord80(filter4, 0, stringGroupMixer2, 0);
AudioConnection          patchCord81(stringGroupMixer1, 0, stringGroupMixerMaster, 0);
AudioConnection          patchCord82(stringGroupMixer2, 0, stringGroupMixerMaster, 1);
AudioConnection          patchCord83(stringGroupMixerMaster, 0, vca1, 0);
AudioConnection          patchCord84(vca1, waveshape1);
AudioConnection          patchCord85(vca1, 0, distortionMixer, 1);
AudioConnection          patchCord86(waveshape1, 0, distortionMixer, 0);
AudioConnection          patchCord87(distortionMixer, bitcrusher1);
AudioConnection          patchCord88(distortionMixer, glitchRecord);
AudioConnection          patchCord89(bitcrusher1, 0, finalMixer, 0);
AudioConnection          patchCord90(startSound, 0, finalMixer, 2);
AudioConnection          patchCord91(glitch, 0, finalMixer, 1);
AudioConnection          patchCord92(finalMixer, peak1);
AudioConnection          patchCord93(finalMixer, 0, i2s1, 0);
AudioConnection          patchCord94(finalMixer, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1179,87
// GUItool: end automatically generated code

#include "AudioSampleSega.h"
#include "AudioSampleWindows.h"
#include "AudioSampleWorms.h"
#include "AudioSampleLemmings.h"
#include "AudioSampleMariokart.h"
#include "AudioSamplePrinceofpersia.h"
#include "ParamKnob.h"

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
int EXTRA_FRET_MUX_PIN = 25;
int KILL_SWITCH_PIN = 12;
int KILL_SWITCH_LIGHT_PIN = 10;
int STRING_MUX_PINS[8] = {4,3,2,5,0,6,1,7};
int FRET_MUX_GROUPS[9] = {7,6,3,8,1,5,2,4,0}; // the neck is wired confusingly - this sorts out which multiplexer to read from
int STRING_LIGHT_PINS[6] = {21,20,38,37,36,35};

// define knobs
ParamKnob paramKnobs[32];
int FILTER_CUTOFF_KNOB = 11;
int FILTER_RESONANCE_KNOB = 8;
int FILTER_ATTACK_KNOB = 3;
int FILTER_DECAY_KNOB = 0;
int FILTER_SUSTAIN_KNOB = 1;
int FILTER_RELEASE_KNOB = 2;
int FILTER_ENVELOPE_KNOB = 6;
int WAVE_SELECT_KNOB = 28;
int AMP_ATTACK_KNOB = 13;
int AMP_DECAY_KNOB = 15;
int AMP_SUSTAIN_KNOB = 14;
int AMP_RELEASE_KNOB = 12;
int COARSE_TUNING_KNOB = 18;
int FINE_TUNING_KNOB = 19;
int DISTORTION_KNOB = 7; // distortion is the least good effect on the guitar! replace if short of knobs
int BIT_CRUSH_RESOLUTION_KNOB = 5;
int BIT_CRUSH_RATE_KNOB = 21;
int VOLUME_KNOB = 10;
int PORTAMENTO_KNOB = 9;
int LFO1_FREQUENCY_KNOB = 26;
int LFO2_FREQUENCY_KNOB = 24;
int LFO1_LEVEL_KNOB = 25;
int LFO2_LEVEL_KNOB = 27;
int WHAMMY_KNOB = 16;
int OCTAVE_FADE_KNOB = 20;
int OCTAVE_DELAY_KNOB = 4;
  
//int LFO2_WAVE_SELECT = tempKnobFunction(3,5); // not in use
//int AMP_RELEASE2_KNOB = tempKnobFunction(2,1); // not in use?

// define routing
int LFO1_TO_VCA = 0;
int LFO1_TO_VCF = 1;
int LFO2_TO_VCA = 1;
int LFO2_TO_PITCH = 0;

// lookup tables
int FRET_LOOKUP[NUM_FRET_GROUPS][8] = {
  {1,1,1,1,1,3,1,2},
  {2,2,2,2,4,4,4,4},
  {4,2,3,4,3,3,3,3},
  {5,5,5,5,5,7,5,6},
  {6,6,6,6,8,8,8,8},
  {8,6,7,8,7,7,7,7},
  {8,8,8,8,8,11,8,10},
  {10,10,10,10,12,12,12,12},
  {12,10,11,12,11,11,11,11}
};
int STRING_LOOKUP[NUM_FRET_GROUPS][8] = {
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2},
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2},
  {2,1,0,3,4,0,5,5},
  {3,2,1,4,0,4,1,3},
  {5,0,1,2,5,3,4,2}
};
//int guitarTuning[6] = {-2,5,10,14,17,22};
int guitarTuning[6] = {0,5,10,15,19,24};

// knob response curves
int INT_SQUARE_RESPONSE_CURVE[1023];
float FLOAT_RESPONSE_CURVE[1023];

bool strings[6] = {false,false,false,false,false,false};
float targetFrequencies[6] = {440,440,440,440,440,440};
float currentFrequencies[6] = {440,440,440,440,440,440};
int knobValues[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int stringLights[6] = {0,0,0,0,0,0};

int touchThreshold = 20000; // was 1200 with nscan=2, prescale=1, maybe 20000 or so at nscan=9, prescale=2
int fretTouchThreshold = 15000;
int touchTimeLimit = 50 * 1000; // in microseconds, apparently

int nextRelease[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextNote[18] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int nextFilterRelease[6] = {-1,-1,-1,-1,-1,-1};

float maxPeak = 0.0;

// adjustable values
float ampAttack = 0;
float ampDecay = 50;
float ampSustain = 0.3;
bool useAmpReleaseLong = true;
float ampReleaseLong = 3000; // for when a string is plucked
float ampReleaseShort = 0; // for when a string is muted
float ampRelease = 50;
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
float mainVolume = 0.3;
float bitCrushRate = 44100;
float bitCrushResolution = 16;
float waveSelectRaw = 0;
float lfoWaveSelectRaw = 0;
float oscPulseWidth = 0.5;
int waveSelect = 0;
int waveSelectPrevious = waveSelect;
int lfoWaveSelect = 0;
int lfoWaveSelectPrevious = lfoWaveSelect;
float whammy = 1;
float coarseTuning = 1;
float fineTuning = 1;
int lfo1Dest = LFO1_TO_VCA;
int lfo2Dest = LFO2_TO_VCA;
bool glitchMode = false;
bool safeMode = false;

AudioSynthWaveform* oscillators[18];
AudioEffectEnvelope* envelopes[18];
AudioFilterStateVariable* filters[6];
AudioEffectEnvelope* filterEnvelopes[6];
AudioMixer4* stringMixers[6];
AudioMixer4* filterModMixers[6];

float WAVESHAPE_EXAMPLE[17] = {
  -0.14,
  -0.14,
  -0.14,
  -0.14,
  -0.14,
  -0.14,
  -0.13,
  -0.1,
  0,
  0.1,
  0.13,
  0.14,
  0.14,
  0.14,
  0.14,
  0.14,
  0.14
};

bool filterEnvOn = true;

void setup() {
  randomSeed(analogRead(14)); // i think 14 is fine?
  
  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);
  sgtl5000_1.lineOutLevel(31);
  finalMixer.gain(2,0.2);

  Serial.begin(9600);
  Serial.println("initialised");

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
  pinMode(KILL_SWITCH_PIN, INPUT_PULLUP);
  pinMode(KILL_SWITCH_LIGHT_PIN, OUTPUT);
  pinMode(STRING_PIN, INPUT_PULLUP);
  pinMode(FRET_PIN, INPUT_PULLUP);
  pinMode(DIGITAL_SENSOR_PIN, INPUT);
  pinMode(EXTRA_FRET_MUX_PIN, INPUT_PULLUP);
   
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

  Serial.println("debug 1");

  paramKnobs[FILTER_CUTOFF_KNOB].init(1, 10000, 500, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_RESONANCE_KNOB].init(0.7, 10, 3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FILTER_ATTACK_KNOB].init(0, 1000, 5, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_DECAY_KNOB].init(0, 1000, 5, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[FILTER_SUSTAIN_KNOB].init(0, 1, 0.2, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FILTER_ENVELOPE_KNOB].init(0, 1, 0.3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[AMP_ATTACK_KNOB].init(0, 1000, 0.1, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[AMP_DECAY_KNOB].init(0, 1000, 100, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[AMP_SUSTAIN_KNOB].init(0, 1, 0.3, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[AMP_RELEASE_KNOB].init(0, 10000, 20000, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[BIT_CRUSH_RESOLUTION_KNOB].init(2, 16, 16, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[BIT_CRUSH_RATE_KNOB].init(1, 44100, 44100, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO1_LEVEL_KNOB].init(0, 1, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO2_LEVEL_KNOB].init(0, 1, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[LFO1_FREQUENCY_KNOB].init(0.5, 10000, 2, ParamKnob::HEXIC_RESPONSE);
  paramKnobs[LFO2_FREQUENCY_KNOB].init(0.5, 10000, 3, ParamKnob::HEXIC_RESPONSE);
  //paramKnobs[LFO2_WAVE_SELECT].init(0, 4.99, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[WHAMMY_KNOB].init(0, 1, 1, ParamKnob::WHAMMY_RESPONSE); // slightly weird hack involving init parameters not matching actual values due to funky response curve
  paramKnobs[OCTAVE_FADE_KNOB].init(0, 1, 0.25, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[OCTAVE_DELAY_KNOB].init(0, 1000, 0, ParamKnob::QUADRATIC_RESPONSE);
  paramKnobs[PORTAMENTO_KNOB].init(0, 55, 50, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[WAVE_SELECT_KNOB].init(0, 4.99, 0, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[VOLUME_KNOB].init(0, 1, 0.5, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[COARSE_TUNING_KNOB].init(0.5, 2, 1, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[FINE_TUNING_KNOB].init(0.9, 1.1, 1, ParamKnob::LINEAR_RESPONSE);
  paramKnobs[DISTORTION_KNOB].init(0, 1, 0, ParamKnob::LINEAR_RESPONSE);

  Serial.println("debug 2");
  
  for(int i=0;i<18;i++) {
    oscillators[i]->begin(0.1,getFreq(44+5*i),getWaveform(waveSelect));
    Serial.println("debug 4");
    envelopes[i]->attack(ampAttack);
    envelopes[i]->decay(ampDecay);
    envelopes[i]->sustain(ampSustain);
    envelopes[i]->release(ampRelease);
    Serial.println("debug 5");
    if(i<6) {
      filters[i]->frequency(filterCutoff);
      filters[i]->resonance(filterResonance);
      filters[i]->octaveControl(5);
      Serial.println("debug 6");
      if(filterEnvOn) {
      filterEnvelopes[i]->attack(filterAttack);
      filterEnvelopes[i]->decay(filterDecay);
      filterEnvelopes[i]->sustain(filterSustain);
      filterEnvelopes[i]->release(filterRelease);
      }
    }
  }

  filterEnvelopeDC.amplitude(1);
  vcaDC.amplitude(1);

  squareWaveSmoothingFilter.frequency(1000);
  lfo2.begin(1,5,WAVEFORM_SINE);
  lfo1.amplitude(1);
  lfo1.frequency(3);
  vcaSignalMixer.gain(1,0);
  vcaSignalMixer.gain(2,0);
  bitcrusher1.bits(16);
  bitcrusher1.sampleRate(44100);
  waveshape1.shape(WAVESHAPE_EXAMPLE, 17);
  distortionMixer.gain(0,0.5*distortionLevel);
  distortionMixer.gain(1,0.5*(1-distortionLevel));
  
  //switch(random(6)) {
  switch(0) {
    case 0:
    startSound.play(AudioSampleSega);
    break;
    case 1:
    startSound.play(AudioSampleWindows);
    break;
    case 2:
    startSound.play(AudioSampleWorms);
    break;
    case 3:
    startSound.play(AudioSampleMariokart);
    break;
    case 4:
    startSound.play(AudioSamplePrinceofpersia);
    break;
    case 5:
    startSound.play(AudioSampleLemmings);
    break;
  }

  delay(3000);

  //glitchRecord.begin();
  queue1.begin();
  
}

bool isTouched;
long timeStart;
long timeTotal;
int thisString;
int thisFret;
bool isFirstNote = true;
int loopTime = 80; // rough guess for first loop for now
int loopCount = 0;
int testNote = 0;
int lastStringChange[6] = {0,0,0,0,0,0};
int maxKnob = 32;
float pitchModulation = 1.0;
bool stringPullOff[6] = {false, false, false, false, false, false};
int previousStringPositions[6] = {0,0,0,0,0,0};
void loop() {

  int capacitance;
  bool fretTouched;
  int stringPositions[6] = {0,0,0,0,0,0};
  bool stringTouched;
  int digitalReading;
  bool stringTriggered[6] = {false, false, false, false, false, false};

  timeStart = millis();

  loopCount = (loopCount + 1) % 200;
  if(loopCount == 0) testNote = (testNote + 1) % 6;

  for(int i=0;i<maxKnob;i++) {
    paramKnobs[i].isActive = !safeMode;
  }
  //paramKnobs[LFO2_WAVE_SELECT].isActive = false;

  // 9 iterations, 1 for each multiplexer
  // yellow wires
  for(int i = 0; i < 8; i ++) {
    
    digitalWrite(SELECT_PINS_I[0], bitRead(i, 0));
    digitalWrite(SELECT_PINS_I[1], bitRead(i, 1));
    digitalWrite(SELECT_PINS_I[2], bitRead(i, 2));

    // 8 iterations, 1 for each multiplexer channel
    // green wires
    for(int j = 0; j < 8; j ++) {
      digitalWrite(SELECT_PINS_J[0], bitRead(j, 0));
      digitalWrite(SELECT_PINS_J[1], bitRead(j, 1));
      digitalWrite(SELECT_PINS_J[2], bitRead(j, 2));

      delayMicroseconds(10); // stops everything from breaking

      // this is hacky, but just roll with it
      // there are nine multiplexers in the neck, but only eight channels to read them
      // so the ninth neck multiplexer is read by a separate pin
      // i tried not to use copy-pasted repeated code but it kept breaking so i gave up

      thisString = STRING_LOOKUP[FRET_MUX_GROUPS[i]][j];
      thisFret = FRET_LOOKUP[FRET_MUX_GROUPS[i]][j];

      fretTouched = !digitalRead(FRET_PIN);
      
      if(fretTouched) {
        stringPositions[thisString] = max(stringPositions[thisString], thisFret);
      }

      if(i==0) {

        /*  Documenting this deep weirdness here. Sometimes (about half the time?)
         *  the fret number comes back as -1 for the D, G, B and E strings.
         *  But now I can't reproduce the error!! Agh! Okay, going to leave the
         *  serial prints in just in case it does it again. Take these out later.
         */
        
        thisString = STRING_LOOKUP[FRET_MUX_GROUPS[8]][j];
        thisFret = FRET_LOOKUP[FRET_MUX_GROUPS[8]][j];
  
        fretTouched = !digitalRead(EXTRA_FRET_MUX_PIN);
        
        if(fretTouched) {
          stringPositions[thisString] = max(stringPositions[thisString], thisFret);
        }
      }

      if(i==0) {
        thisString = STRING_MUX_PINS[j];
        if(thisString<6) {
          // new logic goes here
          if(millis()-lastStringChange[thisString] > 30) {
            stringTouched = !digitalRead(STRING_PIN);
            if(stringTouched != strings[thisString] || stringPullOff[thisString]) {
              // change detected
              lastStringChange[thisString] = millis();
              strings[thisString] = stringTouched;
              if(stringTouched || stringPullOff[thisString]) {
                // mute string
                for(int k=0;k<3;k++) {
                  envelopes[thisString+k*6]->release(ampReleaseShort);
                  envelopes[thisString+k*6]->noteOff();
                  nextRelease[thisString+k*6]=-1;
                }
                filterEnvelopes[thisString]->noteOff();
                nextFilterRelease[thisString]=-1;
              } else {
                // schedule notes
                stringLights[thisString] = 255;
                for(int k=0;k<3;k++) {
                  nextNote[thisString+k*6] = millis() + k*octaveDelay;
                  nextRelease[thisString+k*6]=-1;
                  nextFilterRelease[thisString+k*6]=-1;
                }
              }
            }
          }
          for(int k=0;k<3;k++) {
            if(nextNote[thisString+k*6]!=-1 && millis()>=nextNote[thisString+k*6]) {
              envelopes[thisString+k*6]->release(ampReleaseLong);
              envelopes[thisString+k*6]->noteOn();
              nextRelease[thisString+k*6] = millis() + ampAttack + ampDecay;
              if(k==0) {
                // trigger filter envelope
                filterEnvelopes[thisString]->noteOn();
                nextFilterRelease[thisString] = millis() + filterAttack + filterDecay;
                // record that note was triggered this loop
                stringTriggered[thisString] = true; // not actually used just yet though
              }
              nextNote[thisString+k*6] = -1;
            } else if(nextRelease[thisString+k*6]!=-1 && millis()>=nextRelease[thisString+k*6]) {
              envelopes[thisString+k*6]->noteOff();
              nextRelease[thisString+k*6]=-1;
            }
          }
          if(nextFilterRelease[thisString]!=-1 && millis()>=nextFilterRelease[thisString]) {
            filterEnvelopes[thisString]->noteOff();
            nextFilterRelease[thisString]=-1;
          }
        }
        killSwitch = !digitalRead(KILL_SWITCH_PIN);
        //killSwitch = false;
        stringGroupMixerMaster.gain(0,killSwitch?0:1);
        stringGroupMixerMaster.gain(1,killSwitch?0:1);
      }

      if(j<4) {
        if(j*8+i<maxKnob) paramKnobs[j*8+i].setValue(analogRead(ANALOG_SENSOR_PINS[j]));
        //if(paramKnobs[j*8+i].isChanged()) Serial.println(j*8+i);
      }
    }

    // toggle switches
    digitalReading = digitalRead(DIGITAL_SENSOR_PIN);
    // from left to right, 6, 4, 1, ?, ?
    switch(i) {
      case 6:
      lfo1Dest = digitalReading ? LFO1_TO_VCA : LFO1_TO_VCF;
      break;

      case 4:
      lfo2Dest = digitalReading ? LFO2_TO_VCA : LFO2_TO_PITCH;
      break;

      case 2:
      //safeMode = digitalReading;
      //safeMode = true;
      break;

      case 3:
      //glitchMode = digitalReading;
      break;
    }
  }

  for(int i=0;i<6;i++) {
    //Serial.print(stringPositions[i]);
    //Serial.print("\t");
  }
  //Serial.println("");

  // record glitch data
  while(glitchRecord.available()) {
    glitchRecord.readBuffer();
    glitchRecord.freeBuffer();
  }

  filterCutoff = paramKnobs[FILTER_CUTOFF_KNOB].getCurrentValue();
  filterResonance = paramKnobs[FILTER_RESONANCE_KNOB].getCurrentValue();
  filterAttack = paramKnobs[FILTER_ATTACK_KNOB].getCurrentValue();
  filterDecay = paramKnobs[FILTER_DECAY_KNOB].getCurrentValue();
  filterSustain = paramKnobs[FILTER_SUSTAIN_KNOB].getCurrentValue();
  filterEnvelopeLevel = paramKnobs[FILTER_ENVELOPE_KNOB].getCurrentValue();
  ampAttack = paramKnobs[AMP_ATTACK_KNOB].getCurrentValue();
  ampDecay = paramKnobs[AMP_DECAY_KNOB].getCurrentValue();
  ampSustain = paramKnobs[AMP_SUSTAIN_KNOB].getCurrentValue();
  ampReleaseLong = paramKnobs[AMP_RELEASE_KNOB].getCurrentValue();
  bitCrushResolution = paramKnobs[BIT_CRUSH_RESOLUTION_KNOB].getCurrentValue();
  bitCrushRate = paramKnobs[BIT_CRUSH_RATE_KNOB].getCurrentValue();
  lfo1Level = paramKnobs[LFO1_LEVEL_KNOB].getCurrentValue();
  lfo2Level = paramKnobs[LFO2_LEVEL_KNOB].getCurrentValue();
  lfo1Frequency = paramKnobs[LFO1_FREQUENCY_KNOB].getCurrentValue();
  lfo2Frequency = paramKnobs[LFO2_FREQUENCY_KNOB].getCurrentValue();
  portamento = paramKnobs[PORTAMENTO_KNOB].getCurrentValue();
  whammy = paramKnobs[WHAMMY_KNOB].getCurrentValue();
  octaveFade = paramKnobs[OCTAVE_FADE_KNOB].getCurrentValue();
  octaveDelay = paramKnobs[OCTAVE_DELAY_KNOB].getCurrentValue();
  waveSelectRaw = paramKnobs[WAVE_SELECT_KNOB].getCurrentValue();
  lfoWaveSelectRaw = 0;
  mainVolume = paramKnobs[VOLUME_KNOB].getCurrentValue();
  coarseTuning = paramKnobs[COARSE_TUNING_KNOB].getCurrentValue();
  fineTuning = paramKnobs[FINE_TUNING_KNOB].getCurrentValue();
  distortionLevel = paramKnobs[DISTORTION_KNOB].getCurrentValue();
  
  // do stuff with parameters
  waveSelectPrevious = waveSelect;
  waveSelect = floor(waveSelectRaw);
  lfoWaveSelectPrevious = lfoWaveSelect;
  lfoWaveSelect = floor(lfoWaveSelectRaw);
  oscPulseWidth = max(0,min(1,waveSelectRaw-4));
  ampRelease = useAmpReleaseLong?ampReleaseLong:ampReleaseShort;
  adjustOctaveVolumes();
  bitcrusher1.bits(bitCrushResolution);
  bitcrusher1.sampleRate(bitCrushRate);
  distortionMixer.gain(0,distortionLevel);
  distortionMixer.gain(1,1-distortionLevel);
  finalMixer.gain(0,glitchMode?0:mainVolume*0.3);
  finalMixer.gain(1,glitchMode?mainVolume*0.3:0);
  finalMixer.gain(2,0.3*mainVolume);
  if(lfoWaveSelect!=lfoWaveSelectPrevious) lfo2.begin(getWaveform(lfoWaveSelect));
  lfo1.frequency(lfo1Frequency);
  lfo2.frequency(lfo2Frequency);

  // do funky vca calculation
  float vcaMultiplier = 0.5;
  float vcaLFO1Level = lfo1Dest == LFO1_TO_VCA ? lfo1Level : 0;
  float vcaLFO2Level = lfo2Dest == LFO2_TO_VCA ? lfo2Level : 0;
  if(vcaLFO1Level+vcaLFO2Level>1) {
    vcaMultiplier = 0.5/(vcaLFO1Level+vcaLFO2Level);
  }
  vcaSignalMixer.gain(0,1-vcaMultiplier*(vcaLFO1Level+vcaLFO2Level));
  vcaSignalMixer.gain(1,vcaMultiplier*vcaLFO1Level);
  vcaSignalMixer.gain(2,vcaMultiplier*vcaLFO2Level);

  // lfo freq mod
  lfo1FreqModMixer.gain(0,0);

  // lfo pitch mod
  if(queue1.available() > 0) {
    pitchModulation = 1 + lfo2Level * lfo2Level * lfo2Level * queue1.readBuffer()[0] / 32768.0;
    queue1.freeBuffer();
  }
  if(lfo2Dest != LFO2_TO_PITCH) pitchModulation = 1;
  
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
    stringPullOff[i] = (stringPositions[i] == 0 && previousStringPositions[i] > 0);
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
    oscillators[i]->frequency(whammy*coarseTuning*fineTuning*pitchModulation*currentFrequencies[i]);
    oscillators[i+6]->frequency(2*whammy*coarseTuning*fineTuning*pitchModulation*currentFrequencies[i]);
    oscillators[i+12]->frequency(4*whammy*coarseTuning*fineTuning*pitchModulation*currentFrequencies[i]);
    if(waveSelect==4) {
      oscillators[i]->pulseWidth(oscPulseWidth);
      oscillators[i+6]->pulseWidth(oscPulseWidth);
      oscillators[i+12]->pulseWidth(oscPulseWidth);
    }
    for(int j=0;j<3;j++) {
      envelopes[i+6*j]->attack(ampAttack);
      envelopes[i+6*j]->decay(ampDecay);
      envelopes[i+6*j]->sustain(ampSustain);
    }

    // filters
    filters[i]->frequency(filterCutoff);
    filters[i]->resonance(filterResonance);
    if(filterEnvOn){
    filterEnvelopes[i]->attack(filterAttack);
    filterEnvelopes[i]->decay(filterDecay);
    filterEnvelopes[i]->sustain(filterSustain);
    filterEnvelopes[i]->release(filterRelease);
    }
    filterModMixers[i]->gain(0, filterEnvelopeLevel);
    filterModMixers[i]->gain(1, lfo1Dest==LFO1_TO_VCF?lfo1Level:0);

    // fade LEDs
    if(stringLights[i]>0) {
      stringLights[i] -= 1; // this will need to be linked to loop time
      analogWrite(STRING_LIGHT_PINS[i], stringLights[i]);
    } else {
      digitalWrite(STRING_LIGHT_PINS[i], LOW);
    }

    // record string positions for next time
    previousStringPositions[i] = stringPositions[i];
  }
  timeTotal = millis() - timeStart;
  loopTime = timeTotal;
  //Serial.print("TIME:");
  //Serial.println(timeTotal);
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

void adjustOctaveVolumes() {
  float reduction = 1 - 0.4 * octaveFade; // slight reduction in volume to compensate for more oscillators
  for(int i=0;i<6;i++) {
    stringMixers[i]->gain(0,reduction);
    stringMixers[i]->gain(1,reduction*constrain(octaveFade*2,0,1));
    stringMixers[i]->gain(2,reduction*constrain(octaveFade*2-1,0,1));
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
