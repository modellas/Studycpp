// salary & fee
#include<iostream>
using namespace std;

int main()
{
	const float salPerHour = 16.78, TimeLimit = 40.0, ExceedRate = 1.50,
				insureRate = 0.06, federalRate = 0.14, stateRate = 0.05,
				consti = 10.00, familyInsure = 35.0;
	float insure = 0.0, federal = 0.0, state = 0.0;
	const int FAMILY_MEMBER = 3;
	float workTime = 0.00, salary = 0.0, salaryGot = 0.0;
	int familyMember = 0;
	char Conte = ' ';
	do
	{
		cout << "How many hours you worked this week: ";
		cin >> workTime;
		cout << "How many family member does your family have: ";
		cin >> familyMember;
		if (workTime <= TimeLimit)
			salary = workTime * salPerHour;
		else
			salary = TimeLimit * salPerHour + (workTime - TimeLimit) * ExceedRate * salPerHour;
		insure = salary * insureRate;
		federal = salary * federalRate;
		state = salary * stateRate;
		salaryGot = salary - insure - federal - state - consti;
		if (familyMember >= FAMILY_MEMBER)
			salaryGot -= familyInsure;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Your salary of this week is :\t\t $"
			<< salary << "\nYour SocialInsurence is:\t\t $"
			<< insure << "\nYour Federal Tax is :\t\t\t $"
			<< federal << "\nYour State Tax is :\t\t\t $"
			<< state << "\nYour Consititution Fee is:\t\t $"
			<< consti << "\n";
		if (familyMember >= FAMILY_MEMBER)
			cout << "Your family insurence is :\t\t $"
			<< familyInsure << "\n";
		else
			cout << "Your family insurence is :\t\t\t $0.00\n";
		cout << "Your salary you finally get is :\t $"
			<< salaryGot << endl;
		cout << "press y & ENTER to continue:";
		cin >> Conte;
	} while (Conte == 'y' || Conte == 'Y');
	return 0;
}