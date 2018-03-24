//abas flavour control
#include<iostream>
using namespace std;

int main()
{
	const double CONTAIN_RATE = 0.001, P2G = 454.0 ;
	double miceIntake = 0.0, miceWeight = 0.0, targetWeightPounds = 0.0,
		   targetWeightGram = 0.0, oneBottleWeight = 350.0, safeNumber = 0.0;
	char ContiCheck = ' ';
	cout << "Please input how many grams of abas flavour get a mice dead and how many gram"
		<< " is the mice : ";
	cin >> miceIntake >> miceWeight;
	do 
	{
		cout << "Please input your TARGET WEIGHT , WARNING !!! INPUT YOUR TARGET WEIGHT !!!"
			<< "Instead of your CURRENT WEIGHT. \nMy TARGET WEIGHT in pounds is : ";
		cin >> targetWeightPounds ;
		targetWeightGram = targetWeightPounds * P2G ;
		safeNumber = targetWeightGram / miceWeight * miceIntake / CONTAIN_RATE / oneBottleWeight ;
		cout << "Based on your Target Weight , you can drink "
			<< safeNumber << " Bottles per day , for each bottle weighs "
			<< oneBottleWeight << " grams \n press y & ENTER to update your target weight and see what happens : ";
		cin >>  ContiCheck;
	}while ( ContiCheck == 'y' || ContiCheck == 'Y' ) ;
	return 0;
}
