//Rock-Scissor-Paper
#include<iostream>
using namespace std;

int main()
{
	char one = ' ',
		 two = ' ';
	int playerOne = 0,
		playerTwo = 0,
		sign =0;
	char next = ' ';
	do 
	{
		cout << "Player One Choice ,R for Rock. S for Scissor. P for Paper: ";
		cin >> one;
		switch ( one )
		{
			case 'R':
			case 'r':
				playerOne = 2;
				break;
			case 'S':
			case 's':
				playerOne = 1;
				break;
			case 'P':
			case 'p':
				playerOne = 0;
				break;
			default:
				cout << "Invalid Input!\n";
				playerOne = 10;
		}
		cout << "Player Two Choice ,R for Rock. S for Scissor. P for Paper: ";
		cin >> two;
		switch ( two)
		{
			case 'R':
			case 'r':
				playerTwo = 2;
				break;
			case 'S':
			case 's':
				playerTwo = 1;
				break;
			case 'P':
			case 'p':
				playerTwo = 0;
				break;
			default:
				cout << "Invalid Input!\n";
				playerTwo = -10;
		}
		sign = playerOne - playerTwo;
		switch ( sign )
		{
			case 0:
				cout << "Equal ! \n";
				break;
			case 1:
			case -2:
				cout << "Player One Wins!\n";
				break;
			case -1:
			case 2:
				cout << "Player Two Wins!\n";
				break;
			default:
				cout << "Invalid Inputs!\n";
		}
		cout << "Press Y to continue, N to stop : ";
		cin >> next;
	}while(next == 'y' || next == 'Y' );
	return 0;
}
