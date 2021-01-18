/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
MidiLoggerAudioProcessorEditor::MidiLoggerAudioProcessorEditor (MidiLoggerAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    setSize (400, 300);

    addAndMakeVisible(slider);
    slider.setRange(1.0, 500.0, 1.0);
    slider.setTextValueSuffix(" Hz");
    slider.addListener(this);
}

MidiLoggerAudioProcessorEditor::~MidiLoggerAudioProcessorEditor()
{
}

//==============================================================================
void MidiLoggerAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
    slider.setBounds(10, 10, 380, 50);
}

void MidiLoggerAudioProcessorEditor::resized()
{
}

void MidiLoggerAudioProcessorEditor::sliderValueChanged(juce::Slider *slider)
{
    audioProcessor.setSliderValue(slider->getValue());
}
