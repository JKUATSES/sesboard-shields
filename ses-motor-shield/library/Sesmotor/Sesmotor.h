
/*
 *
 * Control dc motors using L298N Motor driver
 *
 * Author: Edwin Mwiti Maingi <emwiti658@gmail.com>
 * Date: September 12, 2022
 */

#ifndef SESMOTOR_H
#define SESMOTOR_H

#include <Arduino.h>
#include <Servo.h>
#include <Stepper.h>
#include "string"

class Sesmotor : public Servo {

    private:
        // private variable for dc motor control
        int _in[4];
        int _ena;
        int _enb;
        int _channel;
        int _frequency;
        int _resolution;

        // private variables for servo motor control
        int _servo_pin;
        int _angle;

public:
        // init dc motor
        Sesmotor(int, int, int, int, int, int, int, int, int);

        // init servo
        Sesmotor(int);

        // dc motor methods
        void on(int speed);
        void off();
        void forward();
        void reverse();
        void turnLeft();
        void turnRight();

        // servo motor methods
        void attachPin();
        void writeAngle(int angle);
};

#endif //SESMOTOR_H
