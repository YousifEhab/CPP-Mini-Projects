#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter The Number between 1 and 100 inclusive" << endl;
    cin >> x;
    if (x >= 1 && x <= 100)
    {
        cout << "OK" << endl;
    }
    else
        cout << "Out of range" << endl;
    // system("pause");
    return 0;
}