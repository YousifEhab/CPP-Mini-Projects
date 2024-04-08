#include <iostream>
using namespace std;
int main()
{
    int Hours, Minutes, Seconds, X;
    cout << "Enter Large number of Seconds : ";
    cin >> X;
    Hours = X / 3600;
    Minutes = (X % 3600) / 60;
    Seconds = (X % 3600) % 60;
    cout << "(" << Hours << ":" << Minutes << ":" << Seconds << ")";
    // system("pause");
    return 0;
}
