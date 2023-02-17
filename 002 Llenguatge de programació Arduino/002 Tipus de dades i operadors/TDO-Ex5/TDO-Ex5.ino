/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Maths are fun                          **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 17/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
int a = 3;
int b = 4;
int h = 0;
int s;
int resultat;
//************************* SETUP *******************************
void setup() {            // configura el final de la salida
 
  Serial.begin(9600);     //arduino-PC
  Serial.println("Lets calculate a hypotenuse:");    //prints 'Lets calculate a hypotenuse'
  Serial.println("a=3");           //prints 'a=3'
  Serial.println("b=4");           //prints 'b=4'
  a= sq(a);                        //does the square of a
  b= sq(b);                        //does the square of b
  s = a+b;                         //adds a to b and names it s
  resultat = sqrt(s);              //does the square root of s and names it resultat
  Serial.print("h=");              //prints 'h='
  Serial.print(resultat);          //prints resultat
  
}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
 

}
//************************** FUNCTIONS **************************