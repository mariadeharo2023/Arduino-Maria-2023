/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                         Melodía                             **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 28/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte speakerPin = 9;   // pin for speaker
int tempo = 300;

//int length = 55;
//char notes[] = "drmoolomrmmrdrdrmoolomdrmmrrdffllloomdrdrmoolomdrmmrrd ";
//int beats[] = { 1,1,1,1,1,2,1,1,3,2,1,1,1,1,4,1,1,1,2,1,1,1,2,1,1,1,2,1,1,1,1,1,1,1,1,3,1,1,1,1,1,3,1,1,1,1,2,2,1,1,1,2,1,1,1,1,1};

/*int length = 22;
char notes[] = "llllldsdlossoofmfolsol ";
int beats[] = {3,1,1,3,2,1,1,1,1,1,1,1,3,1,1,3,2,1,2,1,2,3};*/

int length = 25;
char notes[] = "olooloffmfmflmolooloffoom  ";
int beats[] = {3,3,3,1,1,1,2,2,3,3,3,3,3,3,3,3,1,1,1,2,2,2,2,3};

//************************* SETUP *******************************
void setup() {
 pinMode(speakerPin, OUTPUT);
}
//************************* LOOP ********************************
void loop() {
 for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    // pause between notes
    delay(tempo / 2); 
  }
}
//************************** FUNCTIONS **************************
void playTone(int tone, int duration) {
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }
}

void playNote(char note, int duration) {
  char names[] = { 'd', 'r', 'm', 'f', 'o', 'l', 's', 'D' , 'R'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};

  for (int i = 0; i < 9; i++) {
    if (names[i] == note) {
      playTone(tones[i], duration);
    }
  }
}