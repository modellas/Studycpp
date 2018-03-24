// discount instalment loan
#include<iostream>
using namespace std;

int main()
{
	int month = 0;
	float rate = 0.0, get = 0.0, own = 0.0, everyMonthPay = 0.0;
	char Conte = ' ';
	do
	{
		cout << "How many money you want to get at first: $";
		cin >> get ;
		cout << "How high is the rate per year in percentage: ";
		cin >> rate ;
		cout << "How many months you want to use the money: ";
		cin >> month ;
		rate = rate / 12.000 / 100.00;
		own = get / ( 1.000 - rate * month );
		everyMonthPay = own / month;
		cout << "You should get an amount of $"
			<< own << " loan with the intrests of "
			<< ( rate * 12.000 * 100.000 ) << "\% for "
			<< month << " months time to get $"
			<< get << " money at first ,and pay $"
			<< everyMonthPay << "in the following "
			<< month << " months every month.\n";
		cout << "press y & ENTER to calculate the next loan:\n\t\t";
		cin >> Conte;
	}while( Conte == 'y' || Conte =='Y' );
	return 0;
}
