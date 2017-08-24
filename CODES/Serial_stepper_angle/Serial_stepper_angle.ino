/*********************************
INTERPOLATION

  
  The circuit:
   L298D

  By Author: SIBIN KS

**********************************/

#include <Stepper.h>

Stepper motor(200, 8, 9, 10, 11);

int steps;
int angle;
void setup()
{

  while (!Serial);
  motor.setSpeed(30);
  Serial.begin(9600);

}

void loop()
{
  if (Serial.available())
  {
    angle = Serial.parseInt();
    steps = map (angle, 0, 360, 0, 200);
    motor.step(steps);
  }

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
}
