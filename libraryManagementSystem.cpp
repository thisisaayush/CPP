#include <iostream>
#include <vector>
#include <string>

//Base Class: Item
class Item
{
    protected:
        std::string title;
        std::string author;
        bool isAvailable;

    public:
    // Constructor
    Item(std::string t, std::string a): title(t), author(a), isAvailable(true){}

    // virtual function to display information of the book- helps to achieve Polymorphism
    virtual void displayInfo()
    {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nAvailable: " 
                  << (isAvailable ? "Yes" : "No") << std::endl;
    }

    // function to borrow the item
    bool borrowItem()
    {
        if(isAvailable)
        {
            isAvailable = false;
            return true;
        }
        return false;
    }

    // function to return the item
    void returnItem()
    {
        isAvailable = true;
    }

    // getter for title
    std::string getTitle() const 
    {
        return title;
    }

    // getter for availability
    bool getAvailability() const
    {
        return isAvailable;
    }
};


// Derived class: Book- Inherits from Item

class Book : public Item
{
    private:
        std::string genre;
    
    public: 
    // constructor
    Book(std::string t, std::string a, std::string g) : Item(t, a), genre(g) {}

    // overriding the displayInfo method of Item
    void displayInfo() override
    {
        std::cout << "Book: " << title << "\nAuthor: " << author << "\nGenre: " << genre    
                  << "\nAvailable: " << (isAvailable ? "Yes" : "No") << std::endl;
    }
};

