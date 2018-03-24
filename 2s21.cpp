#include<iostream>
using namespace std;

int main()
{
	int score(0);
	cout << "Input Score: " ;
	cin >> score;
	if (score > 100)
		cout << "High\n";
	else 
		cout <<  "Low\n";
	return 0;
}
