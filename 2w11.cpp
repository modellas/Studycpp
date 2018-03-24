//Sound Speed info
#include<iostream>
using namespace std;

int main()
{
	int Tc1 = 0,tmp = 0,Tc2 = 0;
	const double A = 331.3,B = 0.61;
	double speed = 0.0;
	cout << "input start temperature: ";
	cin >> Tc1;
	cout << "input stop Temperature: ";
	cin >> Tc2;
	if (Tc2 < Tc1 )
	{
		tmp = Tc1;
		Tc1 = Tc2;
		Tc2 = tmp;
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	while (Tc1 <= Tc2 )
	{
		speed = A + B * Tc1;
		cout << "At " << Tc1 << " degrees Celsius the velocity of sound is "
			<< speed << " m/s \n";
		Tc1++;
	}
	return 0;
}
