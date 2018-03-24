// chapter 2  10# Positive or Negative advanced
#include<iostream>
using namespace std;

int main()
{
	int n = 0,
		ans = 0,
		totalPos = 0,
		totalN = 0,
		totalALL = 0;
		float n1 = 0.0,
					n2 = 0.0;
	while (n <= 9)
	{
		n++;
		cout << "No. " << n << " = ";
		cin >> ans;
		if (ans > 0)
			{
				totalPos += ans;
				n1++;
			}
		else
			{
				totalN += ans;
				if ( ans != 0 )
					n2++;
			}
		totalALL += ans;
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Total Positive \t= " << totalPos << "\tPositive Average \t= " << ( totalPos / n1 ) << endl;
	cout << "Total N \t= " << totalN << "\tNegative Average \t= " << ( totalN / n2 ) << endl;
	cout << "Total ALL \t= " << totalALL << "\tAll Average \t\t= " << ( totalALL / 10.0 ) << endl;
	return 0;
}
