/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**            Estructures de control de repetició              **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 28/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int t = 2;
//************************* SETUP *******************************
void setup() {
  Serial.begin(9600);     // set up Serial library at 9600 bps
  for (t=2; t<=10; t++)
  {
  Serial.print("Taula de multiplicar del ");
  Serial.println(t);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(t);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(t*i);    
  }  
  }  
}

//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************