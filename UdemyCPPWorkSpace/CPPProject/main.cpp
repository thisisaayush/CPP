#include <iostream>
#include "Rectangle.hpp"
#include "Calculator.hpp"
using namespace std;

int main()
{
    Rectangle rect(5.0, 3.0);
    cout << "Rectangle 1- lenght: " << rect.getLength() << endl;
    cout << "Rectangle 1- width: " << rect.getWidth() << endl;

    cout << "Rectangle 1- Area: " << rect.area() << endl;
    cout << "Rectangle 1- Perimeter: " << rect.perimeter() << endl;

    // modify the dimensions using setters
    rect.setLength(8.0);
    rect.setWidth(9.0);

    cout << "Rectangle 2- lenght: " << rect.getLength() << endl;
    cout << "Rectangle 2- width: " << rect.getWidth() << endl;

    cout << "Rectangle 2- Area: " << rect.area() << endl;
    cout << "Rectangle 2- Perimeter: " << rect.perimeter() << endl;
    
    return 0;
}