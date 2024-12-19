#include "Pointers_Reference.hpp"
using namespace std;

Pointers_Reference::Pointers_Reference(int val, const string& name): name(name)
{
    value = new int(val);
}

Pointers_Reference::~Pointers_Reference()
{
    delete value;
}

void Pointers_Reference::manipulateWithPointer(int* ptr)
{
    if (ptr)
    {
        *ptr += 10;
    }
}

void Pointers_Reference::manipulateWithReference(int& ref)
{
    ref *= 2;
}

int Pointers_Reference::getValue() const
{
    return *value;
}

const string& Pointers_Reference::getName() const
{
    return name;
}

void Pointers_Reference::setValue(int val)
{
    *value = val;
}

void Pointers_Reference::setName(const string& name)
{
    this->name = name;
}