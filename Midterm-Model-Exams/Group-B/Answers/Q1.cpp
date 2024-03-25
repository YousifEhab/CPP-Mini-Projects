#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x * 2)
    {
    default:
        cout << "default, ";
    case 4:
        cout << " 4, ";
    case 2:
        cout << " 2, ";
        break;
    case 10:
        cout << " 10, ";
    }
    return 0;
}
/*
x = 0 ===> default,  4,  2,
x = 2 ===>  4, 2,
*/
