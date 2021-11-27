#include<iostream>

using namespace std;

int main()
{
	char ch;
	cout << "Input any character: ";
	cin >> ch;

	if (ch <= 90 && ch >= 65)
		cout << endl << "It Is An Uppercase Character"<<endl;
	else if (ch <= 122 && ch >= 97)
		cout << endl << "You entered a lowercase character"<<endl;
	system("pause");
	return 0;
}
