// Lab Exam - Group B
#include <iostream>
using namespace std;
int main()
{
    int age, counter = 0, arr[10], sum = 0;
    while (counter < 10)
    {
        cout << "Student No. " << counter + 1 << " Please enter your age --> ";
        cin >> age;
        if (age > 16 && age < 28)
        {
            arr[counter] = age;
            if (age > 20)
            {
                sum++;
            }
            counter++;
        }
        else
        {
            cout << "Invalid input \n";
        }
    }
    cout << "No. of students older than 20 is: " << sum;
}
