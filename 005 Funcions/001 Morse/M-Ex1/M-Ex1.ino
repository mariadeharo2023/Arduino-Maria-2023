/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                          Morse                              **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 21/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const int sir = 8;

int nota = 1047;
int vel = 10;
//************************* SETUP *******************************
void setup() {
 
}
//************************* LOOP ********************************
void loop() {
 // SOS
  punt(); //S
  punt();
  punt();
  
  espaiL(); //espai lletres

  ratlla(); //O
  ratlla();
  ratlla();

  espaiL(); //espai lletres

  punt(); //S
  punt();
  punt();

  espaiP(); //espai paraula
}
//************************** FUNCTIONS **************************
void punt()
{
  tone(sir, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(sir, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //espai lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //espai paraules
{   
  delay(6*(1000/velocitat));  
}
