#include <iostream>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;

        Car(string b, string m, int y)
        {
            brand = b;
            model = m;
            year = y;
        }
};

int main()
{
    Car obj1 ("BMW", "X5", 2020);
    Car obj2 ("Tesla", "S4", 2019);

    cout << obj1.brand << " " << obj1.model << " " << obj1.year << endl;  
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << endl;

    return 0;
}