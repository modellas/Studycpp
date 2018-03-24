#include<iostream>
using namespace std;

int main()
{
	int number1(0),number2(0);
	cout << "Please input two intger number ,\nNow Input the first Integer Number: ";
	cin >> number1;
	cout << "Good job! The first Integer Number is " << number1
		<< "\n Now Input the socond Integer Number: ";
	cin >> number2;
	cout << "Geart! The second Integer Number is " << number2 << endl;
	cout << "The product of these two number is " << (number1 * number2)
		<< endl;
	return 0;
}
