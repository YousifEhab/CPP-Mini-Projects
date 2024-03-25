#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int a = 4, b = 2;
    int d = 0;
    switch (--x)
    {
    case 10:
        d += (++a > b || a++ != a * b) * a;
    case 7:
        d += (a * a < b && ++a > b) - 2 * a;
        break;
    default:
        d += 3 * b;
    }
    cout << "x=" << x << endl
         << "a=" << a << endl
         << "b=" << b << endl
         << "d=" << d;
    return 0;
}
/*
When x = 11
switch (10)
case 10:
d += (++a > b || a++ != a * b) * a;
d += {(1) * 5} ===> (First Comparison is true hence the condition is satisfied resulting in 1 ) 
case 7:
d += (a * a < b && ++a > b) - 2 * a; {5 += 0 - 2 * 5} (First Comparison is false hence the condition is not satisfied resulting in 0 )
x = 10
a = 5
b = 2
d = -5
*/
/*
When x = 20
switch (19)
default:
d += 3 * b; 
d += 3 * 2;
x = 19
a = 4
b = 2
d = 6
*/
