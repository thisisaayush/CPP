#include <iostream>
#include "Employee.hpp"
#include <string>
using namespace std;

Employee::Employee(string name, int age, string position) : Inheritance(name, age), position(position) {}

string Employee::getPosition() const 
{
    return position;
}

void Employee::setPosition(const string& position)
{
    this->position = position;
}

void Employee::displayInfo() const
{
    Inheritance::displayInfo();
    cout << "Position: " << position << endl;
}

