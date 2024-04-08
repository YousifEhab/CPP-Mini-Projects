# Q1
### a)
```cpp
int option;
cin >> option;
    if (option == 0) {
        cout << "Add process" << endl;
        cout << "Mult process" << endl;
}
    else if ( option == 2) {
        cout << "Add process" << endl;
        cout << "Mult process" << endl;
}
    else if ( option == 3) {
        cout << "Mult process" << endl;
}
    else if ( option == 4) {
        cout << "Div Process" << endl;
        cout << "Invalid option";
}
    else
        cout << "invalid option";
```
### b) 
```cpp
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
```
# Q2
### a)
```
First loop: K = 3, Fact = 3, Sum = 3
Second loop: K = 5, Fact = 15, Sum = 3
Third loop: K = 7, Fact = 105, Sum = 3
Fourth loop: K = 9, Fact = 945, Sum = 948
Fifth loop: K = 11, Fact = 10395, Sum = 948
OUTPUT:
K = 3 Fact = 3 Sum = 3
K = 9 Fact = 945 Sum = 948
```
# Q2
### b)
```cpp
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N;
    float Sum;
    cout << "Enter the N-th term : ";
    cin >> N;
    for (int i=1; i <= (2*N) - 1;i++){
        Sum += sqrt(i);
    }
    cout << "Sum of the series = " << Sum;
    return 0;
}
```
