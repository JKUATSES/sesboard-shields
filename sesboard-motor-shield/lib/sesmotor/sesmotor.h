
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
        Sesmotor(bool display_msg=false);

        // methods
        void begin(int baud_rate = 9600);
        long getRandomNumber();

    private:
        bool _msg;
};

#endif //SESMOTOR_H
