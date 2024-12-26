#ifndef CONSTRUCTOR_DESTRUCTOR_HPP
#define CONSTRUCTOR_DESTRUCTOR_HPP

#include <iostream>
using namespace std;

class Constructor_Destructor
{
private: 
    int* data;
    
public:
    Constructor_Destructor(int value);
    ~Constructor_Destructor();
    void display();
    
};

#endif // CONSTRUCTOR_DESTRUCTOR_HPP
