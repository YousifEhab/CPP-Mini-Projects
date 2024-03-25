# Q1
## I
### a)
```
a=20
b=30
```
### b)
```
sum0sum2sum2sum6
```
### c)
```
f=4f=6
```
### d)
```
i=1, j5 ,t=5
i=1, j7 ,t=12
i=2, j5 ,t=22
i=2, j7 ,t=36

```
## II
### a)
```cpp
float x=1,sum = 0;
while(x != 0){ cin >> x; sum+= x*x;}
```
### b)
```cpp
double x=1 ,y =0;
do{
y += int(x) % 3; x++;
}while(1/x > 0.01);
```
# Q2
### a)
```cpp
int sum = 0, n, sign = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += sign * i * i;
        sign *= -1;
    }
```
### b)
```cpp
int x, f;
    cin >> x;
    switch (x)
    {
    case 2:
    case 5:
    case 7:
        f = x * x;
        break;
    case 3:
    case 6:
        f = x + 1;
        break;
    default:
        if (x < 0)
            f = x * x * x * x;
        else
            f = 0;
    }
    cout << "f=" << f << endl;
```
### c)
```cpp
for (int i = 3; i <= 10; i++)
        for (int j = i + 1; j <= 15; j++)
            sum += i + i * j;
    cout << "sum=" << sum << endl;
```
# Q3
## I
```
i=1, f=5, s=2
i=2, f=9, s=18
i=3, f=9, s=18
i=4, f=13, s=234
```
## II
```cpp
#include <iostream>
using namespace std;
int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int key;
    do
    {
        cout << "Enter run time 1" << endl;
        cin >> h1 >> m1 >> s1;
        cout << "Enter run time 2" << endl;
        cin >> h2 >> m2 >> s2;
        int diff;
        diff = (h1 * 3600 + m1 * 60 + s1) - (h2 * 3600 + m2 * 60 + s2);
        int h3, m3, s3;
        h3 = diff / 3600;
        m3 = (diff % 3600) / 60;
        s3 = (diff % 3600) % 60;
        cout << "difference time =" << h3 << ":" << m3 << ":" << s3 << endl;
        cout << "Enter 1 to continue or another key to exit" << endl;
        cin >> key;
    } while (key == 1);
    system("pause");
    return 0;
}
```

