/*********************************
ONE PHASE STEPPING WITH KEYPAD
  The circuit:
  * L293D/l298N and Arduino
  * stepperr 1.8 deg
  * 
  By author: SIBIN KS

**********************************/



#define A        8                     
#define A_bar    9                     
#define B        10                
#define B_bar    11                    
            

int x= 5000;
int RIGHT_KEY;
int LEFT_KEY;
int UP_KEY;
int DOWN_KEY;
int SELECT_KEY;

 bool flag = 0;
 int count;

int incomingByte = 0;   // for incoming serial data
void setup() {
  pinMode(A, OUTPUT);
  pinMode(A_bar, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(B_bar, OUTPUT);
   Serial.begin(9600);
}


void loop() { 

    keypad();
  //ANTI CLOCK

if(UP_KEY)
{
    digitalWrite(A, LOW);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(A_bar, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, LOW);
    delayMicroseconds (x);
    
}
if(DOWN_KEY)
{
    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(A_bar, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A, LOW);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);
}


  // Counter Direction 
  
/*
    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, LOW);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(A_bar, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A, HIGH);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A, LOW);
    digitalWrite(A_bar, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(B_bar, HIGH);
    delayMicroseconds (x);*/
  
}
 

