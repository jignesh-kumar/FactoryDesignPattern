#ifndef CAR_PRODUCTION
#define CAR_PRODUCTION

#include <string>

using namespace std;

class carProduction
{
private:
	string name;
	float price;

public:
	virtual void findCarRawMaterials(void) = 0 ;
	virtual void prepareCarParts(void) = 0;
	virtual void combineCarParts(void) = 0;
	virtual void paintCar(void) = 0;
	virtual void offerOnCar(void) = 0;

	void setCarName(string carName) { name = carName; }
	void setCarPrice(float carPrice) { price = carPrice; }
	string getCarName(void) { return name; }
	float getCarPrice(void) { return price; }
};

#endif