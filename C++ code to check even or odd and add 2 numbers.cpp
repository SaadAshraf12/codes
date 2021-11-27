#include<iostream>
using namespace std;
int main() {
	int number1, number2, num;
	cout << "Enter 1st number :";
	cin >> number1;
	cout << "Enter 2nd number :";
	cin >> number2;
	cout << "Press 1 to add two numbers." << endl;
	cout << "Press 2 to tell whether the number is even or odd." << endl;
	cin >> num;
	if (num == 1)
		cout << "sum is " << number1 + number2 << endl;
	if (num == 2)
	{
		if (number1 % 2 == 0)
			cout << number1 << " is even." << endl;
		else
			cout << number1 << " is odd." << endl;
		if (number2 % 2 == 0)
			cout << number2 << " is even." << endl;
		else
			cout << number2 << " is odd." << endl;


	}
	system("pause");
	return 0;
}
