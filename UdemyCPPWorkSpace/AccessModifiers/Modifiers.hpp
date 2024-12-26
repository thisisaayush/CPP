#ifndef MODIFIERS_HPP
#define MODIFIERS_HPP

#include <string>
using namespace std;

class Modifiers
{
    public:
        Modifiers(string name, int age);
        string getName() const;
        int getAge() const;
        
        void setName (const string& name);
        void setAge (int age);
        void displayInfo() const;
    
    private:
        string name;
        int age;
};

#endif