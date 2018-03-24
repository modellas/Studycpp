// chapter 2 12# drill 
#include<iostream>
using namespace std;

int main()
{
	float radius = 0.0, depth = 0.0, gallhenwater = 0.0;
	const float CONV = 12.0, TRANS = 7.48, PIE = 3.14159265359;
	cout << "Input the radius : ";
	cin >> radius;
	cout << "Input the depth : ";
	cin >> depth;
	radius /= CONV;
	gallhenwater = PIE * radius * radius * depth * TRANS;
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << "You can Store : "
		<< gallhenwater << " gallen of water . \n";
	return 0;
}
