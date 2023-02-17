/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Maths are fun                          **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 17/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int drive_gb = 5;
int drive_mb = 0;
//************************* SETUP *******************************
void setup() {                       // configura el final de la salida
  Serial.begin(9600);                // set up Serial library at 9600 bps
  Serial.print("Your HD is ");       //prints 'Your HD is ' 
  Serial.print(drive_gb);            //prints drive_gab
  Serial.println(" GB large.");      //prints ' GB large'

  drive_mb = 1024 * drive_gb;        //Renames drive_mb as the result of 1024*drieve_gb

  Serial.print("It can store ");     //prints 'It can store '
  Serial.print(drive_mb);            //prints drive_mb
  Serial.println(" Megabytes!");     //prints ' Megabytes!'

}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************