#include <iostream>
#include "Methods.hpp"
using namespace std;

int main()
{
	Car objCar("Toyota", "$45000");
    
    objCar.setSpeed(260);
    objCar.setModel("Corolla");
    objCar.setYear(2020);
    
    cout << "Brand: " << objCar.getBrand() << endl;
    cout << "Price: " << objCar.getPrice() << endl;
    cout << "Model: " << objCar.getModel() << endl;
    cout << "Max Speed: " << objCar.getSpeed() << endl;
    cout << "Year: " << objCar.getYear() << endl;
    
    return 0;
}
