#include<iostream>
using namespace std;

int main()
{
	float x(0.0);
	cout << "input x variable = ";
	cin >> x;
	if ( ( x < -1 ) || ( x > 2 ) )
		cout << ( x * x - x - 2 ) 
			<< "\nPositive\n";
	else 
		cout << ( x * x - x - 2 )
			<< "\nNegative\n";
	return 0;
}
