#ifndef FACTORY_CLASS
#define FACTORY_CLASS

#include <iostream>
#include "normalCar.h"
#include "sportsCar.h"
#include "luxuryCar.h"
#include "carProduction.h"

class factory
{
public:
	static carProduction* createCar(int);
};

#endif