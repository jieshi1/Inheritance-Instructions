//Jie Shi
//CIS 1202 502
//12/10/2020

#include "truck.h"
#include <iostream>
using namespace std;

Truck::Truck(int newTowCap, string newManfact, int newYearBuilt) : Vehicle(newManfact, newYearBuilt){
	capacity = newTowCap;
}

void Truck::displayInfo(){
	Vehicle::displayInfo();      
	int getcap = getCapacity();         
	cout << "\nTowing capacity: " << getcap << endl;      
}

void Truck::setCapacity(int cap){
	capacity = cap;
}

int Truck::getCapacity(){
	return capacity;
}
