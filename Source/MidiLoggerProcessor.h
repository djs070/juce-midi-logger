/*
  ==============================================================================

    MidiLoggerProcessor.h
    Created: 13 Jan 2021 9:23:45pm
    Author:  David Smith

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class MidiLoggerProcessor
{
public:
    MidiLoggerProcessor();
    
    ~MidiLoggerProcessor();
    
    void processMidi(juce::MidiBuffer &midiBuffer);
};
