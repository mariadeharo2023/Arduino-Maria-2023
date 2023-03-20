/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       005 Sirena                            **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: xx/xx/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte xiulet = 6;
const int pot1= A0;
const int pot2= A1;
int pot11;
int pot22;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(xiulet, OUTPUT);
 pinMode(pot1, INPUT);
 pinMode(pot2, INPUT);
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa

 pot11 = analogRead(pot1);
 pot22 = analogRead(pot2);

 tone(xiulet, pot11*4, pot22);

 delay(pot22*2);
}
//************************** FUNCTIONS **************************