//
//  MidiQuestionExtensionParameterAddresses.h
//  MidiQuestionExtension
//
//  Created by Tim Schlockermann on 21.11.23.
//

#pragma once

#include <AudioToolbox/AUParameters.h>

#ifdef __cplusplus
namespace MidiQuestionExtensionParameterAddress {
#endif

typedef NS_ENUM(AUParameterAddress, MidiQuestionExtensionParameterAddress) {
    sendNote = 0,
    midiNoteNumber = 1
};

#ifdef __cplusplus
}
#endif
