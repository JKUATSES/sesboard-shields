
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
        int _angle;

        // private variables for stepper motor variables
        int _steps_per_revolution;
        int _stepper_in1;
        int _stepper_in2;
        int _stepper_in3;
        int _stepper_in4;

public:
        // init dc motor
        Sesmotor(int, int, int, int, int, int, int, int, int);

        // init servo
        Sesmotor(int);

        // init stepper motor
        Sesmotor(int, int, int, int); // take for parameters each representing the control pin

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
        
        // todo: more methods here
        
};

#endif //SESMOTOR_H
