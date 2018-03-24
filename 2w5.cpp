#include<iostream>
using namespace std;

int main()
{
		int room = 0, people = 0;
		char Conte = ' ';
		do
		{
			cout << "How many people are able to attend: ";
			cin >> room ;
			cout << "How many people is going to attend: ";
			cin >> people;
		if (room > people)
		cout << "Checked, and another "
		<< (room - people) << " people availible\n";
		else
		cout << "Failed, need to reduce "
		<< (people - room) << " people to continue\n";
		cout << "press y & ENTER to continue:";
		cin >> Conte;
		} while (Conte == 'y' || Conte == 'Y');
		return 0;
}
