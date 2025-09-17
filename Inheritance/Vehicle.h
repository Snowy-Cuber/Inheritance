#pragma once
#include<iostream>
using namespace std;
class Vehicle
{

protected:

	string manufacturer;
	int year;

public:

	Vehicle() {
		manufacturer = "";
		year = 0;
	}

	Vehicle(string man, int y) {
		manufacturer = man;
		year = y;
	}

	void setManufacturer(string man) {
		manufacturer = man;

	}

	void setYear(int y) {
		year = y;
	}

	string getManufacturer() const {
		return manufacturer;
	}

	int getYear() const {
		return year;
	}

	virtual void displayInfo();

};

