/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Maths are fun                         **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
float a = 3;
float b = 2;
float d;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************