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

    switch (int(percentage) / 10)
    {
    case 10:
    case 9:
        cout << "A+" << endl;
        break;
    case 8:
        switch (percentage >= 85)
        {
        case 1:
            cout << "A" << endl;
            break;
        case 0:
            cout << "B+" << endl;
            break;
        }
        break;
    case 7:
        switch (percentage >= 75)
        {
        case 1:
            cout << "B" << endl;
            break;
        case 0:
            cout << "C+" << endl;
            break;
        }
        break;
    case 6:
        switch (percentage >= 65)
        {
        case 1:
            cout << "C" << endl;
            break;
        case 0:
            cout << "D" << endl;
            break;
        }
        break;
    default:
        cout << "F" << endl;
        break;
    }
    // system("pause");
    return 0;
}