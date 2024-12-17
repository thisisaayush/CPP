#ifndef METHODS_HPP
#define METHODS_HPP

#include <string>
using namespace std;


class Car
{
    private:
       string brand;
       string price;
       int maxSpeed;
       string model;
       int year;
       
    public:
        Car(string brand, string price);
        string getBrand() const;
        string getPrice() const;
        int getSpeed() const;
        string getModel() const;
        int getYear() const;
        
        void setSpeed(int maxSpeed);
        void setModel(string model);
        void setYear(int year);
};

#endif