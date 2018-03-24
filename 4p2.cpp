//mile per gallon  of 2 cars    
#include<iostream>
const double RATE = 0.264179;

double milePerGallon(double litre, double mile);
//mile per gallon

int main()
{
	using namespace std;
	double mileOne, litreOne,milePerOne;
	double mileTwo, litreTwo,milePerTwo;
	char next = ' ';
	do 
	{
		cout << "Input the 1st patrol used in litre: ";
		cin >> litreOne;
		while (cout << "input the 1st patrol used in litre : ",cin >> litreOne,litreOne <=0.0 || cin.fail() )
		{
			cout << " try again! \n";
			cin.clear();
			cin.sync();
		}
		cout << "Input the 1st distance in mile: ";
		cin >> mileOne;
		while (mileOne <=0.0 || cin.fail() )
		{
			cout << " try again! \n";
			cin.clear();
			cin.sync();
		}
		milePerOne = milePerGallon (litreOne, mileOne);
		cout << "Input the 2nd patrol used in litre: ";
		cin >> litreTwo;
		while (litreTwo <=0.0 || cin.fail() )
		{
			cout << " try again! \n";
			cin.clear();
			cin.sync();
		}
		cout << "Input the 2nd distance in mile: ";
		cin >> mileTwo;
		while (mileTwo <=0.0 || cin.fail() )
		{
			cout << " try again! \n";
			cin.clear();
			cin.sync();
		}
		milePerTwo = milePerGallon (litreTwo, mileTwo);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);
		cout << "The Index of 1st car is "
			<< milePerOne << " miles per gallon \n"
			<< "The Index of 2nd car is "
			<< milePerTwo << " mils per gallon \n";
		if (milePerOne > milePerTwo)
			cout << "The 1st is Better! \n";
		else if (milePerOne == milePerTwo)
			cout << "They are equal! \n";
		else 
			cout << "The 2nd is better! \n";

		cout << " Press y and Enter to continue ,n to quit: ";
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
