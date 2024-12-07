#include <iostream>
#include <cmath>
using namespace std;

// base class
class Shape 
{
    public:
        virtual void displayArea() = 0;
};

// derived class
class Rectangle: public Shape
{
    private:
        double length, width;

    public:
        Rectangle(double l, double w) : length(l), width(w) {}
        
        double area()
        {
            return length * width;
        }

        void displayArea() override
        {
            cout << "Rectangle Area: " << area() << endl;
        }

        void setDimensions(double l, double w)
        {
            length = l;
            width = w;
        }
};

class Circle: public Shape
{
    private:
        double radius;

    public:
        Circle(double r) : radius(r) {}

        double area()
        {
            return M_PI * radius * radius;
        }

        void displayArea() override 
        {
            cout << "Circle Area: " << area() << endl;
        }

        void setRadius(double r)
        {
            radius = r;
        }
};

class Triangle: public Shape
{
    private:
        double base, height;
    
    public:
        Triangle(double b, double h): base(b), height(h) {}

    double area()
    {
        return 0.5 * base * height;
    }

    void displayArea() override
    {
        cout << "Triange Area: " << area << endl;
    }

    void setDimensions(double b, double h)
    {
        base = b;
        height = h;
    }
};

void printInfo(const Rectangle &r)
{
    cout << "This is a rectangle." << endl;
}

void printInfo(const Circle &c)
{
    cout << "This is a circle." << endl;
}

void printInfo(const Triangle &t)
{
    cout << "This is a triangle." << endl;
}

int main()
{
    // creating objects
    Rectangle rect(5.0, 3.0);
    Circle circ(4.0);
    Triangle(5.0, 7.0);

    // displays areas
    rect.displayArea();
    circ.displayArea();
    tri.displayArea();

    // call overloaded printInfo() function
    printInfo(rect);
    printInfo(circ);
    printInfo(tri);

    // set new area variable values
    rect.setDimensions(2.0, 8.0);
    circ.setRadius(8.0);
    tri.setDimensions(6.0, 8.0);

    // displays areas
    rect.displayArea();
    circ.displayArea();
    tri.displayArea();


    return 0;
}