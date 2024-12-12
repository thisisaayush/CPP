#ifndef SHAPE_HPP
#define SHAPE_HPP

class ShapeSize 
{
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual double volume() const { return 0; }  // Default volume for 2D shapes
};

class Rectangle : public ShapeSize 
{
    public:
        Rectangle(double width, double height);
        double area() const override;
        double perimeter() const override;
        double volume() const override;

    private:
        double width;
        double height;
};

class Square : public ShapeSize 
{
    public:
        Square(double side);
        double area() const override;
        double perimeter() const override;
        double volume() const override;

    private:
        double side;
};

class Circle : public ShapeSize 
{
    public:
        Circle(double radius);
        double area() const override;
        double perimeter() const override;
        double volume() const override;

    private:
        double radius;
};

class Sphere : public ShapeSize 
{
    public:
        Sphere(double radius);
        double area() const override;
        double perimeter() const override;
        double volume() const override;

    private:
        double radius;
};

#endif // SHAPE_HPP
