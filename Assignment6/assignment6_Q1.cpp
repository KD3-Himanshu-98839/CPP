#include <iostream>
using namespace std;

class Product
{
private:
    int id;
    string title;

protected:
    double price;

public:
    Product() : id(0), title(""), price(0.0)
    {
    }
    Product(int id, string title, double price) : id(id), title(title), price(price)
    {
    }

    virtual void acceptRecord()
    {
        cout << "Enter the id:";
        cin >> id;
        cout << "Enter the title: ";
        cin >> title;
    }

    virtual double calculateDiscount(void) = 0;

    virtual void displayRecord()
    {
        cout << "ID: " << id << " | Title: " << title << " | Base Price: " << price << " ";
    }
};

class Book : public Product
{
private:
    string author;

public:
    Book() : author("")
    {
    }
    Book(int id, string title, string author, double price) : author("")
    {
    }
    void acceptRecord()
    {
        Product::acceptRecord();
        cout << "Enter the author :";
        cin >> author;
        cout << "Enter the Price :";
        cin >> price;
    }

    void printRecord()
    {
        Product::displayRecord();
        cout << "Author is:" << author << endl;
        cout << "Price is :" << price << endl;
    }

    double calculateDiscount()
    {
        return (price * 0.90);
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape() : artist("")
    {
    }
    Tape(int id, string title, string author, double price) : artist("")
    {
    }
    void acceptRecord()
    {
        Product::acceptRecord();
        cout << "Enter the artist: ";
        cin >> artist;
        cout << "Enter the Price :";
        cin >> price;
    }

    void printRecord()
    {
        Product::displayRecord();
        cout << "Author is: " << artist << endl;
        cout << "Price is :" << price << endl;
    }
    double calculateDiscount()
    {
        return (price * 0.95);
    }
};

int menuList()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Book" << endl;
    cout << "2.Tape" << endl;
    cout << "Enter the choice : ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    int index = 0;
    double totalBill = 0.0;

    Product *arr[3] = {nullptr, nullptr, nullptr};

    while ((choice = ::menuList()) != 0)
    {
        switch (choice)
        {
        case 1:
        {
            if (index < 3)
            {
                arr[index] = new Book();
                if (arr[index] != nullptr)
                {
                    arr[index]->acceptRecord();
                    index++;
                }
            }
            break;
        }

        case 2:
        {
            if (index < 3)
            {
                arr[index] = new Tape();
                if (arr[index] != nullptr)
                {
                    arr[index]->acceptRecord();
                    index++;
                }
            }
            break;
        }

        default:
            cout << "Invalid choice! Please select 0, 1, or 2." << endl;
            break;
        }

        if (index == 3)
        {
            cout << "\nYou have selected all 3 items!" << endl;
            break;
        }
    }

    cout << "\n------- FINAL RECEIPT -------" << endl;
    for (int i = 0; i < index; i++)
    {
        if (arr[i] != nullptr)
        {
            arr[i]->displayRecord();
            double finalPrice = arr[i]->calculateDiscount();
            cout << "Discounted Price: " << finalPrice << endl;
            totalBill += finalPrice;
        }
    }
    cout << "-----------------------------" << endl;
    cout << "Total Payable Bill: " << totalBill << endl;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != nullptr)
        {
            delete arr[i];
            arr[i] = nullptr;
        }
    }

    return 0;
}
