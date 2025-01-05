#include "Library.hpp"
#include <iostream>

void Library::addBook(Book* book)
{
    books.push_back(book);
}

void Library::addMember(LibraryMember* member)
{
    members.push_back(member);
}

void Library::issueBook(int bookId)
{
    for (auto book : books)
    {
        if (book->getId() == bookId)
        {
            if(!book->getIssuedStatus())
            {
                book->issueBook();
                cout << "Book issued sucessfully!" << endl;
            }
            
            else
            {
                cout << "Book is already issued." << endl;
            }
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void Library::returnBook(int bookId)
{
    for (auto book : books)
    {
        if(book->getId() == bookId)
        {
            if(book->getIssuedStatus())
            {
                book->returnBook();
                cout << "Book returned successfully!" << endl;
            }
            else 
            {
                cout << "Book was not issued!" << endl;
            }
            return;
        }
    }
    cout << "Book not found!" << endl;
}

void Library::displayBooks() const
{
    cout << "Book in Library:" << endl;
    
    for (const auto book : books)
    {
        cout << "ID: " << book->getId()
             << ", Title: " << book->getTitle()
             << ", Author: " << book->getAuthor()
             << ", Issued: " << (book->getIssuedStatus() ? "Yes" : "No")
             << endl;
    }
}

void Library::displayMembers() const
{
    cout << "Library Member:" << endl;
    
    for (const auto member : members)
    {
        member->showDetails();
    }
}

Library::~Library()
{
    for (auto book : books) delete book;
    for (auto member : members) delete member;
}

