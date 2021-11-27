#include<iostream>
using namespace std;
int main()
{
	int i = 1, j = 0, x, y;
	cout << "Input height: ";
	cin >> x;
	cout << endl;
	cout << "Input width: ";
	cin >> y;
	while (i <= x)
	{
		if (i <= x)
			cout << 'a';
		j++;
		if (j == y)
		{
			cout << endl;
			j = 0;
			i++;
		}

		if (i <= x)
			cout << 'e';
		j++;
		if (j == y)
		{
			cout << endl;
			j = 0;
			i++;
		}
		if (i <= x)
			cout << 'i';
		j++;
		if (j == y)
		{
			cout << endl;
			j = 0;
			i++;
		}
		if (i <= x)
			cout << 'o';
		j++;
		if (j == y)
		{
			cout << endl;
			j = 0;
			i++;
		}
		if (i <= x)
			cout << 'u';
		j++;
		if (j == y)
		{
			cout << endl;
			j = 0;
			i++;
		}
	}
	return 0;
}