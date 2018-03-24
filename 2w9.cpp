// chapter 2  9# Positive or Negative
#include<iostream>
using namespace std;

int main()
{
	int n = 0,
		ans = 0,
		totalPos = 0,
		totalN = 0,
		totalALL = 0;
	while (n <= 9)
	{
		n++;
		cout << "No. " << n << " = ";
		cin >> ans;
		if (ans > 0)
			totalPos += ans;
		else
			totalN += ans;
		totalALL += ans;
	}
	cout << "Total Positive \t= " << totalPos << endl;
	cout << "Total N \t= " << totalN << endl;
	cout << "Total ALL \t= " << totalALL << endl;
	return 0;
}
