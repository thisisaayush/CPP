#ifndef INHERITANCE_HPP
#define INHERITANCE_HPP
#include <string>
using namespace std;

class Inheritance
{
private:
    string name;
    int age;   
    
public:
    Inheritance(string name, int age);
    
    string getName() const;
    int getAge() const;
    
    void setName(const string& name);
    void setAge(int age);
    
    virtual void displayInfo() const;
    
};

#endif // INHERITANCE_HPP
