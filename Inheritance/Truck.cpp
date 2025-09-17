#include "Truck.h"

void Truck::displayInfo() {

	Vehicle::displayInfo();
	cout << endl << "Towing Capacity: " << getTowingCap();

}