#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n4, Max, Min;
    cout << "Enter four integer values:";
    cin >> n1 >> n2 >> n3 >> n4;
    Max = n1;
    Min = n1;
    // compute max
    if (Max < n2)
    {
        Max = n2;
    }
    if (Max < n3)
    {
        Max = n3;
    }
    if (Max < n4)
    {
        Max = n4;
    }
    // compute min
    if (Min > n2)
    {
        Min = n2;
    }
    if (Min > n3)
    {
        Min = n3;
    }
    if (Min > n4)
    {
        Min = n4;
    }
    // print max and min
    cout << "Max=" << Max << endl;
    cout << "Min=" << Min << endl;
    // system("pause");
    return 0;
}