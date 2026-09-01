#include <iostream>
#include <string>
using namespace std;

class Book 
{
public:
    string title;
    string author;
    int  price;
    int quantity;

    Book() 
    {
        title = "None";
        author = "None";
        price = 0.0;
        quantity = 0;
    }

    Book(string t, string a, int p, int q) 
    {
        title = t;
        author = a;
        price = p;
        quantity = q;
    }

    void display() 
    {
        cout << "Title    : " << title << endl;
        cout << "Author   : " << author << endl;
        cout << "Price    : " << price << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "-------------------------\n";
    }
};

int main() 
{

    Book book1;

    Book book2("Object Oriented Programming", "Martin Luther", 42.50, 15);

    cout << "Book 1 Details:\n";
    book1.display();

    cout << "Book 2 Details:\n";
    book2.display();

    return 0;
}