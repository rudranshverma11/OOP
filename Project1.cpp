#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    string publisher;
    float price;

public:
    // Function to record book details
    void getDetails()
    {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Publisher Name: ";
        getline(cin, publisher);

        cout << "Enter Book Price: ";
        cin >> price;
        cin.ignore();
    }

    // Function to display book details
    void displayDetails()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main()
{
    Book b;

    b.getDetails();
    b.displayDetails();

    return 0;
}