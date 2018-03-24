#include<iostream>
using namespace std;

int main()
{
	const double TON2OUNCE = 35273.92;
	double weight(0.0);
	bool Continue = true;
	char ans = ' ';
	cout << "How many ounces does a package of cereal contains?\n";
	while ( Continue == true )
	{
		cout << "Weight in ounce : ";
		cin >> weight;
		cout << weight << " ounces of cereal equals to " 
			<< ( weight / TON2OUNCE ) << " Tons of cereal.\n"
			<< ( TON2OUNCE / weight ) << " packages of cereal have 1 ton. \n"
			<< "press y to continue,press return to confirm: ";
		cin >> ans;
		if ( ans == 'y' || ans == 'Y' )
			;
		else
			Continue = false ;
	}
	return 0;
}	
