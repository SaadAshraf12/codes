#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cout << "Enter height: " << endl;
	cin >> a;
	d = (a / 2) + 1;
	for (b = 1; b <= a; b++)
	{
		for (c = 1; c <= a; c++)
		{
			if (c != d && b != d)
				cout << "  ";
			else
				cout << "* ";
		}
		cout << endl;
	}
}