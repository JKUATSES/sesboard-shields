#include "sesmotor.h"

Sesmotor::Sesmotor(byte pin){
	this->pin = pin;
	init();
}