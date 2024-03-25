#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 1; i < n; i++)
        {
            sum += cos(i);
        }
        cout << "sum of cos(i) from i = 1 to i = " << n << " = " << sum;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            sum += sin(i);
        }
        cout << "sum of sin(i) from i = 1 to i = " << n << " = " << sum;
    }
}
