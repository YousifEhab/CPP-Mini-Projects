#include <iostream>
using namespace std;
int main()
{
    int a[3][3], sum = 0, w[3][3];
    cout << "Enter 9 Numbers of The Array \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Matrix you entered is \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    cout << "The Sum : " << sum << endl;
    for (int i = 0; i < 3; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < 3; j++)
        {
            row_sum += a[i][j];
        }
        cout << "The Sum of elements in Row "<<i+1<<" :" << row_sum << endl;
    }
    int max = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        
        if (a[i][i] > max)
        {
            max = a[i][i];
        }
    }
    cout << "The largest element located in the diagonal :" << max << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            w[i][j] = a[j][i];
        }
    }
        cout << "Transpose of the matrix you entered is \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << w[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
