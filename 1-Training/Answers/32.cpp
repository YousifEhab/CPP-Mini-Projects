#include <iostream>
using namespace std;
int main()
{
    int a[100], b[100], c[100], d[100], e[100], n;
    do
    {
        cout << "Enter THe Size Of Two Array (between 1 and 100)\n";
        cin >> n;
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] =";
        cin >> a[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "B[" << i << "] =";
        cin >> b[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
        d[i] = a[i] * a[i] - b[i] * b[i];
        e[i] = a[i] * a[i] + b[i] * b[i] - a[i] * b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "C[" << i << "] = " << c[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "D[" << i << "] = " << d[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "E[" << i << "] = " << e[i] << endl;
    }
    cout << endl;
}