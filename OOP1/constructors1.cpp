#include <iostream>
using namespace std;

class PingPong
{
    public:
        PingPong()
        {
            cout << "Created Constructor." << endl;
        }
};

int main()
{
    PingPong obj;
    return 0;
}