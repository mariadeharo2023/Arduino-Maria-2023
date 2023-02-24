/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                    Control Structures                       **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************
int tempaigua= 52;

//*********************** VARIABLES *****************************



//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempaigua > 100)
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  else
  {
    Serial.print("Aigua encara no bull.");
  }
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************