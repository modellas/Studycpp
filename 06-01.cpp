//file IO
#include<fstream>
int main()
{
	using namespace std;
	ifstream inS;
	ofstream ouS;
	inS.open("input.dat");
	ouS.open("output.dat", ios::app);
	int first, second, third;
	inS >> first >> second >> third;
	ouS << "The Sum is "
		<< (first + second + third )
		<< endl;
	inS.close();
	ouS.close();
	return 0;
}
