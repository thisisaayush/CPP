#include <iostream>
#include "Inheritance.hpp"
#include <string>
using namespace std;

Inheritance::Inheritance(string name, int age): name(name), age(age) {}

string Inheritance::getName() const 
{
    return name;
}

int Inheritance::getAge() const
{
    return age;
}

void Inheritance::setName(const string& name)
{
    this->name = name;
}

void Inheritance::setAge(int age)
{
    this->age = age;
}

void Inheritance::displayInfo() const
{
    cout << "Name: " << name << ", Age: " << age << endl;
}