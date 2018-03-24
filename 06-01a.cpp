//file IO
#include<fstream>
#include<iostream>
#include<cstdlib>
int main()
{
	using namespace std;
	ifstream inS;
	ofstream ouS;
	inS.open("iiinput.dat");
	if (inS.fail())
	{
		using namespace std;
		cout << "File open failed\n";
		exit(1);
	}
	ouS.open("output.dat", ios::app);
	if (ouS.fail())
	{
		using namespace std;
		cout << "File save failed\n";
		exit(1);
	}
	int first, second, third;
	inS >> first >> second >> third;
	ouS << "The Sum is "
		<< (first + second + third )
		<< endl;
	inS.close();
	ouS.close();
	return 0;
}
