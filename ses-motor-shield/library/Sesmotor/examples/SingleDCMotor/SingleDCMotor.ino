/*
 *
 * Demonstrate the usage of the most basic functions when controlling DC motor
 *
 * The circuit:
 * A sesmotor shield
 * Two DC motors
 *
 * Author: Edwin Mwiti Maingi <emwiti658@gmail.com>
 * Github: https://github.com/bytecod3
 * Date: October 2, 2022
 */
#include <Sesmotor.h>

// pin definitions  todo: use the already defined pins for the shield

// motor 1 pins
#define in1 34
#define in2 35
#define in3 32
#define in4 33

// motor 2 pins
#define in5 17
#define in6 16
#define in7 15
#define in8 14

#define ena 25
#define enb 26

#define channel 0
#define frequency 5000
#define resolution 8

#define pin 5

// motor objects 
Sesmotor motor1(in1, in2, in3, in4, ena, enb, channel, frequency, resolution);
Sesmotor motor2(in5, in6, in7, in8, ena, enb, channel, frequency, resolution);

void setup(){

  Serial.begin(115200);

  // turn on the motors first before using them
  // 255 refers to the speed you want to run the motors at. use a value between 0 and 255
  motor1.on(100);
  motor2.on(100);

}

void loop(){
	// rotate motors clockwise at 100 RPM for 5 seconds
	motor1.on(100);
	motor2.on(100);

    delay(5000);

    // test drive functions such as turning left, right and reversing

    // turn the motors OFF
    motors.off();

}

