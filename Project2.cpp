#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string employee_name;
    int employee_id;
    string employee_email;
    string employee_phone_number;
    string employee_gender;
    int employee_salary;

    void display() {
        cout << "Employee Name   : " << employee_name << endl;
        cout << "Employee ID     : " << employee_id << endl;
        cout << "Employee Email  : " << employee_email << endl;
        cout << "Employee Phone  : " << employee_phone_number << endl;
        cout << "Employee Gender : " << employee_gender << endl;
        cout << "Employee Salary : " << employee_salary << endl;
    }
};

int main() {
    Employee employee1;

    cout << "Enter details for Employee 1:\n";
    cout << "Employee Name: ";
    cin >> employee1.employee_name;
    cout << "Employee Id: ";
    cin >> employee1.employee_id;
    cout << "Employee email: ";
    cin >> employee1.employee_email;
    cout << "Employee Phone Number: ";
    cin >> employee1.employee_phone_number;
    cout << "Employee Gender: ";
    cin >> employee1.employee_gender;
    cout << "Employee Salary: ";
    cin >> employee1.employee_salary;

    cout << "\nEmployee 1 Details\n";
    employee1.display();

    return 0;
}