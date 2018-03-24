#include<iostream>
using namespace std;

int main()
{
	float t;
	cout << "Number of time in seconds : ";
	cin >> t ;
	t *= t;
	t *= 9.8;
	t /= 2.0;
	cout << "Total Distance is "
		<< t 
		<< " meters\n";
	return 0;
}
