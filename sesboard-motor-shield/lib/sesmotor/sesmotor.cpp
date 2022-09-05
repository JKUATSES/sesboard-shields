#include "sesmotor.h"

Sesmotor::Sesmotor(bool display_msg){
    // Anything you need when instantiating your object is put here
    _msg = display_msg;
}

// initialize the serial monitor
void Sesmotor::begin(int baud_rate) {
    Serial.begin(baud_rate);
    if(_msg){
        Serial.println("Object created success");
    }

}

long Sesmotor::getRandomNumber(){
    unsigned  long specialNumber = random(5, 1000);

    specialNumber *= PI;
    specialNumber -= 5;

    return specialNumber;
}