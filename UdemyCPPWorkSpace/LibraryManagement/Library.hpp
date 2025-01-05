#ifndef LIBRARY_HPP
#define LIBRARY_HPP

#include "Book.hpp"
#include "LibraryMember.hpp"
#include <vector>

class Library
{
    private:
        vector<Book*> books;
        vector<LibraryMember*> members;
        
    public:
        void addBook(Book* book);
        void addMember(LibraryMember* member);
        void issueBook(int bookId);
        void returnBook(int bookId);
        void displayBooks() const;
        void displayMembers() const;
        ~Library();
};

#endif // LIBRARY_HPP
