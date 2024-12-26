#include <iostream>
#include "Inheritance.hpp"
#include "Employee.hpp"
#include <string>
using namespace std;

int main()
{
    Inheritance person("Alice", 30);
    person.displayInfo();
    
    cout << endl;
    
    Employee employee("Bob", 45, "Supervisor");
    employee.displayInfo();
    
    cout << endl;
    
    cout << "Employee name: " << employee.getName() << endl;
    cout << "Employee age: " << employee.getAge() << endl;
    cout << "Employee position: " << employee.getPosition() << endl;
    
	return 0;
}
