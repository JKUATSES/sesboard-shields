/*
 * Control dc motors using L298N Motor driver
 *
 * Author: Edwin Mwiti Maingi <emwiti658@gmail.com>
 * Date: September 12, 2022
 */

#include "Sesmotor.h"
#include <Arduino.h>

//

Sesmotor::Sesmotor(int in1, int in2, int in3, int in4, int ena, int enb, int pwm_channel = 0, int pwm_frequency = 5000, int pwm_resolution = 8 ){

    /*
     * initialize dc motor
     */

    Serial.println("DC motor initialized!");

    for(int i = 0; i!=4; i++)
        _in[i] = {in1, in2, in3, in4}
    }
    _ena = ena;
    _enb = enb;
    _channel = pwm_channel;
    _frequency = pwm_frequency;
    _resolution = pwm_resolution;

    // set the PWM channel for ESP32
    // we  need to set up the frequency, channel and resolution parameters
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

    _servo_pin = servo_pin;

}

/*
 * -----------------------Servo motor functions----------------------------------
 */

void Sesmotor::attachPin() {
    /*
     * attach servo object to pin
     */

    Serial.println("Pin attached");
    this->attach(_servo_pin);
}

void Sesmotor::writeAngle(int angle){
    /*
     * set the servo to the given angle
     */
    this->write(angle);
}
/*
 * -----------------------End of Servo motor functions----------------------------------
 */


/*
 * ---------------------------------DC motor functions-----------------------------------
 */
 void Sesmotor::on(int speed){
    /*
     * Turn the motor on by writing
     * in1 = HIGH
     * in2 = LOW
     * in3 = HIGH
     * in4 = LOW
     */

    // write speed to motor
    ledcWrite(_ena, speed)
    ledcWrite(_enb, speed)

    digitalWrite(_in[0], 1);
    digitalWrite(_in[1], 0);
    digitalWrite(_in[2], 1);
    digitalWrite(_in[3], 0);

}

void Sesmotor::off(){
    /*
     * Turn the motor on by writing
     * in1 = HIGH
     * in2 = LOW
     * in3 = HIGH
     * in4 = LOW
     */
    
    for(int i = 0; i!=4; i++)
        digitalWrite(in[i], 0);
    }
}

void Sesmotor::forward() {
    /*
     * Move the motor in the forward direction
     * This function is for avr boards
     */
    digitalWrite(in[0], 1);
    digitalWrite(in[1], 0);
    digitalWrite(in[2], 1);
    digitalWrite(in[3], 0);
}

void Sesmotor::reverse() {
    /*
     * Move the motor in the backward direction
     */
    digitalWrite(in[0], 0);
    digitalWrite(in[1], 1);
    digitalWrite(in[2], 0);
    digitalWrite(in[3], 1);
}

void Sesmotor::turnLeft() {
    /*
     * Move the motor in the left direction
     * Turn off the left motor and turn on the right motor
     */
    digitalWrite(in[0], 0);
    digitalWrite(in[1], 1);
    digitalWrite(in[2], 0);
    digitalWrite(in[3], 0);
}

void Sesmotor::turnRight() {
    /*
     * Move the motor in the right direction
     * Turn off the left motor and turn on the right motor
     */
    digitalWrite(in[0], 0);
    digitalWrite(in[1], 0);
    digitalWrite(in[2], 0);
    digitalWrite(in[3], 1);
}

/*
 * -----------------------------End of DC motor functions-------------------------
 */
