/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                     Array de 8 LEDs                         **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 03/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led0 = 5;     
const byte buttonPin = 2;
byte buttonState = 0;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
  buttonState = digitalRead(buttonPin);  //llegir l’estat del button i gardar-lo
  if (buttonState == 0)
  {
    digitalWrite(led0, LOW);
  }
  else
  {
    digitalWrite(led0, HIGH);
  }

  delay(200);

}
//************************** FUNCTIONS **************************