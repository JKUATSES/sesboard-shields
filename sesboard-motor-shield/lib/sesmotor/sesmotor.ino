#include <Arduino.h>


#define led_pin 12

Led led1(led_pin);

void setup() {
    led1.init();
    Serial.begin(9600);
}

void loop() {
    led1.on();

}
