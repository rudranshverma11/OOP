#include<iostream>
using namespace std;

class employee
{
public: 
int id;
string name;
int salary;
string dept;

employee(int emp_id , string n , int sal , string d)
    {
        cout<<"Constructor Called \n"<<endl;
       id=emp_id;
        name=n;
        salary=sal;
        dept=d;
    }
void display()
    {
        
        cout<<"Employee ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : $ "<<salary<<endl;
        cout<<"Department : "<<dept<<endl;
        
    }
    ~employee()
    {
        cout<<endl;
        cout<<"Destructor Called "<<endl;
            
    } 
    
};
int main()
{
    employee e1(25,"Rudransh",100000,"AI ML");
    e1.display();
    return 0;
    
}
