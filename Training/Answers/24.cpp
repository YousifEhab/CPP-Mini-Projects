#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        if(i%2 != 0)
        count++;
    }
    cout << "Number of positive odd numbers below " << n << " is " << count << endl;
    // system("pause");
    return 0;
}