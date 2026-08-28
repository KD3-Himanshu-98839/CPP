#include <iostream>
using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0)
    {
    }
    Time(int hour, int minute, int second) : hour(hour), second(second)
    {
    }
    int getHour(void)
    {
        return hour;
    }
    int getMinute(void)
    {
        return minute;
    }
    int getSeconds(void)
    {
        return second;
    }
    void setHour(int hour)
    {
        this->hour = hour;
    }
    void setMinute(int minute)
    {
        this->minute = minute;
    }
    void setSecond(int second)
    {
        this->second = second;
    }
    void printTime()
    {
        cout << hour <<" Hr : " << minute<<" Min : "<< second<<" Sec "<< endl;
    }

    void acceptRecord(void)
    {
        cout << "Hour : ";
        cin >> hour;
        cout << "Minute : ";
        cin >> minute;
        cout << "Second : ";
        cin >> second;
    }
};

int menuList()
{
    int choice;
    cout << "-----------------------------------------\n";
    cout << "   Time Menu     \n";
    cout << "-----------------------------------------\n";
    cout << "1. Add Time" << endl;
    cout << "2. Display All Time" << endl;
    cout << "3. Display only Hours" << endl;
    cout << "4. Exit" << endl;
    cout << "------------------------------------------\n";
    cout << "Enter your choice: ";

    cin >> choice;

    return choice;
}
int main()
{
    int n;
    int choice;
    cout << "Enter number of Time objects : ";
    cin >> n;

    Time *arr = new Time[n];

    while ((choice = menuList()) != 4)
    {
        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < n; i++)
            {
                arr[i].acceptRecord();
                cout<<endl;
            }

            break;
        }
        case 2:
        {
            cout << "\n-- All Time Objects --\n";

            for (int i = 0; i < n; i++)
            {
                cout << "Time " << i + 1 << " : "<<endl;
                arr[i].printTime();
            }

            break;
        }
        case 3:
        {
            cout << "\nAll Time Hours\n";

            for (int i = 0; i < n; i++)
            {
                cout << "Hours of "<< i+1 <<" object is : " << arr[i].getHour() << endl;
            }

            break;
        }

        default:
            break;
        }
    }

    return 0;
}