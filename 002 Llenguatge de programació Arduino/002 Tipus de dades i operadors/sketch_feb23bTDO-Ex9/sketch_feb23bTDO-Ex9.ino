/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Maths are fun                          **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 23/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int drive_gb = 100;
long drive_mb;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  
  Serial.begin(9600);       //set up Serial library at 9600 bps

  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("It can store ");
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");

}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************