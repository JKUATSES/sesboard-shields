
#ifndef SESMOTOR_H
#define SESMOTOR_H


#if (ARDUINO > 100)
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#include <Servo.h>
#include <Stepper.h>

class Sesmotor {
    public:
        // Constructor
        Sesmotor(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb);

        // methods
        void init();
        void begin(int baud_rate = 9600);
        void forward(int in1, int in2, int in3, int in4);
        void reverse();
        void on();
        void off();
        void turnLeft();
        void turnRight();

    private:
        bool _msg;
};

#endif //SESMOTOR_H
