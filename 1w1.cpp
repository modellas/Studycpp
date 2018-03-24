#include <iostream>
using namespace std;

int main()
{
	float a = 1.2, b = 2.3, c = 3.4;
	cout << "Please input a \n";
	cin >> a;
	cout << "Please input b \n";
	cin >> b;
	c = a+b;
	cout << "a+b=" 
		<< c 
		<< "\n";
	c = a*b;
	cout << "a*b="
	   <<	c
	  << "\n";
	return 0;
}
