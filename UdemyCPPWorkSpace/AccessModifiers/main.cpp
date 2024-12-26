#include <iostream>
#include "Modifiers.hpp"
using namespace std;

int main() 
{
   Modifiers person("Alice", 30);
   person.displayInfo();
   
   person.setName("Bob");
   person.setAge(25);
   person.displayInfo();
    
    return 0;
}