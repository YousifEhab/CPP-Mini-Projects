#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3, average;
    cout << " Please Enter 3 Integers \n";
    cout << "n1 = ";
    cin >> n1;
    cout << "n2 = ";
    cin >> n2;
    cout << "n3 = ";
    cin >> n3;
    average = (n1 + n2 + n3) / 3;
    cout << "average of " << n1 << ", " << n2 << ", " << n3 << " = " << average;
    // system("pause");
    return 0;
}
