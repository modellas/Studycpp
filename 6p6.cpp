//tips stored and refreshed in another file with func
#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int neatSpace(ifstream& inS, ofstream& ouS);
//PRE:File opened 
//DO :Write inFile to ouFile with neat space;and do not close file
int main()
{
	ifstream inS;
	ofstream ouS;
	inS.open("6p6.dat");
	if (inS.fail())
	{
		cout << "Open File Failed!\n";
		return 1;
	}
	ouS.open("6p6neat.dat");
	if (ouS.fail())
	{
		cout << "Neat File Created Failed!\n";
		return 2;
	}
	neatSpace(inS, ouS);
	inS.close();
	ouS.close();
	cout << "The End of Program.\n";
	return 0;
}

int neatSpace(ifstream& inS, ofstream& ouS)
{
	char symbol, flag;
	int mark;
	inS.get(symbol);
	while (!inS.eof())
	{
		mark = 0;
		flag = ' ';
		ouS.put(symbol);
		while (symbol == ' ' && flag == ' ')
		{
			inS.get(flag);
			mark = 1;
		}
		if (mark == 1)
		{
			ouS.put(flag);
		}
		inS.get(symbol);
	} 
	cout << "The End of neatSapce.\n";
	return 0;
}
