#include <iostream>
#include <vector>
#include <string>
using namespace std;


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
        cout << "Title: " << title << "\nAuthor: " << author << "\nAvailable: " 
                  << (isAvailable ? "Yes" : "No") << endl;
    }

    // function to borrow the item
    bool borrowItem()
    {
        if(isAvailable)
        {
            isAvailable = false;
            cout << "You have borrowed: " << title << endl;
            return true;
        }
        return false;
    }

    // function to return the item
    void returnItem()
    {
        isAvailable = true;
        cout << "You have returned: " << title << endl;
    }

    // getter for title
    string getTitle() const 
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
        string genre;
    
    public: 
    // constructor
    Book(string t, string a, string g) : Item(t, a), genre(g) {}

    // overriding the displayInfo method of Item
    void displayInfo() override
    {
        cout << "Book: " << title << "\nAuthor: " << author << "\nGenre: " << genre    
                  << "\nAvailable: " << (isAvailable ? "Yes" : "No") << endl;
    }
};


// Library Class to manage the collection of items

class Library 
{
    private:
        vector<Item*> items;

    public:
        void addItem(Item* item)
        {
            items.push_back(item);
        } 

        void displayLibraryItems() 
        {
            cout << "Library Collection: \n";

            for (auto& item : items)
            {
                item -> displayItemDetails();
                cout << "---------------------\n";
            }
        }

        void searchItemByTitle(const string& title)
        {
            bool found = false;
            
            for (auto& item : items)
            {
                if (item -> getTittle() == title)
                {
                    item -> displayItemDetails();
                    found = true;
                    break;
                }
            }

            if (!found) 
            {
                cout << "Item with title '" << title < "' not found." << endl;
            }
        }

        void borrowItemByTitle(const string& title)
        {
            bool found = false;

            for (auto& item : items)
            {
                if (item -> getTitle() == title)
                {
                    item -> borrowItem();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Item with title '" << title << "' not found in the library." << endl;
            }
        }

        void returnItemByTitle(const string& title)
        {
            bool found = false;

            for (auto& item : items)
            {
                if (item -> getTitle() == title)
                {
                    item -> returnItem();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Item with title '" << title << "' not found." << endl;
            }
        }
};

// main function
int main() 
{
    Library library;

    library.addItem(new Book("The Great Wall of China", "Hy.Fiung"));
    library.addItem(new Book("The Society", "D.Fexnghe"));
    library.addItem(new Book("Strength of Women", "F.Ounlfa"));
    library.addItem(new Book("The Owner", "B.Dialbe"));
    library.addItem(new Book("Market & Economics", "JJ.Portner"));
    library.addItem(new Book("Math and History", "AI.Loplkd"));

    library.displayLibraryItems();

    cout << "\nSearching for 'The Society:\n";
    library.searchItemByTitle("The Society");
    cout << "\nTrying to borrow 'The Owner':\n";
    library.borrowItemByTitle();

    return 0;
}