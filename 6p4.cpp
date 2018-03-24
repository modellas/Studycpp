//average and deviation
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

int main()
{
	double next,sum= 0.0, average, deviation = 0.0;
	int count = 0;
	ifstream inS;
	inS.open("6p4.dat");
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
	average = sum / count;
	inS.close();
	inS.open("6p4.dat");
	while (inS >> next)
	{
		count++;
		deviation = deviation + ((next - average) * (next - average));
	}
	inS.close();
	deviation = deviation / count;
	deviation = sqrt(deviation);
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Average is \t" << average << "\n";
	cout << "Deviation is \t" << deviation << endl;
	return 0;
}

