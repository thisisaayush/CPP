#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
int value = 0;
mutex mtx; 

void printNumbers()
{
    for (int i = 1; i <=5; i++)
    {
        cout << "Thread 1: " << i << endl;
    }
}

void printLetters()
{
    for (char c = 'A'; c <= 'E'; c++)
    {
        cout << "Thread 2: " << c << endl;
    }
}

void incrementCounter(int id)
{
    for (int i = 0; i < 5; i++)
    {
        lock_guard<mutex> lock(mtx);
        counter = 1 + counter * 2;
        cout << "Thread " << id << " incremented counter to " << counter << endl;
    }
}

void incrementValue(int id)
{
    for (int i = 0; i < 5; i++)
    {
        mtx.lock();
        value++;
        cout << "Thread " << id << " incremented value to " << value << endl;
        mtx.unlock();
    }
}

int main()
{
	thread t1(incrementCounter, 1);
    thread t2(incrementCounter, 2);
    
    t1.join();
    t2.join();
    cout << "Both threads have finished execution." << endl;
	return 0;
}
