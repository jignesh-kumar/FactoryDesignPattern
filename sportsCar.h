#ifndef SPORTS_CAR
#define SPORTS_CAR

#include <iostream>
#include "carProduction.h"

using namespace std;

class sportsCar : public carProduction
{
public:
	sportsCar();
	~sportsCar();
	
	void findCarRawMaterials(void);
	void prepareCarParts(void);
	void combineCarParts(void);
	void paintCar(void);
	void offerOnCar(void);
};

#endif