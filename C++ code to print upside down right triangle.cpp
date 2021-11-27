#include <iostream>
using namespace std;
int main()
{
	int Y;
	cout << "Enter Number" << endl;
	cin >> Y;
	int x = Y;
	for (int y = 0; y < Y;)
	{
		if (x > y)
		{
			cout << "*";
			x--;
		}
		else
		{
			cout << endl;
			x = Y;
			y++;
		}
	}
	return 0;
}
