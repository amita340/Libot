#ifndef libot_H
#define libot_H
#include "arduino.h"

class Libot{

  public:
  int motorL[3];
  int motorR[3];
  
  void set_left(int En, int in1, int in2);
  void set_right(int En, int in1, int in2);
  void move_forword();
  void move_back();
  void move_left();
  void move_right();
  void stop_motor();
};

#endif
