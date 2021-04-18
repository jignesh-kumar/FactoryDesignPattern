#include "sportsCar.h"

sportsCar::sportsCar()
{
	setCarName("Sports Car!");
	setCarPrice(18.3);
}

sportsCar::~sportsCar()
{

}

void sportsCar::findCarRawMaterials(void)
{
	cout << "Fined Raw Materials for Sports Car!" << endl;
}

void sportsCar::prepareCarParts(void)
{
	cout << "Prepare Car Parts for Sports Car!" << endl;
}

void sportsCar::combineCarParts(void)
{
	cout << "Combine Car Parts and ready for paint Sports Cars!" << endl;
}
	
void sportsCar::paintCar(void)
{
	cout << "Painting Sports Car!" << endl;
}

void sportsCar::offerOnCar(void)
{
	cout << "Bingo! 18% Off sell on Sports Car" << endl;
	cout << "Your Car is = " << getCarName() << endl;
	cout << "you have to Paid rupees is = " << getCarPrice();
}

