#include<iostream>
#include<string>
using namespace std;
int main()
{
	int x;
	string y;
	cout << "Enter a number." << endl;
	cin >> x;
	y = " ";
	while (x > 0)
	{
		if (x % 2 != 0)
		{
			y = y + "x";
			cout << y << endl;
			x--;
		}
		else if (x % 2 == 0)
		{
			y = y + "+";
			cout << y << endl;
			x--;
		}
	}
	return 0;
}
