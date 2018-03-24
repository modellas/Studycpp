// chapter 2 code project 2#
// fee up 7.6% , repay half year
#include<iostream>
using namespace std;

int main()
{
	const double RATE = 0.076;
	double annualSalary = 0.0, repaySalary = 0.0, salary = 0.0;
	char Conte = ' ';
	do
	{
		cout << "Please Input annualSalary last year: $";
		cin >> annualSalary ;
		repaySalary = annualSalary * 0.50 * RATE;
		annualSalary *= 1.000 + RATE;
		salary = annualSalary / 12.00;
		cout << "repay should be $"
			<< repaySalary << " and new annual salary should be $"
			<< annualSalary << "\nSalary should be $"
			<< salary << endl;
		cout << "press y to update your salary of last year and see what happens.\n"
			<< "Yes or No? " << endl;
		cin >> Conte;
	}while( Conte == 'y' || Conte == 'Y' );
	return 0;
}
