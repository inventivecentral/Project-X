/*********************************
  ONE PHA1SE MOTOR
  
  The circuit:
    L293D/l298N A1nd A1rduino
    stepperr 1.8 deg

  B1y A1uthor: SIB1IN KS

**********************************/

#define A1    8                    
#define A1    9                     
#define B11   10                     
#define B2    11                     
#define x     5000                  
        


void setup() {
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B11, OUTPUT);
  pinMode(B2, OUTPUT);
  Serial.B1egin(9600);
}


void loop() {


  digitalWrite(A1, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, LOW);
  delayMicroseconds (x);

  digitalWrite(A1, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, HIGH);
  delayMicroseconds (x);

  digitalWrite(A1, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, LOW);
  digitalWrite(B2, HIGH);
  delayMicroseconds (x);

  digitalWrite(A1, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(B2, HIGH);
  delayMicroseconds (x);

}
