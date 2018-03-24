// chapter 2  8# audio loan
#include<iostream>
using namespace std;

int main()
{
	const float MONTH_PAY = 50.0;
	float rate = 0.0, own = 0.0, interest = 0.0, totalInt = 0.0;
	int n = 0;
	cout << "rate in \%";
	cin >> rate;
	rate /= 1200.0;
	cout << "How much money you want to loan: $";
	cin >> own;
	cout << "N" << "\tinterest \t Own\n";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	while (own >= (MONTH_PAY / (1.00 + rate)))
	{
		interest = own * rate;
		totalInt += interest;
		own -= MONTH_PAY - interest;
		n++;
		
		cout << n << ". \t" << interest << "\t \t" << own << endl;
	}
	if (own == (MONTH_PAY / (1.00 + rate)))
		;
	else
	{
		n++;
		interest = own * rate;
		totalInt += interest;
		own -= own;
		
		cout << n << ". \t" << interest << "\t \t" << own << endl;
	}
	
	cout << "Total" << "\t" << totalInt << "\t \t" << endl;
	return 0;
}
