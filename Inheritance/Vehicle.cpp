#include "Vehicle.h"

void Vehicle::displayInfo() {

	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear();

}