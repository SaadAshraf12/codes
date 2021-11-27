#include<iostream>
using namespace std;
int main() {
	int number;
	cout << "Enter a number";
	cin >> number;
	if (number > 0) {
		cout << number << " is positive"<<endl;
	}
	if (number < 0) {
		cout << number << " is negative"<<endl;
	}
	if (number == 0) {
		cout << number << " is equal to zero"<<endl;
	}
	system("pause");
	return 0;

}