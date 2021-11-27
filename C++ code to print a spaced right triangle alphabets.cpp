#include<iostream>
using namespace std;
int main()
{
	int a = 97, b = 1, row;
	cout << "Enter Rows:" << endl;
	cin >> row;

	for (int i = 0; i <= row; i++)
	{
		for (int y = row - i; y > 0; y--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << static_cast<char>(a);
			a++;
		}
		cout << endl;
		a = 97;
	}
}