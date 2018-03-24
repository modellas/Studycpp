// chapter 2 13# Harris-Benedict BMR
#include<iostream>
using namespace std;

int main()
{
	float bmr = 0.0,
		weight = 0.0,
		height = 0.0,
		age = 0.0,
		oneBar = 230.0;
	int	bars = 0.0;
	char gender = ' ';
	cout << "Weight: ";
	cin >> weight;
	cout << "height: ";
	cin >> height;
	cout << "age: ";
	cin >> age;
	cout << "Gender,M for Male, F for Female: ";
	cin >> gender;
	//weight = weight / 100.00 * 45.40;
	//height = height * 2.54;
	if (gender == 'M' || gender == 'm')
		bmr = 66.00 + (6.30 * weight) + (12.90 * height) - (6.8 * age);
	else
		if (gender == 'F' || gender == 'f')
			bmr = 655.00 + (4.30 * weight) + (4.70 * height) - (4.7 * age);
	bars = bmr / oneBar + 1;
	cout << " Needs "
		<< bars << " Bars.\n Total bmr: "
		<< bmr << endl;
	return 0;
}