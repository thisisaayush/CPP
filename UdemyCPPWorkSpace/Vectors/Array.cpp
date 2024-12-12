#include "Array.hpp"
using namespace std;

ArrayVector::ArrayVector() 
{
    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        arr[i] = i + 1;
        vec.push_back((i + 1) * 2);
    }
}

void ArrayVector::printArray() const 
{
    cout << "Array elements: ";
    for (int i = 0; i < ARRAY_SIZE; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ArrayVector::printVector() const 
{
    cout << "Vector elements: ";
    for (size_t i = 0; i < vec.size(); ++i) 
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
