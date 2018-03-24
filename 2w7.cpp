// chapter 2  7# salary & fee
#include<iostream>
using namespace std;

int main()
{
	float price = 0.0, rate = 0.0;
	int year = 0;
	cout << "Please input the price of a pencil: $";
	cin >> price;
	cout << "Please input the rate in percentage: ";
	cin >> rate;
	cout << "How many year later: ";
	cin >> year;
	rate /= 100.00;
	while ( year > 0 )
	{
		price *= (1.00 + rate);
		year--;
	}
	cout << "Total output is : $"
		<< price << endl;
	return 0;
}
