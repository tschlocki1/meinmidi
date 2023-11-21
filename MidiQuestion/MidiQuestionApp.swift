//
//  MidiQuestionApp.swift
//  MidiQuestion
//
//  Created by Tim Schlockermann on 21.11.23.
//

import CoreMIDI
import SwiftUI

@main
class MidiQuestionApp: App {
    @ObservedObject private var hostModel = AudioUnitHostModel()

    required init() {}

    var body: some Scene {
        WindowGroup {
            ContentView(hostModel: hostModel)
        }
    }
}
