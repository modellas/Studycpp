//search int number , output max and min to Screen
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream inS;
	inS.open("intNum.dat");
	int max, min, next;
	inS >> next;
	max = next;
	min = next;
	do 
	{
		if ( next > max )
			max = next;
		if ( next < min )
			min = next;
		inS >> next;
	}while ( !inS.eof() );
	cout << "Max is : " << max << endl;
	cout << "Min is : " << min << endl;
	return 0;
}
