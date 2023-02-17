/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                        Mayhs are fun                        **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 17/02/2023**
****************************************************************/
//************************ INCLUDE ******************************
int a = 5, b = 10, c = 20;
int add = 0, multiply = 0, divide = 0, module = 0, subtract = 0;
//*********************** VARIABLES *****************************

//************************* SETUP *******************************
void setup()               // configura el final de la salida
{              
  Serial.begin(9600);     // set up Serial library at 9600 bps

  Serial.println("Here is some math: ");
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  add = a + b;
  Serial.println(add);

  Serial.print("a * c = ");       // multiply
  multiply = a * c;
  Serial.println(multiply);
  
  Serial.print("c / b = ");       // divide
  divide = c / b;
  Serial.println(divide);

  Serial.print("c % b = ");       // module
  module = c % b;
  Serial.println(module);
  
  Serial.print("b - c = ");       // subtract
  subtract = b - c; 
  Serial.println(subtract);
}
//************************* LOOP ********************************
void loop()                // we need it even if we are not using it bc it won't work otherwise
{               

}
//************************** FUNCTIONS **************************