#include <iostream>
using namespace std;

class Student
{
    string name;
    int age;

public:
    void setData(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;

    s.setData("Rudransh", 19);
    s.display();

    return 0;
}
