#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP
#include "Inheritance.hpp"
#include <string>
using namespace std;

class Employee: public Inheritance
{
private: 
    string position;
    
public:
    Employee(string name, int age, string position);
    string getPosition() const;
    void setPosition(const string& position);
    void displayInfo() const override;

};

#endif // EMPLOYEE_HPP
