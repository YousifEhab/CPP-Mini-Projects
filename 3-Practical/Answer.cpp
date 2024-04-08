#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "Enter x = " << endl;
	cin >> x;
	switch (x < 1000)
	{
	case 0:
		cout << x << " contains more than 3 digits";
		break;
	case 1:
		switch (x % 10 == 0 && x != 0)
		{
		case 0:
			cout << x << " is not divisible by 10";
			break;
		case 1:
			if (x >= 100)
			{
				if (x / 100 % 3 == 0)
				{
					cout << (x / 100) << " is divisible by 3";
				}
				else
				{
					cout << (x / 100) << " is not divisible by 3";
				}
			}
			else if (x > 10)
			{
				if (x / 10 % 3 == 0)
				{
					cout << (x / 10) << " is divisible by 3";
				}
				else
				{
					cout << (x / 10) << " is not divisible by 3";
				}
			}
		}
	}
	// system("pause");
	return 0;
}
