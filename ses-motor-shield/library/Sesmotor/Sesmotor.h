
#ifndef SESMOTOR_H
#define SESMOTOR_H

#include <Arduino.h>
#include <Servo.h>
#include <Stepper.h>
#include "string"

class Sesmotor : public Servo {
    public:
        Sesmotor(int, int, int, int, int, int, int, int, int);
        Sesmotor(int);

        // dc motor methods
        void on();
        void off();
        void forward();
        void reverse();
        void turnLeft();
        void turnRight();

        // servo motor methods
        void attach_pin();

    private:
        // private variable for dc motor control
        int _in1;
        int _in2;
        int _in3;
        int _in4;
        int _ena;
        int _enb;
        int _channel;
        int _frequency;
        int _resolution;

        // private variables for servo motor control
        int _servo_pin;

};

#endif //SESMOTOR_H
