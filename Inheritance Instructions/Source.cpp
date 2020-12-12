//Jie Shi
//CIS 1202 502
//12/10/2020

#include "truck.h"
#include "car.h"
#include "vehicle.h"
#include <iostream>
using namespace std;

int main(){
	cout << "Vehicle Program" << endl;
	cout << "\nVehicle:";

	string manufacturer;
	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);       

	int year;
	cout << "Enter the year built: ";
	cin >> year;        

	Vehicle vehicle(manufacturer, year);        
	vehicle.displayInfo();       
	cin.ignore();       
	cout << endl;

	cout << "\nCar:";

	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> year;

	int numDoors;          
	cout << "Enter the number of doors: ";
	cin >> numDoors;      

	Car car(numDoors, manufacturer, year);     
	car.displayInfo();         
	cin.ignore();
	cout << endl;

	cout << "\nTruck:";

	cout << "\nEnter the manufacturer: ";
	getline(cin, manufacturer);

	cout << "Enter the year built: ";
	cin >> year;

	int capacity;           
	cout << "Enter the towing capacity: ";
	cin >> capacity;          
	Truck truck(capacity, manufacturer, year);        
	truck.displayInfo();      

	return 0;
}
