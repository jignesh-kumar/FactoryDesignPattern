#ifndef LUXURY_CAR
#define LUXURY_CAR

#include <iostream>
#include "carProduction.h"

using namespace std;

class luxuryCar : public carProduction
{
public:
	luxuryCar();
	~luxuryCar();
	
	void findCarRawMaterials(void);
	void prepareCarParts(void);
	void combineCarParts(void);
	void paintCar(void);
	void offerOnCar(void);
};

#endif