#include <Arduino.h>
#include <Sesmotor.h>

// servo pin
#define pin 6

// create servo object
Sesmotor servo(pin);

void setup() {
    // attach servo object to pin
    servo.attachPin();
}

void loop() {

    // perform a sweep from 0 to 180
    for (int i=0, i < 180; i++){
        servo.writeAngle(i);
        delay(50);
    }


}
