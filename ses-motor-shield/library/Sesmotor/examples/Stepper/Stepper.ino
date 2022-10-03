/*
	Author: Edwin Mwiti Maingi 
	Email: <emwiti658@gmail.com>
	Github: https://github.com/bytecod3

	Demonstrate the use of a stepper motor using the Sesmotor Shield
	This program uses the pins assigned to the Ses-motor shield 

*/

#include <Sesmotor.h>
#include <Stepper.h>

// define pins. These pins are the same assigned to the Ses-motor shield
// please refer tot the documentation -> https://github.com/JKUATSES/sesboard-shields
#define in1 9
#define in2 8
#define in3 7
#define in4 13

const int steps_per_revolution = 2048;  // define the steps per revolution for the motor

// create stepper motor instance
// for stepper motor 28BYJ-48, tje order is in1, in3, in2, in4
Stepper Stepper1(steps_per_revolution, in1, in3, in2, in4);

void setup(){
	// 5 RPM
	Stepper1.setSpeed(5); 	

}

void loop(){

	
	// rotate clockwise
	Stepper1.step(steps_per_revolution);
	delay(100);

	// rotate counter clockwise
	Stepper1.step(-steps_per_revolution);
	delay(100);

	
}