# Björksdottir
A guitar/synthesizer

## What is it?
A digital polyphonic synthesizer inside a playable guitar-style instrument.

## How does it Work?
The guitar contains a number of touch sensors (to represent the frets and strings), potentiometers (to adjust various parameters of the sound) and buttons/switches. A Teensy 3.6 computer (with a Teensy audio board) runs Arduino code to interpret data from the guitar's sensors (such as which frets are being touched and which strings are being plucked), and generates audio using the Teensy audio library.

## Why is it called Björksdottir?
I was lucky enough to see Björk perform her Biophilia show in Manchester a few years ago. She had commisioned several amazing instruments to be made, and these instruments inspired me to create one of my own. Since this guitar is, in a sense, a daughter of Björk, I have loosely appropriated the Icelandic naming convention and called it Björksdottir.