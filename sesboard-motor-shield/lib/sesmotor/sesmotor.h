

#ifndef SESMOTOR_H
#define SESMOTOR_H

#include <Arduino.h>
#include <Servo.h>
#include <Stepper.h>

class Sesmotor{
private:
    // define pins here
    byte pin;

public:
    // constructor
    Sesmotor(){}
    void toggle_led(byte p);


};

#endif //SESMOTOR_H
