#include "luxuryCar.h"

luxuryCar::luxuryCar()
{
	setCarName("Luxury Car!");
	setCarPrice(12.3);
}

luxuryCar::~luxuryCar()
{

}

void luxuryCar::findCarRawMaterials(void)
{
	cout << "Fined Raw Materials for Luxury Car!" << endl;
}

void luxuryCar::prepareCarParts(void)
{
	cout << "Prepare Car Parts for Luxury Car!" << endl;
}

void luxuryCar::combineCarParts(void)
{
	cout << "Combine Car Parts and ready for paint Luxury Cars!" << endl;
}
	
void luxuryCar::paintCar(void)
{
	cout << "Painting Luxury Car!" << endl;
}

void luxuryCar::offerOnCar(void)
{
	cout << "Bingo! 12% Off sell on Luxury Car" << endl;
	cout << "Your Car is = " << getCarName() << endl;
	cout << "you have to Paid rupees is = " << getCarPrice();
}


