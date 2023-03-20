/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       005 Sirena                            **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: xx/xx/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte xiulet = 9;
const byte pot0 = A0;
int valPot0;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 pinMode(xiulet, OUTPUT);
 pinMode(pot0, INPUT);
 Serial.begin(9600);
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 valPot0 = analogRead(pot0);

 Serial.println(valPot0);
 
 tone(xiulet, 800, valPot0);

 delay(valPot0*2);

}
//************************** FUNCTIONS **************************