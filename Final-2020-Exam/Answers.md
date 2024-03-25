# Q1
## a)
```
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
```
## b)
```
i=3, f=9, s=9
i=6, f=54, s=63
i=9, f=486, s=549
```
# Q2
## a)
```
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
```
## b)
```
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
```
