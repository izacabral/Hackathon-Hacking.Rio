#include <SoftwareSerial.h>

SoftwareSerial csft (2, 3); //(rx, tx)

byte signal;

void setup()
{
  csft.begin(9600);
  Serial.begin(9600);
  pinMode(13, INPUT);
}

void loop()
{
 	
  if(digitalRead(13) == HIGH)
  {
     signal = 1;
     csft.write(signal);
  }
  else 
  {
    signal = 0;
    csft.write(signal);
  }
  Serial.println(signal);
  delay(3000);
}