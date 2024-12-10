#include <iostream>
using namespace std;

class MethodDefinition
{
    public:
        void insideMethod()
        {
            cout << "Inside Method Definition." << endl;
        }

        void outsideMethod();
};

void MethodDefinition::outsideMethod()
{
    cout << "Outside Method Definition." << endl;
}

int main()
{
    class MethodDefinition obj;
    obj.insideMethod();
    obj.outsideMethod();

    return 0;
}