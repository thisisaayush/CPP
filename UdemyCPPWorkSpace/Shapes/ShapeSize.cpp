#include "ShapeSize.hpp"
#include <cmath>

// Rectangle definitions
Rectangle::Rectangle(double width, double height) : width(width), height(height) {}
double Rectangle::area() const { return width * height; }
double Rectangle::perimeter() const { return 2 * (width + height); }
double Rectangle::volume() const { return 0; }  // Rectangle is 2D, so volume is 0

// Square definitions
Square::Square(double side) : side(side) {}
double Square::area() const { return side * side; }
double Square::perimeter() const { return 4 * side; }
double Square::volume() const { return 0; }  // Square is 2D, so volume is 0

// Circle definitions
Circle::Circle(double radius) : radius(radius) {}
double Circle::area() const { return M_PI * radius * radius; }
double Circle::perimeter() const { return 2 * M_PI * radius; }
double Circle::volume() const { return 0; }  // Circle is 2D, so volume is 0

// Sphere definitions
Sphere::Sphere(double radius) : radius(radius) {}
double Sphere::area() const { return 4 * M_PI * radius * radius; }
double Sphere::perimeter() const { return 0; }  // Sphere has no perimeter
double Sphere::volume() const { return (4.0/3.0) * M_PI * std::pow(radius, 3); }
