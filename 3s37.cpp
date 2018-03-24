// 10 Hellos
#include<iostream>
using namespace std;

int main()
{
	int ans = 2;
	int total = 0;
	cout << "Plaese input integer numbers , input 0 to end :\n";
	cin >> ans;
	while (ans != 0)
	{
		if ((ans % 2) == 0)
		{
			total = total + ans;
		}
		cin >> ans;
	}
	cout << "Total is "
		<< total << endl;
	return 0;
}
