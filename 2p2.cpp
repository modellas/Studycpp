// 巴比伦算法计算平方根
#include<iostream>
using namespace std;

int main()
{
	double n = 0.0, guess = 0.0, delta = 0.0, accuRate = 0.0,r = 0.0 ;
	const double RATE = 0.01;
	int count = 0;
	cout << "Input the number to be sqrted : \nn = ";
	cin >> n;
	guess = n / 2 ;// Init
	do 
	{
		r = n / guess ;
		delta = guess ;
		guess = ( guess + r ) / 2 ;
		delta -= guess ;
		if ( delta < 0 )
			delta *= -1.0 ;
		accuRate = delta / guess ;
		count++;
	}while ( accuRate >= RATE );
	cout << "number " << n << " :after "
		<< count << " steps of calculating , got an answer of "
		<< guess << " with accurateRate of " << accuRate
		<< endl;
	return 0;
}
