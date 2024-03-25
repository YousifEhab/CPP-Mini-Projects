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
