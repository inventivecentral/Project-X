/*********************************
  ONE PHASE MOTOR
  
  The circuit:
    L293D/l298N And Arduino
    stepperr 1.8 deg

  By Author: SIBIN KS

**********************************/
int A=8; int B=9; int C=10; int D=11;
                   
int x   =  5000;                  
        


void setup() {
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  Serial.begin(9600);
}


void loop() {


  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, LOW);
  delayMicroseconds (x);

  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delayMicroseconds (x);

  digitalWrite(A, HIGH);
  digitalWrite(B, HIGH);
  digitalWrite(C, LOW);
  digitalWrite(D, HIGH);
  delayMicroseconds (x);

  digitalWrite(A, LOW);
  digitalWrite(B, HIGH);
  digitalWrite(C, HIGH);
  digitalWrite(D, HIGH);
  delayMicroseconds (x);

}
