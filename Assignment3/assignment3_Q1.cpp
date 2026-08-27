#include <iostream>
using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    static double pi;

public:
    Cylinder() : radius(0), height(0)
    {
    }

    Cylinder(double radius, double height) : radius(radius), height(height)
    {
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double getRadius(void)
    {
        return radius;
    }
    void setHeight(double height)
    {
        this->height = height;
    }
    double getHeight()
    {
        return height;
    }

    double calculateVolume()
    {
        double result = Cylinder::pi * this->radius * this->radius * this->height;
        return result;
    }
};

double Cylinder::pi = 3.14; //

int menuList()
{
    int choice;
    cout << "\n\n";
    cout << "         Cylinder Operations Menu\n";
    cout << "-----------------------------------------\n";
    cout << "1. Calculate Volume (Default Values)\n";
    cout << "2. Enter Radius and Height\n";
    cout << "3. Display Radius\n";
    cout << "4. Update Radius\n";
    cout << "5. Display Height\n";
    cout << "6. Update Height\n";
    cout << "7. Exit\n";
    cout << "------------------------------------------\n";
    cout << "Enter your choice: ";

    cin >> choice;

    return choice;
}

int main()
{
    int choice;
    double radius, height;
    Cylinder c2;

    while ((choice = menuList()) != 7)
    {
        switch (choice)
        {
        case 1:
        {
            cout << "Volume of Cylinder is: " << c2.calculateVolume() << endl;
            break;
        }
        case 2:
        {

            cout << "Enter radius: ";
            cin >> radius;
            cout << "Enter height: ";
            cin >> height;

            c2.setRadius(radius);
            c2.setHeight(height);

            cout << "Volume of Cylinder is: " << c2.calculateVolume() << endl;
            break;
        }
        case 3:
        {
            cout << "Radius is : " << c2.getRadius() << endl;
            break;
        }
        case 4:
        {
            double newRadius;
            cout << "Pass the new Radius is : ";
            cin >> newRadius;
            c2.setRadius(newRadius);
            break;
        }
        case 5:
        {
            cout << "Height is : " << c2.getHeight() << endl;
            break;
        }
        case 6:
        {
            double newHeight;
            cout << "Pass the new Height is : ";
            cin >> newHeight;
            c2.setHeight(newHeight);
        }

        default:
            break;
        }
    }
}