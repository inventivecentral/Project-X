/*********************************
TWO PHASE MOTOR
  
  The circuit:
KEYPAD
  By Author: SIBIN KS

**********************************/


int keypad()
{
     int x;
 x = analogRead(0);
 if (x > 900) {
  RIGHT_KEY=HIGH;
 }
 else if (x > 800) {
   UP_KEY=HIGH;
 }
 else if (x > 600){
   DOWN_KEY=HIGH;
 }
 else if (x > 480){
   LEFT_KEY=HIGH;
 }
 else if (x >400){
   SELECT_KEY=HIGH;
 }
 else
 {
     RIGHT_KEY=LOW;
     LEFT_KEY=LOW;
     UP_KEY=LOW;
     DOWN_KEY=LOW;
     SELECT_KEY=LOW;
 }
}

