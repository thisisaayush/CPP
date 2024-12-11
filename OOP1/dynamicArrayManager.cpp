#include <iostream>
using namespace std;

void createArray(int*& arr, int size)
{
    arr = new int [size]; // dynamically allocate array
}

void assignValues(int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 2; // asign values
    }
}

void printArray(int* arr, int size)
{
    cout << "Array Elements: ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ".";
    }

    cout << endl;
}

void deleteArray(int*& arr)
{
    delete[] arr; // free the allocated memory
    arr = nullptr;// avoid dangling pointer
}

int main() 
{
    int* array = nullptr; // pointer to hold the dynamic array
    int size;

    cout << "Enter the size fo the array: ";
    cin >> size;

    createArray(array, size);
    assignValues(array, size);
    printArray(array, size);
    deleteArray(array);

    cout << "Dynamic array memory cleaned up!" << endl;
    return 0;
}