#include <iostream>
using namespace std;
int main()
{
    int A[10], sum = 0, sumeven = 0, Productodd = 1, Counter = 0;
    float average = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "A[" << i << "] =";
        cin >> A[i];
    }
    int Max = A[0], Min = A[0];
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
        average = sum / 10.0;
        if (A[i] % 3 == 0)
        {
            cout << "positions of integers that are divisible by 3 : [" << i << "]" << endl;
        }
        if (A[i] % 2 == 0)
        {
            sumeven += A[i];
            ++Counter;
        }
        else
        {
            Productodd *= A[i];
        }

        if (A[i] > Max)
        {
            Max = A[i];
        }
        if (A[i] < Min)
        {
            Min = A[i];
        }
    }
    cout << "The sum = " << sum << endl;
    cout << "The Average of all numbers = " << average << endl;
    cout << "The Average of Even numbers = " << sumeven / Counter << endl;
    cout << "The Product Odd = " << Productodd << endl;
    cout << "The maximum : " << Max << endl;
    cout << "The minimum : " << Min << endl;
    cout << "The difference between The maximum and The minimum : " << Max - Min << endl;
    return 0;
}
