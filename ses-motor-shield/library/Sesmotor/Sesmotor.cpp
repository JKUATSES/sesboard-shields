#include "Sesmotor.h"
#include <Arduino.h>

//

Sesmotor::Sesmotor(int in1, int in2, int in3, int in4, int ena, int enb, int pwm_channel = 0, int pwm_frequency = 5000, int pwm_resolution = 8 ){

    /*
     * initialize dc motor
     */

    Serial.println("DC motor initialized!");

    _in1 = in1;
    _in2 = in2;
    _in3 = in3;
    _in4 = in4;
    _ena = ena;
    _enb = enb;
    _channel = pwm_channel;
    _frequency = pwm_frequency;
    _resolution = pwm_resolution;

    // set the PWM channel for ESP32
    // by default ESP32 uses ledcWrite in place of analog Write, We  need to set up the frequency, channel and resolution parameters
    ledcSetup(pwm_channel, pwm_frequency, pwm_resolution);
    ledcAttachPin(ena, pwm_channel);
    ledcAttachPin(enb, pwm_channel);

    // set parameter pins as output
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(ena, OUTPUT);
    pinMode(enb, OUTPUT);
}

Sesmotor::Sesmotor(int servo_pin){
    /*
     * initialize servo motor
     */

    Serial.println("servo motor initialized!");

    _servo_pin = servo_pin;

}

void Sesmotor::attach_pin() {
    /*
     * attach servo object to pin
     */

    Serial.println("Pin attached");
    this->attach(_servo_pin);
}

 void Sesmotor::on(){
    /*
     * Turn the motor on by writing
     * in1 = HIGH
     * in2 = LOW
     * in3 = HIGH
     * in4 = LOW
     */

//    digitalWrite(in1, 1);
//    digitalWrite(in2, 0);
//    digitalWrite(in3, 1);
//    digitalWrite(in4, 0);

    Serial.println("ON");
}

//void Sesmotor::forward() {
//    /*
//     * Move the motor in the SingleDCMotor direction
//     * This function is for avr boards
//     */
//    digitalWrite(in1, 1);
//    digitalWrite(in2, 0);
//    digitalWrite(in3, 1);
//    digitalWrite(in4, 0);
//}
//
//void Sesmotor::reverse() {
//    /*
//     * Move the motor in the SingleDCMotor direction
//     * This function is for avr boards
//     */
//    digitalWrite(in1, 0);
//    digitalWrite(in2, 1);
//    digitalWrite(in3, 0);
//    digitalWrite(in4, 1);
//}
//

//
//void Sesmotor::on(){
//    /*
//     * Turn the motor of by writing
//     * in1 = LOW
//     * in2 = LOW
//     * in3 = LOW
//     * in4 = LOW
//     */
//    digitalWrite(in1, 0);
//    digitalWrite(in2, 0);
//    digitalWrite(in3, 0);
//    digitalWrite(in4, 0);
//}

