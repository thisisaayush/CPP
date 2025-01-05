#include "Book.hpp"

Book::Book(string t, string a, int i): title(t), author(a), isIssued(false) {}

string Book::getTitle() const 
{
    return title;
}

string Book::getAuthor() const
{
    return author;
}

int Book::getId() const
{
    return id;
}

bool Book::getIssuedStatus() const
{
    return isIssued;
}

void Book::issueBook()
{
    isIssued = true;
}

void Book::returnBook()
{
    isIssued = false;
}

Book::~Book() {}

