#include <iostream>
#include "Modifiers.hpp"
using namespace std;

Modifiers::Modifiers(string name, int age): name(name), age(age) {}

string Modifiers::getName() const 
{
    return name;
}

int Modifiers::getAge() const
{
    return age;
}

void Modifiers::setName(const string& name)
{
    this->name = name;
}

void Modifiers::setAge(int age)
{
    this->age = age;
}

void Modifiers::displayInfo() const
{
    cout << "Name: " << name << ", Age: " << age << endl;
}

