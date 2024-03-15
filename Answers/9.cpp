#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter X coordinate = ";
    cin >> x;
    cout << "Enter y coordinate = ";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "Point (" << x << "," << y << ")"<< " is at 1st Quadrant :)";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Point (" << x << "," << y << ")"<< " is at 2nd Quadrant :)";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Point (" << x << "," << y << ")"<< " is at 3rd Quadrant :)";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Point (" << x << "," << y << ")"<< " is at 4th Quadrant :)";
    }
    // system("pause");
    return 0;
}