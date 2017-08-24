/*********************************
INTERPOLATION

  
  The circuit:
 NIL
  By Author: PROJECT X

**********************************/


int x;
bool i = false;

void setup()
{

  while (!Serial);
  Serial.begin(9600);

}

void loop()
{
  if (Serial.available())
  {
    x = Serial.parseInt();
    i = true;
  }
  if (i == true)
  {
    Serial.println(x);
    i = false;
  }
}
