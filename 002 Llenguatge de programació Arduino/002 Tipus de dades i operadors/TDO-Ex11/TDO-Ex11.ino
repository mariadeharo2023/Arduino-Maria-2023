/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Maths are fun                          **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
long gb = 100;
long mb;
long kb;
long real_mb;
long real_kb;
long missing;
long teoric = 1024;
long real = 1000;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
 Serial.begin(9600);

 mb= gb * teoric;              //passa de gb a mb teòrics
 kb= mb * teoric;              //passa de mb a kb teòrics

 real_mb= gb * real;         //passa de gb a mb reals
 real_kb= real_mb * real;    //passa de mb a kb reals

 missing= kb - real_kb;    //resta els kb dels kb teòrics

 Serial.print("Your HD is ");
 Serial.print(gb);
 Serial.println(" Gb large."); 
 Serial.print("In theory, it can store ");
 Serial.print(mb);
 Serial.print(" Megabytes, ");
 Serial.print(kb);
 Serial.println(" Kilobytes.");
 Serial.print("But ir really only stores ");
 Serial.print(real_mb);
 Serial.print(" Megabytes, ");
 Serial.print(real_kb);
 Serial.println(" Kilobytes");
 Serial.print(missing);
 Serial.print(" Kilobytes!");
 
 }
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************