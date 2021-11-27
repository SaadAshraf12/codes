#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the length and it should be odd number : ";
	cin >> n;
	if (n % 2 != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j == i || j == (n - i + 1))

					cout << "*";

				else
					cout << " ";
			}
			{
				cout << endl;
			}
		}
	}
	else
		cout << "INVALID INPUT ONLY ENTER ODD NUMBER" << endl;
}