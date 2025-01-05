#ifndef LIBRARYMEMBER_HPP
#define LIBRARYMEMBER_HPP

#include "User.hpp"

class LibraryMember: public User
{
    private:
        int memberId;
        
    public:
        LibraryMember(string n, int id);
        void showDetails() const override;
        ~LibraryMember();
};

#endif // LIBRARYMEMBER_HPP
