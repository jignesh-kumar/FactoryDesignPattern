#include "normalCar.h"

normalCar::normalCar()
{
	setCarName("Normal Car!");
	setCarPrice(24.3);
}

normalCar::~normalCar()
{

}

void normalCar::findCarRawMaterials(void)
{
	cout << "Fined Raw Materials for Normal Car!" << endl;
}

void normalCar::prepareCarParts(void)
{
	cout << "Prepare Car Parts for Normal Car!" << endl;
}

void normalCar::combineCarParts(void)
{
	cout << "Combine Car Parts and ready for paint Normal Cars!" << endl;
}
	
void normalCar::paintCar(void)
{
	cout << "Painting Normal Car!" << endl;
}

void normalCar::offerOnCar(void)
{
	cout << "Bingo! 23% Off sell on Normal Car" << endl;
	cout << "Your Car is = " << getCarName();
	cout << "you have to Paid rupees is = " << getCarPrice();
}
