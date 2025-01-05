#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
using namespace std;

class Book
{
    private:
        string title;
        string author;
        int id;
        bool isIssued;
        
    public:
        Book(string t, string a, int i);
        string getTitle() const;
        string getAuthor() const;
        int getId() const;
        bool getIssuedStatus() const;
        void issueBook();
        void returnBook();
        ~Book();
};

#endif // BOOK_HPP
