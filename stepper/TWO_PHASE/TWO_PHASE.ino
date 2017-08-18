/*********************************
TWO PHASE MOTOR
  
  The circuit:
    L293D/l298N And Arduino
    stepperr 1.8 deg

  By Author: SIBIN KS

**********************************/
 
int A=8;                     
int B=9;                    
int C=10;                    
int D=11; 

                    
int x=5000;                  
int stepsPerRevolution = 200;         


void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
}


void loop() {  
  for (int i = 0; i < (stepsPerRevolution/4) ; i++) {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    delayMicroseconds (x);

    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    delayMicroseconds (x);

    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    delayMicroseconds (x);
  }
    delay(1000);
  // Counter Direction 
  for (int i = 0; i < (stepsPerRevolution/4); i++) {

    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    delayMicroseconds (x);
    
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
    delayMicroseconds (x);
    

    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    delayMicroseconds (x);

    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
    delayMicroseconds (x);
  }
  delay(1000);
}
