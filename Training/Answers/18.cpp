#include <iostream>
using namespace std;
int main()
{
    int h, m, s;
    cout << "Enter the time in hours, minutes and seconds: ";
    cin >> h >> m >> s;
    if (h >= 0 && h < 12 && m >= 0 && m < 60 && s >= 0 && s < 60)
    {
        cout << "the current time in 12-hour format is: " << h << ":" << m << ":" << s << " AM" << endl;
    }
    else if (h >= 12 && h < 24 && m >= 0 && m < 60 && s >= 0 && s < 60)
    {
        h = h - 12;
        cout << "the current time in 12-hour format is: " << h << ":" << m << ":" << s << " PM" << endl;
    }
    else
    {
        cout << "Invalid time" << endl;
    }
    // system("pause");
    return 0;
}
