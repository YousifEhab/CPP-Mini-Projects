#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter The Number Between 1 and 12" << endl;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "march" << endl;
        break;
    case 4:
        cout << "april" << endl;
        break;
    case 5:
        cout << "may" << endl;
        break;
    case 6:
        cout << "june" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "Septemper" << endl;
        break;
    case 10:
        cout << "October" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    default:
        cout << "error message." << endl;
    }
    // system("pause");
    return 0;
}