#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, sum = 0, sign = 1;
    cin >> n;
    for (int i = 0; i <= n; i+=2)
    {
        sum += sign * i * i;
        sign*=-1;
    }
    cout <<"sum = "<< sum << '\n';
}