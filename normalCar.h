#ifndef NORMAL_CAR
#define NORMAL_CAR

#include <iostream>
#include "carProduction.h"

using namespace std;

class normalCar : public carProduction
{
public:
	normalCar();
	~normalCar();
	
	void findCarRawMaterials(void);
	void prepareCarParts(void);
	void combineCarParts(void);
	void paintCar(void);
	void offerOnCar(void);
};

#endif