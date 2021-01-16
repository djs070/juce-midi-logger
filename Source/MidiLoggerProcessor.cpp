/*
  ==============================================================================

    MidiLoggerProcessor.cpp
    Created: 13 Jan 2021 9:23:45pm
    Author:  David Smith

  ==============================================================================
*/

#include "MidiLoggerProcessor.h"

MidiLoggerProcessor::MidiLoggerProcessor()
{
    //    Do something
}

MidiLoggerProcessor::~MidiLoggerProcessor()
{
    //    Do something
}

// Public methods

void MidiLoggerProcessor::processMidi(juce::MidiBuffer &midiBuffer)
{
    for (auto meta : midiBuffer)
    {
        DBG( meta.getMessage().getDescription() );
    }
}
