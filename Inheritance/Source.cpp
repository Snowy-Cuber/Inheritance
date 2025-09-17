// Tamera Fischer
// CIS 1202
// 9/16/2025

#include<iostream>
#include<string>
#include"Vehicle.h"
#include"Car.h"
#include"Truck.h"

using namespace std;


int main() {


	string manufacturer;
	int year, doors, towingCap;

	cout << "Vehicle Information:\n\n";

	cout << "Vehicle:\n";
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << endl;
	Vehicle vehicle(manufacturer, year);
	vehicle.displayInfo();

	cout << endl << endl;
	cout << "Car:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << "Enter number of doors: ";
	cin >> doors;
	cout << endl;
	Car car(manufacturer, year, doors);
	car.displayInfo();

	cout << endl << endl;
	cout << "Truck:\n";
	cout << "Enter the manufacturer: ";
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	getline(cin, manufacturer);
	cout << "Enter year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towingCap;
	cout << endl;
	Truck truck(manufacturer, year, towingCap);
	truck.displayInfo();



	cout << endl << endl;
	system("pause");
	return 0;
}