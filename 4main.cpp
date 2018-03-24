//pitsa 
#include<iostream>
using namespace std;
const double PI = 3.1415926;

double unitPrice(int diameter, double price);
//diameter 以inch为单位
//price 为价格

int main()
{
	int diameterSmall = 0, diameterLarge = 0;
	double priceSmall = 0.0, priceLarge = 0.0;
	cout << "Input diameter and price of small pista,and then the large one : ";
	cin >> diameterSmall
		>> priceSmall
		>> diameterLarge
		>> priceLarge;
	double unitPriceSmall, unitPriceLarge;
	unitPriceSmall = unitPrice(diameterSmall, priceSmall);
	unitPriceLarge = unitPrice(diameterLarge, priceLarge);
	if ( unitPriceSmall <= unitPriceLarge )
	  cout << "Small is better ! \n";
	else 
	  cout << "Large is better ! \n";
	return 0;
}

double unitPrice(int diameter, double price)
{
	double area = 0.0,radius = 0.0;
	radius = 0.50 * diameter;
	area = PI * radius * radius;
	return (price/area);
}
