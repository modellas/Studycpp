#include<iostream>
using namespace std;

int main()
{
	int exam(0),programsDone(0);
	cout << "Input exam score and programsDone\n";
	cin >> exam >> programsDone;
	if ( (exam >= 60 ) && ( programsDone >= 10 ) )
		cout << "Passed\n";
	else
		cout << "Failes\n";
	return 0;
}
