// Lab Exam - Group A
#include <iostream>
using namespace std;
int main()
{
    int score, counter = 0, sum = 0;
    int arr[20];
    while (counter < 20)
    {
        cout << "Enter score No. " << counter + 1 << " (between 0 and 100) ----> ";
        cin >> score;
        if (score >= 0 && score <= 100)
        {
            arr[counter] = score;
            counter++;
        }
        else
        {
            cout << "Invalid score \n";
        }
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (arr[i] * arr[i] % 5 == 0)
            {
                sum += arr[i] * arr[i];
            }
        }
    }
    cout << "Sum of squared odd elements that are divisible by 5 = " << sum;
}
