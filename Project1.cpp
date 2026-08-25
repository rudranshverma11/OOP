#include <iostream>
using namespace std;

class Book {
public:
    char title[100];
    char author[100];
    float price;
    int bookid;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "Book ID: " << bookid << endl;
    }
};

int main() {
    Book book1, book2;

    cout << "Enter details for Book 1:\n";
    cout << "Title: ";
    cin >> book1.title;
    cout << "Author: ";
    cin >> book1.author;
    cout << "Price: ";
    cin >> book1.price;
    cout << "Book ID: ";
    cin >> book1.bookid;

    cout << "\nEnter details for Book 2:\n";
    cout << "Title: ";
    cin >> book2.title;
    cout << "Author: ";
    cin >> book2.author;
    cout << "Price: ";
    cin >> book2.price;
    cout << "Book ID: ";
    cin >> book2.bookid;

    cout << "\n Book 1 Details \n";
    book1.display();
    
    cout << "\n Book 2 Details \n";
    book2.display();

    return 0;
}