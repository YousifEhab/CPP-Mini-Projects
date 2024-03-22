#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter x" << endl;
	cin >> x;
	
	if (x < 1)
	{
		cout << "Invalid Input\n";
	}
	else
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	// system("pause");
	return 0;
}