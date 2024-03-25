 # Q1
```
37
```
### explanation
```cpp
    /*
    first loop
    {x+= x--} ====> {10 += 10} ==> (x=20) / {x--} ==> (x = 20-1 = 19) 
    second loop
    {x+= x--} ====> {19 += 19} ==> (x=38) / {x--} ==> (x = 38 - 1 = 37)
    */
```
# Q2
## a) x = 11
```
x = 10
a = 5
b = 2
d = -5
```
### explanation
```cpp
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
```
## b) x = 20
```cpp
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
```
# Q3
```cpp
#include <iostream>
using namespace std;
int main()
{
    float s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 != s2 && s1 != s3 && s2 != s3)
        cout << "scalene triangle";
    else if (s1 == s2 && s1 == s3)
        cout << "Equilateral triangle";
    else if (s1 == s2 || s1 == s3 || s2 == s3)
        cout << "isosceles triangle";
    system("pause");
    return 0;
}
```
# Q4
```cpp
#include <iostream>
using namespace std;
int main()
{
    int x, y, hcf = 0;
    cin >> x >> y;
    for (int i = 2; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    cout << "hcf of " << x << " & " << y << " = " << hcf;
    system("pause");
    return 0;
}
```
