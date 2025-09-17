#pragma once
#include"Vehicle.h"


class Car : public Vehicle
{
private:

	int doors;

public:

	Car() : Vehicle() {
		doors = 0;
	}

	Car(string man, int y, int d) : Vehicle(man, y) {
		doors = d;
	}

	void setDoors(int d) {
		doors = d;
	}

	int getDoors() const {
		return doors;
	}

	void displayInfo();


};

