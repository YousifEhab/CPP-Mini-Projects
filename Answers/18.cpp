#include <iostream>
using namespace std;
int main()
{
    float const totaldegree = 5 * 100;
    float degree1, degree2, degree3, degree4, degree5;

    cout << "Enter The 5 degrees (from 100)" << endl;
    cin >> degree1 >> degree2 >> degree3 >> degree4 >> degree5;

    float sumdegree = degree1 + degree2 + degree3 + degree4 + degree5;
    float percentage = (sumdegree / totaldegree) * 100;

    switch (percentage > 90)
    {
    case 1:
        cout << "A+" << endl;
        break;
    }
    switch (percentage >= 85 && percentage < 90)
    {
    case 1:
        cout << "A" << endl;
        break;
    }
    switch (percentage >= 80 && percentage < 85)
    {
    case 1:
        cout << "B+" << endl;
        break;
    }
    switch (percentage >= 75 && percentage < 80)
    {
    case 1:
        cout << "B" << endl;
        break;
    }
    switch (percentage >= 70 && percentage < 75)
    {
    case 1:
        cout << "C+" << endl;
        break;
    }
    switch (percentage >= 65 && percentage < 70)
    {
    case 1:
        cout << "C" << endl;
        break;
    }
    switch (percentage >= 60 && percentage < 65)
    {
    case 1:
        cout << "D" << endl;
        break;
    }
    switch (percentage < 60)
    {
    case 1:
        cout << "F" << endl;
        break;
    }
    // system("pause");
    return 0;
}
