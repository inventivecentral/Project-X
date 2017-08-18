/*********************************
TWO PHASE MOTOR
  
  The circuit:
    serial_keypad

  By Author: SIBIN KS

**********************************/
#include <LiquidCrystal.h>



int RIGHT_KEY;
int LEFT_KEY;
int UP_KEY;
int DOWN_KEY;
int SELECT_KEY;


void setup(){
 
  Serial.begin(9600);

  
}

void loop(){

  keypad();
  lcdkeypad();

     

}



