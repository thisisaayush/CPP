#include "Library.hpp"

int main()
{
    Library library;
    
    // add books
    library.addBook(new Book("The Great Wall", "F.Fradina", 1));
    library.addBook(new Book("World War 1", "J.F Wilderton", 2));
    
    // add members
    library.addMember(new LibraryMember("Alice", 101));
    library.addMember(new LibraryMember("Bob", 102));
    
    // display members
    library.displayMembers();
    // display books
    library.displayBooks();
    
    // issue a book
    library.issueBook(1);
    library.displayBooks();
    
    // return the book
    library.returnBook(1);
    library.displayBooks();
    
	return 0;
}
