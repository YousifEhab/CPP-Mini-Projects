#include <iostream>
using namespace std;
int main()
{
    int n, count = 1;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        count *= i;
    }
    cout << "Factorial of " << n << " is " << count << endl;
    // system("pause");
    return 0;
}