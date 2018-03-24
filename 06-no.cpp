//cin and cout
#include<iostream>
using namespace std;
 int main()
{
	cout << "Enter a line of input and I will echo it:\n";
	char symbol;
	do
	{
		cin.get(symbol);
		cout << symbol;
	}while(symbol != '\n');
	cout << "That's all for this demonstration.";
	return 0;
}
