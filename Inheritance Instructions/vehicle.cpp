//Jie Shi
//CIS 1202 502
//12/10/2020

#include "vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string newManfact, int newYearBuilt){
    manufacturer = newManfact;
    year = newYearBuilt;
}

void Vehicle::displayInfo(){
    cout << "Vehicle Information:";
    string manfact = getManufacturer();      
    cout << "\nManufacturer: " << manfact;      
    int yearr = getYear();                   
    cout << "\nYear Built: " << yearr;           
}

string Vehicle::getManufacturer(){
    return manufacturer;
}

void Vehicle::setManufacturer(string m){
    manufacturer = m;
}

int Vehicle::getYear(){
    return year;
}

void Vehicle::setYear(int y){
    year = y;
}


