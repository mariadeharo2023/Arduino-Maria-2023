/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                                                             **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 07/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte segA = 5;          // donar nom al pin 5 de l’Arduino
const byte segB = 6;          
const byte segC = 7;          
const byte segD = 8;          
const byte segE = 9;          
const byte segF = 10;         
const byte segG = 11;
int t= 500;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(segA, OUTPUT);
 pinMode(segB, OUTPUT);
 pinMode(segC, OUTPUT);
 pinMode(segD, OUTPUT);
 pinMode(segE, OUTPUT);
 pinMode(segF, OUTPUT);
 pinMode(segG, OUTPUT);

 digitalWrite(segA, HIGH);  //0
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW);

 delay(t);

 digitalWrite(segA, LOW);  //1
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 delay(t);

 digitalWrite(segA, HIGH);  //2
 digitalWrite(segB, HIGH);
 digitalWrite(segC, LOW);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, HIGH);  //3
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, LOW);  //4
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, HIGH);  //5
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, HIGH);  //6
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, HIGH);  //7
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 delay(t);

 digitalWrite(segA, HIGH);  //8
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, HIGH);  //9
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, HIGH);
 digitalWrite(segE, LOW);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);

 delay(t);

 digitalWrite(segA, LOW);  //stop
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, LOW);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************