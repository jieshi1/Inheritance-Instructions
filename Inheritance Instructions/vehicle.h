//Jie Shi
//CIS 1202 502
//12/10/2020

#pragma once
#include <string>
using namespace std;

class Vehicle{
private:
    string manufacturer;             
    int year;                        
public:
    Vehicle(string, int);           

    void setYear(int);
    int getYear();
    void setManufacturer(string);
    string getManufacturer();
    void displayInfo();             
};