//median and quartile
#include<iostream>
#include<fstream>
using namespace std;

double medianCal(int i, int j);

int main()
{
	int next;
	int count = 0, i, j, k;
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
	i = count / 4;
	j = count / 2;
	k = i + j ;
	inS.close();
	inS.open("6p3a2.dat");
	double ci,cj,ck;
	int n = 1;
	while ((!inS.eof()) && n <= k)
	{
		inS >> next ;
		if ( n == i )
			ci = next;
		;
		if ( n == j )
			cj = next;
		n++;
	}
	ck = next;
	inS.close();
	cout.precision(0);
	cout << "Quartile is :\n1/4 : "
		<< ci << "\n1/2 : " << cj
		<< "\n3/4 : " << ck << endl;
	return 0;
}

