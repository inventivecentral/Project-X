/*
 * Written by: Ahmad Saeed Mohammad Saeed
 * mail: ahmad._.saeed@outlook.com
 */
 



#define A        8                     // the pin connected to the wire A of the coil A (or to the H-bridge pin controlling the same wire) 
#define A_bar    9                     // the pin connected to the wire A- of the coil A (or to the H-bridge pin controlling the same wire)
#define B        10                     // the pin connected to the wire B of the coil A (or to the H-bridge pin controlling the same wire)
#define B_bar    11                     // the pin connected to the wire B- of the coil A (or to the H-bridge pin controlling the same wire)
              // smaller values may make the motor produce more speed and less torque
#define stepsPerRevolution 200         // you can the number of steps required to make a complete revolution in the data sheet of your motor

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
 

