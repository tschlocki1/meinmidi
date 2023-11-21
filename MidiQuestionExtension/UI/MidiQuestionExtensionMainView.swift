//
//  MidiQuestionExtensionMainView.swift
//  MidiQuestionExtension
//
//  Created by Tim Schlockermann on 21.11.23.
//

import SwiftUI

struct MidiQuestionExtensionMainView: View {
    var parameterTree: ObservableAUParameterGroup
    
    var body: some View {
        VStack {
            ParameterSlider(param: parameterTree.global.midiNoteNumber)
                .padding()
            MomentaryButton(
                "Play note",
                param: parameterTree.global.sendNote
            )
        }
    }
}
