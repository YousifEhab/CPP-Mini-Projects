// Lab Exam - Group F
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int genders[20], covid_status[20];
    for (int i = 0; i < 20; i++)
    {
        cout << "Patient No." << i + 1 << " Enter Your Gender (0 for male and 1 for female) --> ";
        cin >> genders[i];
        cout << "did you have covid 19 in the last three weeeks? (0 for no and 1 for yes) -->";
        cin >> covid_status[i];

        if (genders[i] == 1 && covid_status[i] == 1)
        {
            sum++;
        }
    }
    cout << "Count of Covid19 Female patients is " << sum;
}
