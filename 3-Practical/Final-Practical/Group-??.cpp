// Lab Exam - Group ??
#include <iostream>
using namespace std;
int main()
{
    double value;
    int counter = 0 , near = 0 , far = 0;
    double arr[8];
    while(counter < 8)
    {
        cout << "User No. " << counter+1 <<", please enter your eyeglasses prescription ---> ";
        cin >> value;
        if(value >= -4.0 && value <= -0.25)
        {
            arr[counter] = value;
            counter++;
            near++;
        }
        else if (value <= 4.0 && value >= 0.25)
        {
            arr[counter] = value;
            counter++;
            far++;
        }
        else
        {
            cout << "Invalid input \n";
        }
    }
    if(near > far)
    {
        int d = near - far;
        cout << "there are " << d << " nearsighted users that far sighted users";
    }
    else{
        cout << "We are good to go";
    }
}
