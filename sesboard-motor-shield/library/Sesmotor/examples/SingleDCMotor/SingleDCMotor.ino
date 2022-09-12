/*
 * Forward
 *
 * Demonstrate the usage of the most basic functions of the sesmotor library
 *
 * The circuit:
 * A sesmotor shield
 * Two DC motors
 *
 * Author: Edwin Mwiti Maingi <emwiti658@gmail.com>
 * Date: September 12, 2022
 */
#include "Sesmotor.h"

// pin definitions
#define in1 34
#define in2 35
#define in3 32
#define in4 33
#define ena 25
#define enb 26

#define channel 0
#define frequency 5000
#define resolution 8

// create motor1 object
Sesmotor motor1(in1, in2, in3, in4, ena, enb, chanel, frequency, resolution);

void setup(){

}

void loop(){

}
