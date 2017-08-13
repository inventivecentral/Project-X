/*
Adafruit Arduino - Lesson 16. Stepper
*/
 
#include <Stepper.h>
 
Stepper motor(512, 8, 9, 10, 11);  
int steps;
int len;
void setup()
{
  motor.setSpeed(30); 
  Serial.begin(9600);

}
 
void loop()
{

  if (Serial.available())
  {
        int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
    len = Serial.parseInt();
    if(steps>0)
    {
    steps = map (len,0,280,0,529);
    }
    else
    steps = map (len,-280,0,-529,0);
    delay(10);
    motor.step(steps);
  }
steps = 0;
len = 0;

}
