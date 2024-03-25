#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y, counter = 0;
    cin >> x >> y;
    int i = min(x, y);
    do
    {
        bool isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == true)
        {
            counter++;
        }
        i++;
    } while (i <= max(x, y));
    cout << counter;
}