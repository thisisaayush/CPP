#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

// Rectangle class declaration
class Rectangle
{
    private:
        double length;
        double width;
    
    public:
        // constructor to initialize the dimensions of the rectangle
        Rectangle(double l, double w);

        // setters
        void setLength(double l);
        void setWidth(double w);

        // getters 
        double getLength() const;
        double getWidth() const;

        // methods to calculate area of the rectangle
        double area() const;

        // methods to calculate perimeter of the rectangle
        double perimeter() const;

        // destructor
        //~Rectangle();
};

#endif