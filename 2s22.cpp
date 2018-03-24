#include<iostream>
using namespace std;

int main()
{
	double savings(0.0),expenses(0.0);
	cout << "Input Savings $";
	cin >> savings;
	cout << "Input Expenses $";
	cin >> expenses;
	if (savings > expenses)
	{
		savings = savings - expenses ;
		expenses = 0.0 ;
		cout << "Solvent\n";
	}
	else
		cout << "Bankrupt.\n";
	return 0;
}
