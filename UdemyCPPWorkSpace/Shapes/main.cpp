#include "ShapeSize.hpp"
#include <iostream>
using namespace std;

void printShapeInfo(const ShapeSize& shape) {
    cout << "Area: " << shape.area() << endl;
    cout << "Perimeter: " << shape.perimeter() << endl;
    cout << "Volume: " << shape.volume() << endl;
}

int main() {
    Rectangle rectangle(5, 10);
    Square square(4);
    Circle circle(3);
    Sphere sphere(6);

    cout << "Rectangle:" << endl;
    printShapeInfo(rectangle);

    cout << "Square:" << endl;
    printShapeInfo(square);

    cout << "Circle:" << endl;
    printShapeInfo(circle);

    cout << "Sphere:" << endl;
    printShapeInfo(sphere);

    return 0;
}
