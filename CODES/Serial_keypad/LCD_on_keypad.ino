/*********************************
TWO PHASE MOTOR
  
  The circuit:
    srl.print

  By Author: SIBIN KS

**********************************/

void lcdkeypad()
{
if (RIGHT_KEY==HIGH) {
   
   Serial.println("RIGHT");

  }
  else if (UP_KEY==HIGH) {
    
   Serial.println("UP");

  }
  else if (DOWN_KEY==HIGH){
    
   Serial.println("DOWN");
 
  }
  else if (LEFT_KEY==HIGH){
    
   Serial.println("LEFT");

  }
  else if (SELECT_KEY==HIGH){
    
   Serial.println("SELECT");

  }
  else 
  {
    
Serial.println("000");
  }
}

