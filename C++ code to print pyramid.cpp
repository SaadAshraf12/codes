#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int height, b, c, d;
	cout << "Enter height: " << endl;
	cin >> height;
	cout << "Your Pyramid is: " << endl;
	cout << "_____________________________________" << endl;
	for (b = 0; b < height; b++)
	{
		for (c = height - 1; c >= b; c--)
		{
			cout << " ";
		}
		for (d = b; d >= -b; d--)
		{
			cout << char(b - abs(d) + 97);
		}
		cout << endl;
	}
	return 0;
}