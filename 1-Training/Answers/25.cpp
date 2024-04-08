#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    x = (n-1)*2; 
    cout << "Nth Even Number is = " << x << endl;
    // system("pause");
    return 0;
}