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
 //Aquesta és la meva frase
 punt();  //A
 ratlla();
 espaiL();
 ratlla(); //Q
 ratlla();
 punt();
 ratlla();
 espaiL();
 punt(); //U
 punt();
 ratlla();
 espaiL();
 punt(); //E
 espaiL();
 punt(); //S
 punt();
 punt();
 espaiL();
 ratlla(); //T
 espaiL();
 punt(); //A
 ratlla();
 
 espaiP();

 punt(); //E
 espaiL();
 punt(); //S
 punt();
 punt();
 espaiP();

 punt(); //L
 ratlla();
 punt();
 punt();
 espaiL();
 punt(); //A
 ratlla();
 espaiP();

 ratlla(); //M
 ratlla();
 espaiL();
 punt(); //E
 espaiL();
 punt(); //V
 punt();
 punt();
 ratlla();
 espaiL();
 punt(); //A
 ratlla();
 espaiP();

 punt(); //F
 punt();
 ratlla();
 punt();
 espaiL();
 punt(); //R
 ratlla();
 punt();
 espaiL();
 punt(); //A
 ratlla();
 espaiL();
 punt(); //S
 punt();
 punt();
 espaiL();
 punt(); //E
 espaiP();
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
