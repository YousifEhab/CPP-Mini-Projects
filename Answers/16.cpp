#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;
    float determinant = b * b - 4 * a * c;
    if (determinant > 0)
    {
        cout << "root1 = " << (-b + sqrt(determinant)) / (2 * a) << endl;
        cout << "root2 = " << (-b - sqrt(determinant)) / (2 * a) << endl;
    }
    else if (determinant == 0)
    {
        cout << "root1 = root2 = " << -b / (2 * a) << endl;
    }
    else
    {
        cout << "root1 = " << -b / (2 * a) << " + i" << sqrt(-determinant) / (2.0 * a) << endl;
        cout << "root2 = " << -b / (2 * a) << " - i" << sqrt(-determinant) / (2.0 * a) << endl;
    }
    // system("pause");
    return 0;
}