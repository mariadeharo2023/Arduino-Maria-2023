/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Mats are fun                           **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int test = 32767;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************