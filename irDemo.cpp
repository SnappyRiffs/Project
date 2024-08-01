/*
  irDemo.cpp - for usage with InfraRed remote
*/

#include "Arduino.h"
#include "irDemo.h"

irDemo::irDemo(int pin) {
  _pin = pin;
}

void irDemo::begin() {
  pinMode(_pin, OUTPUT);
}

int irDemo::test() {
  IrReceiver.begin(_pin, true);
  if (IrReceiver.decode()) {
    command = IrReceiver.decodedIRData.command;
    return command;
    delay(100);  // wait a bit
    IrReceiver.resume();
  }
}
