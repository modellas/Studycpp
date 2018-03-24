
void copyChar(istream& inS)
{
	char symbol;
	inS.get(symbol);
	cout << symbol;
}
void copyLine(istream& inS)
{
	char symbol;
	inS.get(symbol);
	while (symbol != '\n')
	{
		cout << symbol;
		inS.get(symbol);
	}
}
void sendLine(ostream& ouS)
{
	char symbol;
	cin.get(symbol);
	while (symbol != '\n')
	{
		ouS.push(symbol);
		cin.get(symbol);
	}
}
void func(double x)
{
	cout << x << 1.1 << 2.3 << endl;
}
void func(double x, double y)
{
	cout << x << y << 2.3 << endl;
}
void func(double x, double y, double z)
{
	cout << x << y << z << endl;
}
