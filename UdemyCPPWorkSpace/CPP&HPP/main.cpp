#include <iostream>
#include "Calculator.hpp"
using namespace std;

int main()
{
    Calculator calc;
    int x = 10, y = 5;
    cout << "Add: " << calc.add(x, y) << endl;
    cout << "Subtract: " << calc.subtract(x, y) << endl;
    cout << "Multiply: " << calc.multiply(x, y) << endl;
    
    return 0;
}