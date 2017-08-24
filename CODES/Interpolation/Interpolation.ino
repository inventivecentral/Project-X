/*********************************
INTERPOLATION

  
  The circuit:
   POT , LED

  By Author: PROJECT X

**********************************/



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(0);

  val = map(val, 0, 1023, 0, 255);

  analogWrite(9, val);

  Serial.print(val);
  
  delay(1);
}
