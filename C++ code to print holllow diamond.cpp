#include<iostream>
using namespace std;
int main()
{
	int n1, n, n2, c, d;
	cout << "Enter an odd number" << endl;
	cin >> n1;
	n = n1 / 2 + 1;
	for (n2 = 1; n2 <= n1; n2++)
	{
		for (c = 1; c <= n1; c++)
		{
			if (c == n || c == n1 - n + 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		if (n2 <= n1 / 2)
			n--;
		else
			n++;

		cout << endl;
	}
}