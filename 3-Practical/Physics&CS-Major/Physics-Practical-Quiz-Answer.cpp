#include <iostream>
using namespace std;
int main()
{
    double item1, item2, item3;
    cout << "Enter the price of the first item: ";
    cin >> item1;
    cout << "Enter the price of the second item: ";
    cin >> item2;
    cout << "Enter the price of the third item: ";
    cin >> item3;
    cout << "are you a student? (y/n): ";
    char is_student;
    cin >> is_student;
    double total = item1 + item2 + item3;
    double tax = total * 0.05; // 5% tax
    switch (is_student)
    {
    case 'y':
        if (total > 3000)
        {
            double discount = total * 0.50; // 50% discount
            cout << "You have a 50% discount" << endl;
            cout << "Total: " << total - discount << endl;
        }
        else if (total > 1000)
        {
            double discount = total * 0.20; // 20% discount
            cout << "You have a 20% discount" << endl;
            cout << "Total: " << total - discount << endl;
        }
        else
        {
            cout << "Total: " << total << endl;
        }
        break;
    case 'n':
        cout << "You don't have a discount" << endl;
        cout << "You have  a 5% tax" << endl; // 5% tax
        cout << "Total: " << total + tax << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }

    // system("pause");
    return 0;
}
