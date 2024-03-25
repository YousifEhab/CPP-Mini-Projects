#include <iostream>
using namespace std;
int main()
{
    int i = 1, f = 3, n = 10, s = 0;
    while (i <= n)
    {
        if (i % 3 == 0)
        {
            f *= i;
            s += f;
            cout << "i=" << i << ", f=" << f << ", s=" << s << endl;
        }
        i++;
    }
    return 0;
}
/*
i=3, f=9, s=9
i=6, f=54, s=63
i=9, f=486, s=549
*/