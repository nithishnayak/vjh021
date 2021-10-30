// C++ code
//
int pinsensor=2;
int pin_led=12;
int pinbuzz=13;
int pir_sensor=0;
void setup()
{
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
 
  
}
void loop()
{  
  pir_sensor=digitalRead(pinsensor);
  if(pir_sensor==HIGH)
  {
   digitalWrite(pin_led,HIGH);
   tone(pinbuzz,800,200);
    
  }
  
 digitalWrite(pin_led,LOW); 
}
 