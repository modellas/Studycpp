//tips stored and refreshed in file
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ifstream inS;
	ofstream ouS;
	char symbol,flag = ' ';
	inS.open("6p5.dat");
	if (inS.fail())
	{
		cout << "Open File Failed!\n";
		return 1;
	}
	do
	{
		flag = symbol;
		inS.get(symbol);
		cout.put(symbol);
	}while (flag != '\n' || symbol != '\n');
	inS.close();
	ouS.open("6p5.dat");
	if (ouS.fail())
	{
		cout << "Temperory File Created Failed!\n";
		return 2;
	}
	cout << "Please input your tips, end with 2 enters: \n";
	flag = ' ';
	do
	{
		flag = symbol;
		cin.get(symbol);
		ouS.put(symbol);
	}while (flag != '\n' || symbol != '\n');
	ouS.close();
	return 0;
}
