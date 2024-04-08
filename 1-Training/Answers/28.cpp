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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // system("pause");
    return 0;
}