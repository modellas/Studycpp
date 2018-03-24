#include<iostream>
using namespace std;

int main()
{
	int numOne(0),numTwo(0);
	cout << "Please input two integer number: " << "\nNow input the 1st number: ";
	cin >> numOne;
	cout << "The 1st number is " << numOne << endl << "Now the 2nd number: ";
	cin >> numTwo;
	cout << "The 2nd number is " << numTwo << endl;
	cout << "number " << numOne << "Divided by number " << numTwo << " is " 
		<< (numOne/numTwo) << ".\t" << "remained number is " << (numOne%numTwo)
		<< endl;
	return 0;
}
