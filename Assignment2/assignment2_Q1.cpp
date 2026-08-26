#include <iostream>
using namespace std;
class Box
{
private:
    int length;
    int width;
    int height;

public:
    Box(void)
    {
        this->length = 2;
        this->width = 12;
        this->height = 7;
    }
    Box(int x)
    {
        this->length = x;
        this->width = x;
        this->height = x;
    }
    Box(int length, int weidth, int height)
    {
       this->length = length;
       this->width = weidth;
       this->height = height;
    }

    void calculateVolumeOfBox()
    {
        int result = length * width * height;
        cout << "Volume of Box is: " << result << endl;
    }
};

int menuList(void)
{

    int choice;

    cout << "\n===== MENU =====" << endl;
    cout << "1. Calculate Volume with default values" << endl;
    cout << "2. Calculate Volume with same length, breadth and height" << endl;
    cout << "3. Calculate Volume with different length, breadth and height" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";

    cin >> choice;
    return choice;
}

int main()
{

    int choice;
    while ((choice = menuList()) != 4)
    {
        switch (choice)
        {
        case (1):
        {
            Box b1;
            b1.calculateVolumeOfBox();

            break;
        }

        case (2):
        {
            int value;
            cout << "Enter single value: " << endl;
            cin >> value;
            Box b2(value);
            b2.calculateVolumeOfBox();

            break;
        }

        case (3):
        {
            int l, w, h;
            cout << "Enter Length: ";
            cin >> l;
            cout << "Enter Width: ";
            cin >> w;
            cout << "Enter Height: ";
            cin >> h;
            Box b2(l, w, h);
            b2.calculateVolumeOfBox();

            break;
        }

        default:
            break;
        }
    }
}