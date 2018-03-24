#include<iostream>
using namespace std;

int main()
{
	double theNumber(0);
	cout << "Please input a double number" << endl;
	cin >> theNumber;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);
	cout << "the Number is : " << theNumber << endl;
	return 0;
}
