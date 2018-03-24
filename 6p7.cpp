//int number files merged into one file with order
#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

void mergeIntStreams(ifstream& inOne, ifstream& inTwo, ofstream& ouT);
//PRE:File opend, File contains ordered int number 
// DO:Merge two file into one ordered file;

int main()
{
	ifstream inOne, inTwo;
	ofstream ouT;
	inOne.open("6p7a.dat");
	if (inOne.fail())
	{
		cout << "Fail\n";
		return 1;
	}
	inTwo.open("6p7b.dat");
	if (inTwo.fail())
	{
		cout << "Fail\n";
		return 1;
	}
	ouT.open("6p7c.dat");
	if (ouT.fail())
	{
		cout << "Fail\n";
		return 1;
	}
	mergeIntStreams(inOne, inTwo, ouT);
	inOne.close();
	inTwo.close();
	ouT.close();
	return 0;
}

void mergeIntStreams(ifstream& inOne, ifstream& inTwo, ofstream& ouT)
{
	int oneNext, twoNext, flag;
	inOne >> oneNext;
	inTwo >> twoNext;
	while (!(inOne.eof()) || !(inTwo.eof()))
	{
		if (oneNext > twoNext)
		{
			flag = oneNext;
			while ((twoNext <= flag) && !(inTwo.eof()))
			{
				ouT << twoNext << " ";
				inTwo >> twoNext;
			}
			ouT << flag << " ";
			inOne >> oneNext;
			if (inTwo.eof() && inOne.eof())
			{
				ouT << oneNext << " ";
			}
		}
		if (twoNext > oneNext)
		{
			flag = twoNext;
			while ((oneNext <= flag) && !(inOne.eof()))
			{
				ouT << oneNext << " ";
				inOne >> oneNext;
			}
			ouT << flag << " ";
			inTwo >> twoNext;
			if (inTwo.eof() && inOne.eof())
			{
				ouT << twoNext << " ";
			}
		}
		if (twoNext == oneNext)
		{
			flag = twoNext;
			while ((oneNext == flag) && !(inOne.eof()))
			{
				ouT << oneNext << " ";
				inOne >> oneNext;
			}
			while ((twoNext == flag) && !(inTwo.eof()))
			{
				ouT << twoNext << " ";
				inTwo >> twoNext;
			}
		}
	}
}

