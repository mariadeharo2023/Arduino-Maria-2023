/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                    Control Structures                       **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************
int tempaigua= 101;

//*********************** VARIABLES *****************************



//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempaigua <90)
  {
    Serial.print("Aigua encara no bull.");
  } 
  else if(tempaigua >= 90 && tempaigua <100)
  {
    Serial.print("Aigua a punt de bullir.");
  }  
  else if(tempaigua = 100)
  {
    Serial.print("Aigua a 100C.");
  }
  else
  {
    Serial.print("Aigua bullint.");
  }
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************