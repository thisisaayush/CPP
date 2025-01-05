#ifndef USER_HPP
#define USER_HPP

#include <string>
using namespace std;

class User
{
    protected:
        string name;
        
    public:
        User(string n);
        virtual void showDetails() const = 0;
        ~User();
};

#endif // USER_HPP
