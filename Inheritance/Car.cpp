#include "Car.h"

void Car::displayInfo() {

	Vehicle::displayInfo();
	cout << endl << "Doors: " << getDoors();
}