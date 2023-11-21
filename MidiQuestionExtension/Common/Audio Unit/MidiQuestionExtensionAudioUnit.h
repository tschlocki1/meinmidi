//
//  MidiQuestionExtensionAudioUnit.h
//  MidiQuestionExtension
//
//  Created by Tim Schlockermann on 21.11.23.
//

#import <AudioToolbox/AudioToolbox.h>
#import <AVFoundation/AVFoundation.h>

@interface MidiQuestionExtensionAudioUnit : AUAudioUnit
- (void)setupParameterTree:(AUParameterTree *)parameterTree;
@end
