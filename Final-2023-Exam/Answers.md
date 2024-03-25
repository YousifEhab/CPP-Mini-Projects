# Q1
### a)
```
2,4,90
0,5,90
```
### b)
```cpp
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y, counteven, countodd, z;
    float t;
    t = pow(10, 10);
    cout << "Enter your Two Numbers but they must be between 1-10 digits \n";
    do {
        cin >> x >> y;
    } while (x > t || y > t);
    counteven = 0;
    countodd = 0;
    for (int i = 0; i < 11; i++)
    {
        z = x % 10;
        x = x / 10;
        if (z % 2 == 0) counteven++;
        else countodd++;
        if (x== 0) break;
    }
    cout << "The Firest Number counter is \n" << "Even = " << counteven << "\n ODD = " << countodd << endl;
    counteven = 0;
    countodd = 0;
    for (int i = 0; i < 11; i++)
    {
        z = y % 10;
        y = y / 10;
        if (z % 2 == 0) counteven++;
        else countodd++;
        if (y == 0) break;
    }
    cout << "The Firest Number counter is \n" << "Even = " << counteven << "\n ODD = " << countodd << endl;
}
```
# Q2
### a) Out of Midterm Scope
### b)
```cpp
#include<iostream>
using namespace std;
int main()
{
    int x, result=1, sum, counter=1;
    cout << "enter positive numbers\n";
    do {
        cin >> x;
        if (x < 0) break;
        if (counter % 2 == 1) result *= x;
        else if (counter % 2 == 0) result += x;
        counter++;
} while (1);
cout << "\n result == " << result << endl;
}
```
### c)
```cpp
int i = 1;
while (i < n) {
cout << i * i << " ";
i++;
}
```
### d)
```
1
1
```
# Q3
### a)
```cpp
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i = 0, j = 1, k = 2, x, y, n, a1 = 0, a2 = 0, fact = 1, sum = 0, counter = 0;
    float a3 = 0, avg;
    cout << "enter x then y then n \n";
    cin >> x >> y >> n;
    for (; i < n; i++) {
        a1 += pow(k, 2);
        fact *= j;
        a2 += fact;
        a3 += (float)1 / (pow(x, 2 * i));
        if (x < y && x % n == 0)
        {
        sum += x;
        counter++;
        }
        x++;
        j++;
        k++;
    }
    if (counter == 0) avg = 0;
    else if (counter != 0)avg = sum / counter;
    cout << "a1 = " << a1 << "\n a2 = " << a2 << "\n a3 = " << a3 << "\n avg =" << avg << endl;
    }
```
### b)
```
5
i=1 , j=5 , X=5
i=1 , j=6 , X=5
10
i=2 , j=10 , X=10
i=2 , j=11 , X=10
2
i=3 , j=2 , X=2
i=3 , j=3 , X=2
-3
```
# Q4
## Out of Midterm scope
