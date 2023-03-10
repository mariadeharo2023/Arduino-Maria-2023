/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                                                             **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 10/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led0 = 3;
const byte led1 = 5;
const byte led2 = 6;
const byte led3 = 9;
const byte led4 = 10;
const byte led5 = 11;
const byte button = 2;
unsigned long vloc = 50;
unsigned long velocitat = 500;
int b;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(led0, OUTPUT);
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(led4, OUTPUT);
 pinMode(led5, OUTPUT);
 pinMode(button, INPUT);
}
//************************* LOOP ********************************
void loop() {  
  b = digitalRead(2);
 if (b == 1)
 {
   analogWrite(led0, 0);     // posar PWM del pin 3 a 0
  analogWrite(led1, 0);     // posar PWM del pin 5 a 0
  analogWrite(led2, 0);     // posar PWM del pin 6 a 0
  analogWrite(led3, 0);     // posar PWM del pin 9 a 0
  analogWrite(led4, 0);     // posar PWM del pin 10 a 0
  analogWrite(led5, 0);     // posar PWM del pin 11 a 0
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 255);    // posar PWM del pin 3 a 255
  analogWrite(led1, 255);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 255);    // posar PWM del pin 9 a 255
  analogWrite(led4, 255);    // posar PWM del pin 10 a 255
  analogWrite(led5, 255);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 125);    // posar PWM del pin 3 a 125
  analogWrite(led1, 125);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 125);    // posar PWM del pin 9 a 125
  analogWrite(led4, 125);    // posar PWM del pin 10 a 125
  analogWrite(led5, 125);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60
  
  delay(velocitat);
 }

 else
 {
   analogWrite(led0, 255); //1
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 155); //2
  analogWrite(led1, 255);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 55); //3
  analogWrite(led1, 155);
  analogWrite(led2, 255);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 0); //4
  analogWrite(led1, 55);
  analogWrite(led2, 155);
  analogWrite(led3, 255);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 0); //5
  analogWrite(led1, 0);
  analogWrite(led2, 55);
  analogWrite(led3, 155);
  analogWrite(led4, 255);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 0); //6
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 55);
  analogWrite(led4, 155);
  analogWrite(led5, 255);

  delay(vloc);

  analogWrite(led0, 0); //7
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 55);
  analogWrite(led5, 155);

  delay(vloc);

  analogWrite(led0, 0); //8
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 55);

  delay(vloc);

  analogWrite(led0, 0); //9 i 10
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc*2);

  analogWrite(led0, 0); //11
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 255);

  delay(vloc);

  analogWrite(led0, 0); //12
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 255);
  analogWrite(led5, 155);

  delay(vloc);

  analogWrite(led0, 0); //13
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 255);
  analogWrite(led4, 155);
  analogWrite(led5, 55);

  delay(vloc);

  analogWrite(led0, 0); //14
  analogWrite(led1, 0);
  analogWrite(led2, 255);
  analogWrite(led3, 155);
  analogWrite(led4, 55);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 0); //15
  analogWrite(led1, 255);
  analogWrite(led2, 155);
  analogWrite(led3, 55);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 255); //16
  analogWrite(led1, 155);
  analogWrite(led2, 55);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 155); //17
  analogWrite(led1, 55);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 55); //18
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc);

  analogWrite(led0, 0); //19 i 20
  analogWrite(led1, 0);
  analogWrite(led2, 0);
  analogWrite(led3, 0);
  analogWrite(led4, 0);
  analogWrite(led5, 0);

  delay(vloc*2);
 }

}
//************************** FUNCTIONS **************************