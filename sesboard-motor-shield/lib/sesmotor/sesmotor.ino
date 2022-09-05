#include <Arduino.h>
#include "sesmotor.h"

#define led_pin 12

// create motor object
Sesmotor motor1(true);

void setup(){

    // init serial monitor
    motor1.begin(9600);

}

void loop(){

}