/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   Qualificació energètica                   **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 24/02/2023**
****************************************************************/
//************************ INCLUDE ******************************
float qual = 5;

//*********************** VARIABLES *****************************



//************************* SETUP *******************************
void setup() {       
       
  Serial.begin(9600);

  if (qual<3.5)
{
  Serial.print("A");
}
  else if(qual<6.5 && qual> 3.5)
  {
    Serial.print("B");
  }

  else if(qual<11.1 && qual> 6.5)
  {
    Serial.print("C");    
  }
  else if(qual< 17.7 && qual> 11.1)
  {
    Serial.print("D");
  }
  else if(qual< 38.2 && qual> 17.7)
  {
    Serial.print("E");
  }
  else if(qual< 43.2 && qual> 38.2)
  {
    Serial.print("F");
  }
  else
  {
    Serial.print("G");
  }
}
//************************* LOOP ********************************
void loop() {              
 

}
//************************** FUNCTIONS **************************