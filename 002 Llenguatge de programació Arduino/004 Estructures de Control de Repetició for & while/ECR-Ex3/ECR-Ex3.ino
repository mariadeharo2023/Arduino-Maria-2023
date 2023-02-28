/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**            Estructures de control de repetició              **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 28/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int num = 10;
//************************* SETUP *******************************
void setup() {
  Serial.begin(9600);
  Serial.println("Ara faré el compte enrere per l'explosió:");
  for (int i=0; i <= 10; i++)
  {
    delay(1000);
    Serial.println(num);
    num = num - 1;  
  }
  Serial.println("B  O  O  O  M !!!");  
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************