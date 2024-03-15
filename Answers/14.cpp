#include <iostream>
using namespace std;
int main()
{
	int P1_choice, P2_choice;
	cout << "ROCK,PAPER,SCISSORS Game\n";
	cout << "Player 1 starts\n";
	cout << "choose one of the following:\n";
	cout << " 1 for rock \n";
	cout << " 2 for paper \n";
	cout << " 3 for scissors \n";
	cin >> P1_choice;
	cout << "Player 2 turn\n";
	cout << "choose one of the following:\n";
	cout << " 1 for rock \n";
	cout << " 2 for paper \n";
	cout << " 3 for scissors \n";
	cin >> P2_choice;
	if (P1_choice == 1 && P2_choice == 1)
	{
		cout << " DRAW ";
	}
	else if (P1_choice == 2 && P2_choice == 2)
	{
		cout << " DRAW ";
	}
	else if (P1_choice == 1 && P2_choice == 3)
	{
		cout << " Player 1 wins ";
	}
	else if (P1_choice == 2 && P2_choice == 1)
	{
		cout << " Player 1 wins ";
	}
	else if (P1_choice == 3 && P2_choice == 2)
	{
		cout << " Player 1 wins ";
	}
	else if (P1_choice == 2 && P2_choice == 3)
	{
		cout << " Player 2 wins ";
	}
	else if (P1_choice == 1 && P2_choice == 2)
	{
		cout << " Player 2 wins ";
	}
	else if (P1_choice == 3 && P2_choice == 1)
	{
		cout << " Player 2 wins ";
	}
	// system("pause");
	return 0;
}