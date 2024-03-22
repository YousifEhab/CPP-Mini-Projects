#include <iostream>
using namespace std;
int main()
{
    int choice;
    double radius, width, length, height, base;
    cout << " AREA CALCULATOR\n";
    cout << "What shape to calculate its area?\n";
    cout << "choose numbers from 1 to 3\n";
    cout << "1- Rectangle\n";
    cout << "2- triangle\n";
    cout << "3- circle\n";
    cout << "Your choice is = ";
    cin >> choice;
    if (choice > 3 || choice < 1)
    {
        cout << "ERROR: Enter a valid choice :<";
    }
    else if (choice == 1)
    {
        cout << "You choose to calculate the area of a Rectangle\n";
        cout << "length of the rectangle = ";
        cin >> length;
        cout << "width of the rectangle = ";
        cin >> width;
        cout << "Area of the rectangle is = Length * width = " << length * width;
    }
    else if (choice == 2)
    {
        cout << "You choose to calculate the area of a Triangle\n";
        cout << "Height of the triangle = ";
        cin >> height;
        cout << "base of the triangle = ";
        cin >> base;
        cout << "Area of the triangle is = (base * height)/2 = " << (base * height) / 2;
    }
    else if (choice == 3)
    {
        cout << "You choose to calculate the area of a Circle\n";
        cout << "Radius of the rectangle = ";
        cin >> radius;
        cout << "Area of the circle is = π * r * r = " << radius * radius * 3.14159;
    }
    // system("pause");
    return 0;
}
