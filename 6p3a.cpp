//median
#include<iostream>
#include<fstream>
using namespace std;

double medianCal(int i, int j);

int main()
{
	int next;
	int count = 0, i, j;
	double median;
	ifstream inS;
	inS.open("6p3a2.dat");
	if ( inS.fail())
	{
		cout << "Open File Failed! \n";
		return 1;
	}
	while (inS >> next)
		count++;
	if ((count %  2)==1)
	{
		i = ( count + 1 ) / 2;
		j = i;
	}
	else if ((count % 2)==0)
	{
		i = count / 2;
		j = i + 1;
	}
	inS.close();
	inS.open("6p3a2.dat");
	double ci,cj;
	int n = 1;
	while ((!inS.eof()) && n <= i)
	{
		inS >> next ;
		n++;
	}
	ci = next;
	if (i == j)
		median = ci;
	else 
	{
		inS >> next;
		cj = next;
		median = (ci + cj)/2.0;
	}
	inS.close();
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout << "Median is " << median << endl;
	return 0;
}

