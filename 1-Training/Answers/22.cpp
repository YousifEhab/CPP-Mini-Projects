#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    char choice;
    do
    {
        cout << "Enter n" << endl;
        cin >> n;
        double pi = 0;
        for (int i = 0; i < n; i++)
        {
            pi += pow(-1, i) / (2 * i + 1);
        }
        pi *= 4;
        cout << "Approximate value of pi: " << pi << endl;
        cout << "Do you want to continue ?" << endl;
        cout << "Enter y for yes and n for no" << endl;
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    // system("pause");
    return 0;
}