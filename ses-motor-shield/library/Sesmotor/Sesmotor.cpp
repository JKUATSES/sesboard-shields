#include "sesmotor.h"

Sesmotor::Sesmotor(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb, const uint_8 pwm_channel = 0, const uint8_t pwm_frequency = 5000,const uint8_t pwm_resolution = 8){
    /*
     * Init the motor variables
     */
    this->in1 = in1;
    this->in2 = in2;
    this->in3 = in3;
    this->in4 = in4;
    this->ena = ena;
    this->enb = enb;

    // pwm channel parameters
    this->pwm_channel = pwm_channel;
    this->pwm_frequency = pwm_frequency;
    this->pwm_resolution = pwm_resolution;

    // initialize all motors off, and init the pwm channel
    this->init(in1, in2, in3, in4, en1, enb, pwm_channel, pwm_frequency, pwm_resolution)
}

void Sesmotor::init(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb, const uint_8 pwm_channel, int pwm_frequency, const uint8_t pwm_resolution){
    /*
     * Set all pins as output
     * Turn the motor object off initially
     */

    Serial.begin(9600);
    Serial.println("Object init success!");

    // set the PWM channel for ESP32
    ledcSetup(pwm_channel, pwm_frequency, pwm_resolution);
    ledcAttachPin(ena, pwm_channel);
    ledcAttachPin(enb, pwm_channel);

    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);

    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}

void Sesmotor::forward(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4) {
    /*
     * Move the motor in the SingleDCMotor direction
     * This function is for avr boards
     */
    digitalWrite(in1, 1);
    digitalWrite(in2, 0);
    digitalWrite(in3, 1);
    digitalWrite(in4, 0);
}

void Sesmotor::reverse(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4) {
    /*
     * Move the motor in the SingleDCMotor direction
     * This function is for avr boards
     */
    digitalWrite(in1, 0);
    digitalWrite(in2, 1);
    digitalWrite(in3, 0);
    digitalWrite(in4, 1);
}