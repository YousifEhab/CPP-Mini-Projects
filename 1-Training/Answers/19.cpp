#include <iostream>
using namespace std;
int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout << "Enter the time in hours, minutes and seconds: ";
    cin >> h1 >> m1 >> s1;
    if (h1 >= 0 && h1 < 24 && m1 >= 0 && m1 < 60 && s1 >= 0 && s1 < 60)
    {
        cout << "Enter the alarm time in hours, minutes and seconds: ";
        cin >> h2 >> m2 >> s2;
        if (h2 >= 0 && h2 < 24 && m2 >= 0 && m2 < 60 && s2 >= 0 && s2 < 60)
        {
            int h3 = h1 + h2;
            int m3 = m1 + m2;
            int s3 = s1 + s2;
            if (s3 >= 60)
            {
                s3 -= 60;
                m3++;
            }
            if (m3 >= 60)
            {
                m3 -= 60;
                h3++;
            }
            if (h3 >= 24)
            {
                h3 -= 24;
            }
            cout << "The alarm will ring at " << h3 << ":" << m3 << ":" << s3 << endl;
        }
        else
        {
            cout << "Invalid time entered for alarm." << endl;
        }
    }
    else
    {
        cout << "Invalid time entered." << endl;
    }
    // system("pause");
    return 0;
}
