#include<iostream>
using namespace std;
int main() {
	int  units;
	float amount, totalbill, surcharge = 0;
	cout << "Enter units :";
	cin >> units;
	if (units <= 50)
	{
		amount = units * 0.5;
	}
	else if (units > 50 && units <= 150) {
		units = units - 50;
		amount = (50 * 0.50) + (units * 0.75);
	}
	else if (units > 150 && units <= 250) {
		units = units - 150;
		amount = (50 * 0.50) + (100 * 0.75) + (units * 1.20);
	}
	else if (units > 250) {
		units = units - 250;
		amount = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units * 1.50);
	}
	surcharge = (0.20) * amount;
	totalbill = amount + surcharge;
	cout << "Total bill is :" << totalbill;
	system("pause");
	return 0;
}
