/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**            Estructures de control de repetició              **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 28/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int comptar = 11;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  Serial.begin(9600);       
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");    
  }  
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************