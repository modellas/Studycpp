#include<iostream>
using namespace std;

int main()
{
	int temperature(0), pressure(0);
	cout << "Get Temperature and Pressure:\n";
	cin  >> temperature >> pressure ;
	if ( ( temperature >= 100 || pressure >= 200 ) )
		cout << "Warning!\n";
	else
		cout << "OK!\n";
	return 0;
}
