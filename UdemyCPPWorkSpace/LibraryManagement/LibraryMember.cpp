#include <iostream>
#include "LibraryMember.hpp"
using namespace std;

LibraryMember::LibraryMember(string n, int id): User(n), memberId(id) {}

void LibraryMember::showDetails() const 
{
    cout << "Member Name: " << name << ", Member Id: " << memberId << endl;
}

LibraryMember::~LibraryMember()
{
}

