#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_E4, NOTE_B4, NOTE_B4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_E4, 0,
  NOTE_E4, NOTE_B4, NOTE_B4, NOTE_FS4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_FS4, NOTE_E4, 0,
  NOTE_E4, NOTE_B4, NOTE_A4, NOTE_E4, NOTE_FS4, NOTE_D4, NOTE_D4, NOTE_A4, NOTE_G4, NOTE_C4, 0, 0, 
  NOTE_B3, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_A4, NOTE_DS4, 0, 0
};

// note durations: 4 = quarter note:
int noteDurations = 4;

void setup() {
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 50; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    int noteDuration = 1000 / noteDurations;
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }
}

void loop() {
  // no need to repeat the melody.
}
