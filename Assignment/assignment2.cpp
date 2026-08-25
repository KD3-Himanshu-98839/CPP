#include <iostream>
using namespace std;
class Date
{
public:
    int day;
    int month;
    int year;

    void initDate(void)
    {
        this->day = 1;
        this->month = 1;
        this->year = 2000;
    }

    void AcceptDateFromConsole(void)
    {
        cout << "Enter Day:" << endl;
        cin >> this->day;
        cout << "Enter Month:" << endl;
        cin >> this->month;
        cout << "Enter Year:" << endl;
        cin >> this->year;
    }

    bool isLeapYear(void)
    {
        if ((this->year % 4 == 0 && (this->year % 100) != 0) || this->year % 400 == 0)
        {
            return true;
        }

        return false;
    }

    void PrintDateFromConsole(void)
    {
        cout << "Date is: " << this->day << "/" << this->month << "/" << this->year << endl;
    }
};

int menuList(void)
{
    int choice;
    cout << "\n<-------------MENU LIST---------------->" << endl;
    cout << "1.Provide the Date" << endl;
    cout << "2.Display the Date" << endl;
    cout << "3.Check Leap Year Or Not" << endl;
    cout << "4.Exit" << endl;
    printf("Enter the choice : ");
    scanf("%d", &choice);
    return choice;
}

int main()
{
    Date dt;
    int choice;
    while ((choice = menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
            dt.AcceptDateFromConsole();
            break;
        case 2:
            dt.PrintDateFromConsole();
            break;

        case 3:
            bool result = dt.isLeapYear();
            if (result == true)
            {
                cout << "Year is Leap Year." << endl;
            }
            else
            {
                cout << "Year is not a leap year." << endl;
            }

            break;
        }
    }
    return 0;
}