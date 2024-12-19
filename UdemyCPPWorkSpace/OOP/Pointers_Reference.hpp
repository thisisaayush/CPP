#ifndef POINTERS_REFERENCE_HPP
#define POINTERS_REFERENCE_HPP
using namespace std;

class Pointers_Reference
{
    public:
        // Constructor
        Pointers_Reference(int val, const string& name);
        // Destructor
        ~Pointers_Reference();
        // Methods to demonstrate pointers
        void manipulateWithPointer(int* ptr);
        // Methods to demonstrate references
        void manipulateWithReference(int& ref);
        // Getters
        int getValue() const;
        const string& getName() const;
        // Setters 
        void setValue(int val);
        void setName(const string& name);
    
    private:
        int* value;
        string name;
};

#endif // POINTERS_REFERENCE_HPP
