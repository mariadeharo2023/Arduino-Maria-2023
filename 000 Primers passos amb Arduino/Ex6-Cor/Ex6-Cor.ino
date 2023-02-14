void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(600);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(444);   
  digitalWrite(LED_BUILTIN, HIGH);
  delay(259);
  digitalWrite(LED_BUILTIN, LOW);
  delay(800);
}
