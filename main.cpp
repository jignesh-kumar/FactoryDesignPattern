#include <iostream>
#include "carProduction.h"
#include "factory.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int selectionType = 0;

	while(true)
	{
		cout << "\n\nPlease enter your choice for car" << endl;
		cout << "0. Exit!\n1. Normal Car\n2. Sports Car\n3. Luxury Car\nYour Choice=";
		cin >> selectionType;

		if(selectionType == 0)
			break;

		cout << endl;

		carProduction *myCar = factory::createCar(selectionType);

		if(myCar)
		{
			myCar->offerOnCar();
			cout << endl;
			delete myCar;
		}
		else
		{
			cout << "Sorry, Something wrong in production,Car is not ready!" << endl;
		}
	}

	return 0;
}