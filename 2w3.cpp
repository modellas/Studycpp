// chapter 2 code project 3#
// fee up 7.6% , repay half year
#include<iostream>
using namespace std;

int main()
{
	const double RATE = 0.076;
	double annualSalary = 0.0, repaySalary = 0.0, salary = 0.0,month = 6.0;
	char Conte = ' ';
	do
	{
		cout << "Please Input annualSalary last year: $";
		cin >> annualSalary ;
		cout << "How many months should be repayed ?:";
		cin >> month;
		repaySalary = annualSalary * month / 12.00 * RATE;
		annualSalary *= 1.000 + RATE;
		salary = annualSalary / 12.00;
		cout << "repay should be $"
			<< repaySalary << "\n and new annual salary should be $"
			<< annualSalary << "\nSalary should be $"
			<< salary << endl;
		cout << "press y to update your salary of last year and see what happens."
			<< "Yes or No? ";
		cin >> Conte;
	}while( Conte == 'y' || Conte == 'Y' );
	return 0;
}
