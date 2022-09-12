#include "sesmotor.h"

Sesmotor::Sesmotor(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb){
    /*
     * Init the motor variables
     */
    this->in1 = in1;
    this->in2 = in2;
    this->in3 = in3;
    this->in4 = in4;
    this->ena = ena;
    this->enb = enb;

    // initialize al motors off
    this->init();
}

void Sesmotor::init(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4){
    /*
     * Set all pins as output
     * Turn the motor object off initially
     */
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
     * Move the motor in the forward direction
     * This function is for avr boards
     */
    digitalWrite(in1, 1);
    digitalWrite(in2, 0);
    digitalWrite(in3, 1);
    digitalWrite(in4, 0);

}

void Sesmotor::reverse(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4) {
    /*
     * Move the motor in the forward direction
     * This function is for avr boards
     */
    digitalWrite(in1, 0);
    digitalWrite(in2, 1);
    digitalWrite(in3, 0);
    digitalWrite(in4, 1);

}