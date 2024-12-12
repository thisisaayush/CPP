#ifndef ARRAY_VECTOR_HPP
#define ARRAY_VECTOR_HPP

#include <vector>
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;

class ArrayVector {
public:
    ArrayVector();
    void printArray() const;
    void printVector() const;

private:
    int arr[ARRAY_SIZE];
    vector<int> vec;
};

#endif // ARRAY_VECTOR_HPP
