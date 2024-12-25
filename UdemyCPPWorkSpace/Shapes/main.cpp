#include "ShapeSize.hpp"
#include "Calculator.hpp"
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
    
    Calculator calc;
    int x = 10, y = 5;
    cout << "Add: " << calc.add(x, y) << endl;
    cout << "Subtract: " << calc.subtract(x, y) << endl;
    cout << "Multiply: " << calc.multiply(x, y) << endl;

    return 0;
}
