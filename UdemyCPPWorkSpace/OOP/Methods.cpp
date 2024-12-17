#include <iostream>
#include "Methods.hpp"
using namespace std;

Car::Car(string b, string p): brand(b), price(p), maxSpeed(0), model(""), year(0) {}

string Car::getBrand() const
{
    return brand;
}

string Car::getPrice() const
{
    return price;
}

int Car::getSpeed() const
{
    return maxSpeed;
}

string Car::getModel() const
{
    return model;
}

int Car::getYear() const
{
    return year;
}

void Car::setSpeed(int maxSpeed)
{
    this->maxSpeed = maxSpeed;
}

void Car::setModel(string model)
{
    this->model = model;
}

void Car::setYear(int year)
{
    this->year = year;
}
