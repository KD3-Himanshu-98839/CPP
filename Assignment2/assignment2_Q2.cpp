#include <iostream>
using namespace std;
class TollBooth
{
private:
    unsigned int totalCar;
    unsigned int payingCarCount;
    unsigned int nonPayingCarCount;
    double totalMoney;

public:
    TollBooth(void)
    {
        this->totalCar = 0;
        this->payingCarCount = 0;
        this->nonPayingCarCount = 0;
        this->totalMoney = 0;
    }

    void payingCar()
    {
        this->payingCarCount = this->payingCarCount + 1;
        this->totalMoney = this->totalMoney + 0.50;
    }
    void nonPayingCar()
    {
        this->nonPayingCarCount = this->nonPayingCarCount + 1;
    }
    void printOnConsole()
    {
        this->totalCar = this->payingCarCount + this->nonPayingCarCount;

        cout << "\n=====================================\n";
        cout << "         Toll Booth Summary\n";
        cout << "=====================================\n";
        cout << " Paying Cars          : " << this->payingCarCount << endl;
        cout << " Non-paying Cars      : " << this->nonPayingCarCount << endl;
        cout << "-------------------------------------\n";
        cout << " Total Cars           : " << this->totalCar << endl;
        cout << " Total Money Collected: " << this->totalMoney << endl;
        cout << "=====================================\n";
    }
};

int menuList(void)
{
    int choice;
    cout << "\n===== Menu List =====" << endl;
    cout << "1. Paying Car" << endl;
    cout << "2. Non-Paying Car" << endl;
    cout << "3. Print" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";

    cin >> choice;
    return choice;
}

int main()
{
    TollBooth tb;
    int choice;
    while ((choice = menuList()) != 4)
    {
        switch (choice)
        {
        case 1:
        {
            tb.payingCar();
            break;
        }
        case 2:
        {
            tb.nonPayingCar();
            break;
        }
        case 3:
        {
            tb.printOnConsole();
            break;
        }

        default:
            break;
        }
    }

    return 0;
}