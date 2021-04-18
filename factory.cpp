
#include "factory.h"

 carProduction* factory::createCar(int selection)
{
	carProduction *car = NULL;

	switch(selection)
	{
		case 1: //Normal Car
			car = new normalCar;
		break;

		case 2: //Sports Car
			car = new sportsCar;
		break;

		case 3: //Luxury Car
			car = new luxuryCar;
		break;

		default:
			cout << "This car is not in production!";
			return NULL;
		break;
	}

	car->findCarRawMaterials();
	car->prepareCarParts();
	car->combineCarParts();
	car->paintCar();
	//car->offerOnCar();

	return car;
}

