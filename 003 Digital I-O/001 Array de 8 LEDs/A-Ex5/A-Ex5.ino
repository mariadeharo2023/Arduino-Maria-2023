/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                     Array de 8 LEDs                         **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 06/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led0 = 5;
const byte led1 = 6;
const byte led2 = 7;
const byte led3 = 8;
const byte led4 = 9;
const byte led5 = 10;
const byte led6 = 11;
const byte led7 = 12;
const byte button1 = 2;
byte state;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 
 pinMode(led0, OUTPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);
 pinMode(button1, INPUT);
 
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 
 state = digitalRead(button1);
 Serial.print(state);
 if (state==1)
{ 
 digitalWrite(led0, HIGH);
 digitalWrite(led1, HIGH);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, HIGH);

 delay(500);

 digitalWrite(led0, LOW);
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 digitalWrite(led5, LOW);
 digitalWrite(led6, LOW);
 digitalWrite(led7, LOW);
 
 delay(500);
} 
else 
{
 digitalWrite(led0, HIGH);
 digitalWrite(led1, LOW);
 digitalWrite(led2, HIGH);
 digitalWrite(led3, LOW);
 digitalWrite(led4, HIGH);
 digitalWrite(led5, LOW);
 digitalWrite(led6, HIGH);
 digitalWrite(led7, LOW);

 delay(500);

 digitalWrite(led0, LOW);
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, HIGH);
 digitalWrite(led4, LOW);
 digitalWrite(led5, HIGH);
 digitalWrite(led6, LOW);
 digitalWrite(led7, HIGH);
 
 delay(500);
}
}