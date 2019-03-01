unsigned long last_time;
unsigned long currentMillis ;
int steps_left=4095;
long time;
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
   currentMillis = millis();
  if(currentMillis-last_time>=2000){
    digitalWrite(LED_BUILTIN,!digitalRead(LED_BUILTIN));
    last_time=millis();
  }
}
