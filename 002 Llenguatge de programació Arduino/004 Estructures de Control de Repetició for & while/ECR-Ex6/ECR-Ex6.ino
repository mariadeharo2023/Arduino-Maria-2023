/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**            Estructures de control de repetició              **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 28/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int comptar = 55;
int i = 0;
//************************* SETUP *******************************
void setup() {
   Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <= comptar)
  {
    Serial.print(i);
    Serial.print("-");
    i++;
  }
}

//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************