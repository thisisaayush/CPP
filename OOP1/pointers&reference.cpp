#include <iostream>
#include <string>
using namespace std;

int main()
{
    // creating pointers and references
    string food = "Pizza";
    string &meal = food;
    string* ptr = &food; // pointer ptr will store the address of the food variable
    
    cout << food << endl; // prints "Pizza"
    cout << &meal << endl; // prints "Pizza"
    cout << &food << endl; // prints the address of the variable:      for example: 0x6dfed4
    cout << ptr << endl; // reference: prints the stored variable memory address: for example: 0x6dfed4 (same as &food)
    cout << *ptr <<endl; // dereferenc: prints the stored value: "Pizza"

    //---------------------------------------------------//

    string car = "BMW";
    string* c_ptr = &car; // reference

    cout << car << endl; // prints "BMW"
    cout << &car << endl; // prints the memory address
    cout << c_ptr << endl; // prints the memory address
    cout << *c_ptr << endl; // deference- prints the value stored in the memory address

    *c_ptr = "Mercedes";
    cout << car << endl; // prints "Mecedes"
    cout << *c_ptr << endl; // prints "Mercedes"
}