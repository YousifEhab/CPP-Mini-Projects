#include <iostream>
using namespace std;
int main()
{
    float s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1 != s2 && s1 != s3 && s2 != s3)
    {
        cout << "scalene triangle";
    }
    else if (s1 == s2 && s1 == s3)
    {
        cout << "Equilateral triangle";
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        cout << "isosceles triangle";
    }
    // system("pause");
    return 0;
}
