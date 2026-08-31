#include<iostream>
using namespace std;

class Empolyee
{
private:
    int id;
    double salary;
public:
Empolyee() : id(0), salary(0.0)
{}
Empolyee(int id, double salary) : id(id), salary(salary)
{}
void setId(int id){
  this->id = id;
}
int getId(void){
 return id;
}
void setSalary(double salary){
  this->salary = salary;
}
double getSalary(void){
 return salary;
}

void acceptRecord(){
    cout<<"Enter Id: ";
    cin>>id;
    cout<<"Enter Salary: ";
    cin>>salary;
}

void displayRecord(){
    cout<<"Id is : "<<id<<endl;
    cout<<"Enter Salary: "<<salary<<endl;
}

};

