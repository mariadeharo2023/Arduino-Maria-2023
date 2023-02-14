/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                        Hello World-2                        **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 10/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************



//************************* SETUP *******************************
void setup()               // configura el final de la salida
{              
 
 Serial.begin(9600);                //obre el port sèrie a 9600bps

}
//************************* LOOP ********************************
void loop()                // inicia el bucle del programa
{               

 Serial.println("Hello Worls!");    //escriu 'Hello World!' amb una línia enmig cada cop
 delay(1000);                       //Esborra el missatge passats 1000ms  

}
//************************** FUNCTIONS **************************