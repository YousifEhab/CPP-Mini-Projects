// Lab Exam - Group C
#include <iostream>
using namespace std;
int main()
{
    int size, adult = 0, kid = 0;
    int arr[10];
    cout << "Enter a series of 10 shoes sizes:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter shoe number " << i + 1 << " size --> ";
        cin >> size;
        arr[i]=size;
        if (size >= 13)
        {
            adult++;
        }
        else
        {
            kid++;
        }
    }
    if (adult > kid)
    {
        cout << "We need to order " << adult - kid << " kids shoes";
    }
    else
    {
        cout << "We are good to go";
    }
}
