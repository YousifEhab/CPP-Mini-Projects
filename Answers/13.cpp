#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char z = ' ';
    cout << "Enter The First Number" << endl;
    cin >> x;
    cout << "Enter The Second Number" << endl;
    cin >> y;
    cout << "Enter The Operation Char" << endl;
    cin >> z;
    switch (z)
    {
    case '+':
        cout << "sum = " << x + y << endl;
        break;
    case '-':
        cout << "subtraction = " << x - y << endl;
        break;
    case '*':
        cout << "multiplication = " << x * y << endl;
        break;
    case '/':
        cout << "division = " << x / y << endl;
        break;
    case '%':
        cout << "modulus = " << x % y << endl;
        break;
    default:
        cout << "ERROR: unsupported Operator" << endl;
        break;
    }
    // system("pause");
    return 0;
}