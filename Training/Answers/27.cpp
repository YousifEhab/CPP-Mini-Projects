#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter num" << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "Invalid Input\n";
        return 0;
    }
    int isPrime = 1;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
    // system("pause");
    return 0;
}