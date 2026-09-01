#include <iostream>
using namespace std;

class Empolyee
{
private:
    int id;
    double salary;

public:
    Empolyee() : id(0), salary(0.0)
    {
    }
    Empolyee(int id, double salary) : id(id), salary(salary)
    {
    }
    void setId(int id)
    {
        this->id = id;
    }
    int getId(void)
    {
        return id;
    }
    void setSalary(double salary)
    {
        this->salary = salary;
    }
    double getSalary(void)
    {
        return salary;
    }

    void acceptRecord()
    {
        cout << "Enter Id: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayRecord()
    {
        cout << "Id is : " << id << endl;
        cout << "Salary is : " << salary << endl;
    }
};

class Manager : virtual public Empolyee
{
private:
    double bonus;

public:
    Manager() : bonus(0.0)
    {
    }
    Manager(double bonus) : bonus(bonus)
    {
    }
    Manager(int id, double salary, double bonus) : Empolyee(id, salary)
    {
        this->bonus = bonus;
    }
    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }
    double getBonus(void)
    {
        return bonus;
    }

    void acceptRecord()
    {
        Empolyee::acceptRecord();
        acceptManager();
    }

    void displayRecord()
    {
        Empolyee::displayRecord();
        displayManager();
    }

protected:
    void acceptManager()
    {
        cout << "Enter Bonus: ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus is : " << bonus << endl;
    }
};

class Salesman : virtual public Empolyee
{
private:
    double comission;

public:
    Salesman() : comission(0.0)
    {
    }
    Salesman(double comission) : comission(comission)
    {
    }
    Salesman(int id, double salary, double comission) : Empolyee(id, salary)
    {
        this->comission = comission;
    }
    void setComission(double comission)
    {
        this->comission = comission;
    }
    double getComission(void)
    {
        return comission;
    }

    void acceptRecord()
    {
        Empolyee::acceptRecord();
        acceptSalesman();
    }

    void displayRecord()
    {
        Empolyee::displayRecord();
        displaySalesman();
    }

protected:
    void acceptSalesman()
    {
        cout << "Enter comission: ";
        cin >> comission;
    }
    void displaySalesman()
    {
        cout << "Comission is : " << comission << endl;
    }
};

class SalesManager : public Manager, public Salesman
{

public:
    SalesManager()
    {
    }
    SalesManager(int id, double salary, double bonus, double comission) : Empolyee(id, salary), Manager(bonus), Salesman(comission)
    {
    }
    void acceptRecord()
    {
        Empolyee::acceptRecord();
        Manager::acceptManager();
        Salesman::acceptSalesman();
    }

    void displayRecord()
    {
        Empolyee::displayRecord();
        Manager::displayManager();
        Salesman::displaySalesman();
    }

};


int main()
{
    SalesManager sm;
    sm.acceptRecord();
    sm.displayRecord();
    return 0;
}
