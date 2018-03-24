//mile per gallon      
#include<iostream>
const double RATE = 0.264179;

double milePerGallon(double litre, double mile);
//mile per gallon

int main()
{
	using namespace std;
	double mile, litre,milePer;
	char next = ' ';
	do 
	{
		cout << "Input the patrol used in litre: ";
		cin >> litre;
		cout << "Input the distance in mile: ";
		cin >> mile;
		milePer = milePerGallon (litre, mile);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << "The Index is "
			<< milePer << " miles per gallon \n"
			<< " Press y and Enter to continue ,n to quit: ";
		cin >> next;
	}while ( next == 'y' || next == 'Y' );
	return 0;
}

double milePerGallon(double litre, double mile)
{
	double gallon = 0.0 ;
	gallon = litre * RATE;
	return ( mile / gallon );
}
