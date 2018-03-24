#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout << "Number of 25 cent: ";
	cin >> a ;
	cout << "Number of 10 cent: ";
	cin >> b ;
	cout << "Number of  5 cent: ";
	cin >> c ;
	a = 25 * a ;
	a = 10 * b + a ;
	a = 5 * c + a ;
	cout << "Total Money is "
		<< a 
		<< " cents\n";
	return 0;
}
