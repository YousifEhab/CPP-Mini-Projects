#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << n << "/2 = " << n / 2;
            n /= 2;
        }   
        else
        {
            cout << n << "*3+1 = " << n * 3 + 1;
            n = 3 * n + 1;
        }
        if (n == 1)
        {
            break;
        }
        cout << endl;
    }
    // system("pause");
    return 0;
}