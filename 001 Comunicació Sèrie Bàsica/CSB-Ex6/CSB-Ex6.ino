/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                      Hellow World-5                         **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 13/02/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
float y1;
float y2;
float y3;
//************************* SETUP *******************************
void setup() {              // configura el final de la salida
  Serial.begin(9600);

}
//************************* LOOP ********************************
void loop() {               // inicia el bucle del programa
  
  for(int i=0; i<360; i+=5) {
      y1= 1*sin(i*M_PI/180);
      y2= 2*sin((i+90)*M_PI/180);
      y3=5*(sin(i+180)*M_PI/180);

      Serial.print(y1);
      Serial.print(" ");
      Serial.print(y2);
      Serial.print(" ");
      Serial.println(y3);

      delay(100);

  }

    }
//************************** FUNCTIONS **************************