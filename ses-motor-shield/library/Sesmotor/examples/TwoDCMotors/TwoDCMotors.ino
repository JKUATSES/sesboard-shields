/*
 *
 * Demonstrate the usage of the most basic functions when controlling a single DC motor
 *
 * The circuit:
 * A sesmotor shield
 * single DC motors
 *
 * Author: Edwin Mwiti Maingi <emwiti658@gmail.com>
 * Github: https://github.com/bytecod3
 * Date: September 12, 2022
 */
#include <Sesmotor.h>

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

#define pin 5

// motor objects
Sesmotor motor(in1, in2, in3, in4, ena, enb, channel, frequency, resolution);

void setup(){

    Serial.begin(115200);

    // turn on the motors first before using them
    // 255 refers to the speed you want to run the motors at. use a value between 0 and 255
    motor.on(255);
}

void loop(){
    // rotate motor clockwise at 100 RPM for 5 seconds
    motor.on(100);

    delay(5000);

    // turn the motor OFF
    motor.off();

}
