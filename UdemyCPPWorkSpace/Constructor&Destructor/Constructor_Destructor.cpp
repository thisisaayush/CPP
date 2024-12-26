#include "Constructor_Destructor.hpp"
using namespace std;

Constructor_Destructor::Constructor_Destructor(int value)
{
    data = new int;
    *data = value;
    cout << "Constructor called: Value: " << *data << endl;
}

Constructor_Destructor::~Constructor_Destructor()
{
    delete data;
    cout << "Destructor called: Memory released." << endl;
}

void Constructor_Destructor::display()
{
    cout << "Value: " << *data << endl;
}

