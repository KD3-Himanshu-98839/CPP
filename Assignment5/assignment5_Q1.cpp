#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(void) : day(1), month(1), year(2000)
    {}
    Date(int day, int month, int year) : day(day), month(month), year(year)
    {}
    void acceptDate()
    {
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }
    void printDate()
    {
        cout << "Date is: " << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    string address;
    Date birthDate;

public:
    Person(void) : name(""), address("")
    {}
    Person(string name, string address, Date birthDate) : name(name), address(address), birthDate(birthDate)
    {}
    void acceptPersonDetails(void)
    {
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter birthDay: "<<endl;
        this->birthDate.acceptDate();
        cout<<endl;
    }

    void displayPersonDetails(void)
    {
        cout<<"--------------- Person Details ---------------"<<endl;
        cout << "Name : " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Birth Date is : ";
        this->birthDate.printDate();
        cout<<endl;
    }
};

class Student
{
private:
    int id;
    int marks;
    string course;
    Date joiningDate;
    Date endDate;

public:
    Student(void) : id(0), marks(0), course("")
    {}
    Student(int id, int marks, string course, Date joiningDate, Date endDate) : id(id), marks(marks), course(course), joiningDate(joiningDate), endDate(endDate)
    {}
    Student(int id, int marks, string course, int joiningDay,int joiningMonth,int joiningYear, int endDay,int endMonth,int endYear ) : id(id), marks(marks), course(course), joiningDate(joiningDay,joiningMonth,joiningYear), endDate(endDay,endMonth,endYear)
    {}
    void acceptStudentDetails(void)
    {
        cout << "Enter Id : ";
        cin >> id;
        cout << "Enter course: ";
        cin >> course;
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter joining date : "<<endl;
        this->joiningDate.acceptDate();
        cout << "Enter end date : "<<endl;
        this->endDate.acceptDate();
        cout<<endl;
    }

    void displayStudentDetails(void)
    {
        cout<<"--------------- Students Details --------------"<<endl;
        cout << "Student id : " << id << endl;
        cout << "Course is : "<<course<<endl;
        cout << "Student Marks : " << marks << endl;
        cout << "Joining Date is : ";
        this->joiningDate.printDate();
        cout << "End Date is : ";
        this->endDate.printDate();
        cout<<endl;
    }
};


int main1()
{
    Person p1;
    p1.acceptPersonDetails();
    p1.displayPersonDetails();

    Student s1;
    s1.acceptStudentDetails();
    s1.displayStudentDetails();
    return 0;
}


int main(){
    Student s1;
    s1.displayStudentDetails();

    Student s2(1 ,80," CDAC ", 19,8,2026, 21,02,2027 );
    s2.displayStudentDetails();
}
