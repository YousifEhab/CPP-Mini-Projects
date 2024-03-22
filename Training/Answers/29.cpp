#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, r;
    cout << "Enter num" << endl;
    cin >> n;
    cout << "Enter Times of repetitions" << endl;
    cin >> r;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    for(int i = 1; i <= r; i++)
    {
        cout << n << " ^ " << i << " = " << pow(n,i) << endl;
    }
    // system("pause");
    return 0;
}