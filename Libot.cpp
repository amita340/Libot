#include "libot.h"
#include "arduino.h"

void Libot::set_left(int En, int in1, int in2){
    motorL[0] = En;
    motorL[1] = in1;
    motorL[2] = in2;

    pinMode(En, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
}
void Libot::set_right(int En, int in1, int in2){
    motorR[0] = En;
    motorR[1] = in1;
    motorR[2] = in2;

    pinMode(En, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
}
void Libot::move_forword(){
  digitalWrite(motorL[0], HIGH);
  digitalWrite(motorR[0], HIGH);

  digitalWrite(motorL[1], HIGH);
  digitalWrite(motorR[1], HIGH);

  digitalWrite(motorL[2], LOW);
  digitalWrite(motorR[2], LOW);
  
}
void Libot::move_back(){
  digitalWrite(motorL[0], HIGH);
  digitalWrite(motorR[0], HIGH);

  digitalWrite(motorL[1], LOW);
  digitalWrite(motorR[1], LOW);

  digitalWrite(motorL[2], HIGH);
  digitalWrite(motorR[2], HIGH);
  
}
void Libot::move_right(){
  digitalWrite(motorL[0], HIGH);
  digitalWrite(motorR[0], HIGH);

  digitalWrite(motorL[1], LOW);
  digitalWrite(motorR[1], HIGH);

  digitalWrite(motorL[2], HIGH);
  digitalWrite(motorR[2], LOW);
  
}
void Libot::move_left(){
  digitalWrite(motorL[0], HIGH);
  digitalWrite(motorR[0], HIGH);

  digitalWrite(motorL[1], HIGH);
  digitalWrite(motorR[1], LOW);

  digitalWrite(motorL[2], LOW);
  digitalWrite(motorR[2], HIGH);
  
}
void Libot::stop_motor(){
  digitalWrite(motorL[0], LOW);
  digitalWrite(motorR[0], LOW);

  digitalWrite(motorL[1], LOW);
  digitalWrite(motorR[1], LOW);

  digitalWrite(motorL[2], LOW);
  digitalWrite(motorR[2], LOW);
  
}
