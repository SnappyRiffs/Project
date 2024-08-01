/*
  irDemo.h - for usage with InfraRed remote
*/
#ifndef irDemo_h
#define irDemo_h

#include "Arduino.h"
#include "IRremote.hpp"

class irDemo {
public:
  irDemo(int pin);
  void begin();
  int test();
private:
  uint16_t command;
  int _pin;
};

#endif