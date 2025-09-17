#pragma once
#include"Vehicle.h"

class Truck : public Vehicle
{
private:

	int towingCap;

public:

	Truck() : Vehicle() {
		towingCap = 0;
	}

	Truck(string man, int y, int t) : Vehicle(man, y) {
		towingCap = t;
	}

	void setTowingCap(int t) {
		towingCap = t;
	}

	int getTowingCap() const {
		return towingCap;
	}

	void displayInfo();


};

