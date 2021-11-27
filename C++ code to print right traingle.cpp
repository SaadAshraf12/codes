#include <iostream>
using namespace std;
int main()
{
	int X;
	cout << "Enter number" << endl;
	cin >> X;
	int j = 0;
	for (int i = 0; i <= X;)
	{
		if (j < i)
		{
			cout << " * ";
			j++;
		}
		else {
			cout << endl;
			j = 0;
			i++;
		}
	}
}
