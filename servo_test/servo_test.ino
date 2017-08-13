/*
Adafruit Arduino - Lesson 16. Stepper
*/
 
#include <Stepper.h>
 
Stepper motor(512, 8, 9, 10, 11);  
int steps;
int len1;
int len2;
void setup()
{
  motor.setSpeed(30); 
  Serial.begin(9600);
  
  
  Serial.println("Would you like to set axis now? Y/N");
 
  while (!Serial.available()) 
  delay(10);

   if (Serial.read() == 'y' || Serial.read() == 'Y')
 
  // This set of functions allows the user to change the date and time
  {
  Serial.print("Please enter LENGTH one - ");

  len1 = readValue();  
  Serial.println(len1);
  Serial.print("Please enter LENGTH two - ");
  delay(1000);
  len2 = Serial.parseInt();
  Serial.println(len2);
  
  }
}
void loop()
{
Serial.println(len1);
Serial.println(len2);
   // motor.step(steps);
  


  digitalWrite(8,LOW);
    digitalWrite(9,LOW);
      digitalWrite(10,LOW); 
      digitalWrite(11,LOW);
}


int readValue() {
  while (!Serial.available()) delay(10);
  int reading = 0;
  int incomingByte = Serial.parseInt();
  while (incomingByte != '\n') {
    if (incomingByte >= '0' && incomingByte <= "281")
      reading = reading * 10 + (incomingByte - '0');
    else;
    incomingByte = Serial.read();
  }
  Serial.flush();
  return reading;
}
