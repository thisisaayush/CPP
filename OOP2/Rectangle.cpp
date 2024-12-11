#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double l, double w) : length(l), width(w){}

// setters
void Rectangle::setLength(double l)
{
    length = l;
}

void Rectangle::setWidth(double w)
{
    width = w;
}

// getters
double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getWidth() const
{
    return width;
}

// method to calculate area
double Rectangle::area() const
{   
    return length * width;
}

// method to calculate perimeter
double Rectangle::perimeter() const
{
    return 2*(length + width);
}