// mph 2 pace gen
#include<iostream>
using namespace std;

int main()
{
	double mphSpeed = 0.0, paceRate = 0.0 ;
	int minites = 0 , seconds = 0 ;
	const double RATE = 60.0 ;
	cout << "Input mphSpeed : mph = ";
	cin >> mphSpeed ;
	paceRate = RATE / mphSpeed ;
	minites = static_cast<int>(paceRate);
	seconds = ( paceRate - minites ) * RATE ;
	cout << mphSpeed << " mph equals to "
		<< minites << " minites, "
		<< seconds << " seconds in pace\n";
	return 0;
}
