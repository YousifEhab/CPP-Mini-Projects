#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of numbers from 0 to " << n << " is " << sum << endl;
    // system("pause");
    return 0;
}