//average
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	double next,sum= 0.0;
	int count = 0;
	ifstream inS;
	inS.open("6p2.dat");
	if ( inS.fail())
	{
		cout << "Open File Failed! \n";
		return 1;
	}
	while (inS >> next)
	{
		count++;
		sum = sum + next;
	}
	sum = sum / count;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Average is " << sum << endl;
	return 0;
}

