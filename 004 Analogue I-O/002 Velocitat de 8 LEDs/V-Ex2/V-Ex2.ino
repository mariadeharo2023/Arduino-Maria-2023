/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                    Velocitat de 8 LEDs                      **
**                                                             **
**  NOM: Maria de Haro Luna                    DATA: 13/03/2023**
****************************************************************/
//************************ INCLUDE ******************************


//*********************** VARIABLES *****************************
const byte led0 = 5;
const byte led1 = 6;
const byte led2 = 7;
const byte led3 = 8;
const byte led4 = 9;
const byte led5 = 10;
const byte led6 = 11;
const byte led7 = 12;
const byte pot0 = A0;
unsigned long velocitat = 20;
int valPot0;


//************************* SETUP *******************************
void setup() 
{
Serial.begin(9600);          
pinMode(led0, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(pot0, INPUT);
}
//************************* LOOP ********************************
void loop() 
{               
valPot0 = analogRead(pot0);
Serial.println(valPot0);
velocitat = 10 + valPot0;

digitalWrite(led0, HIGH); //1
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, HIGH);

delay(velocitat);

digitalWrite(led0, HIGH); //2
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, HIGH);
digitalWrite(led7, HIGH);

delay(velocitat);

digitalWrite(led0, LOW); //3
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led7, LOW);

delay(velocitat);

digitalWrite(led0, LOW); //4
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);

delay(velocitat);

digitalWrite(led0, LOW); //5 i 6
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);

delay(velocitat *2);

digitalWrite(led0, LOW); //7
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, HIGH);
digitalWrite(led4, HIGH);
digitalWrite(led5, HIGH);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);

delay(velocitat);

digitalWrite(led0, LOW); //8
digitalWrite(led1, HIGH);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, HIGH);
digitalWrite(led6, HIGH);
digitalWrite(led7, LOW);

delay(velocitat);

digitalWrite(led0, HIGH); //9
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, HIGH);
digitalWrite(led7, HIGH);

delay(velocitat);

digitalWrite(led0, HIGH); //10
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, HIGH);

delay(velocitat);

digitalWrite(led0, LOW); //11 i 12
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
digitalWrite(led4, LOW);
digitalWrite(led5, LOW);
digitalWrite(led6, LOW);
digitalWrite(led7, LOW);

delay(velocitat*2);
}
//************************** FUNCTIONS **************************