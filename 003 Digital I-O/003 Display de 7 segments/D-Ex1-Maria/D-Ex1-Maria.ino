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

 digitalWrite(segA, HIGH);  //M
 digitalWrite(segB, LOW);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, LOW);

 delay(t);
 a();
 

 delay(t);

 digitalWrite(segA, LOW);   //R
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, LOW);
 digitalWrite(segG, HIGH);
 
 delay(t);

 digitalWrite(segA, LOW);   //I 
 digitalWrite(segB, LOW);
 digitalWrite(segC, LOW);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, LOW); 

 delay(t);
 
 a();

 delay(t);

 digitalWrite(segA, LOW);   //R
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

void a()
{
 digitalWrite(segA, HIGH);   //A
 digitalWrite(segB, HIGH);
 digitalWrite(segC, HIGH);
 digitalWrite(segD, LOW);
 digitalWrite(segE, HIGH);
 digitalWrite(segF, HIGH);
 digitalWrite(segG, HIGH);  
}