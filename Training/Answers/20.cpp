#include <iostream>
using namespace std;
int main()
{
    double km, cm, ft, miles;
    cout << "choose a conversion: \n 1- km to miles \n 2- miles to km \n 3- cm to ft \n 4- ft to cm \n ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter the distance in km: ";
        cin >> km;
        miles = km * 0.621371;
        cout << km << " km = " << miles << " miles";
        break;
    case 2:
        cout << "Enter the distance in miles: ";
        cin >> miles;
        km = miles / 0.621371;
        cout << miles << " miles = " << km << " km";
        break;
    case 3:
        cout << "Enter the distance in cm: ";
        cin >> cm;
        ft = cm / 30.48;
        cout << cm << " cm = " << ft << " ft";
        break;
    case 4:
        cout << "Enter the distance in ft: ";
        cin >> ft;
        cm = ft * 30.48;
        cout << ft << " ft = " << cm << " cm";
        break;
    default:
        cout << "Invalid choice";
        break;
    }
    // system("pause");
    return 0;
}
