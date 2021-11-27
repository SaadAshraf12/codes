#include<iostream>
using namespace std;
int main() {
	int quantity, price1 = 0, price2 = 0, price3 = 0, price, total, number, change;
	//Menu
	cout << "Press \'1\' for Burger" << endl;
	cout << "Press \'2\' for Fries" << endl;
	cout << "Press \'3\' for Drinks" << endl;
	cout << "If You want To Cancel Item Press \'0\'" << endl;
	cout << "What Do You Want?" << endl;
	cin >> number;
	//Quantity
	cout << "Enter quantity" << endl;
	cin >> quantity;
	if (number == 1)
		price1 = 30 * quantity;
	cout << "Do you want Fries?" << endl;
	cin >> number;
	if (number == 2) {
		cout << "Enter quantity" << endl;
		cin >> quantity;
		price2 = 10 * quantity;
	}
	if (number == 0) {

	}
	cout << "Do you want Drinks" << endl;
	cin >> number;
	if (number == 3) {
		cout << "Enter quantity" << endl;
		cin >> quantity;
		price3 = 5 * quantity;
	}
	if (number == 0) {

	}
	//Totall Bill
	price = price1 + price2 + price3;
	cout << "Total Amount is :" << price << endl;
	cout << "Enter price =";
	cin >> total;
	//For Change
	change = total - price;
	if (change >= 0)
		cout << "Remaining Amount is " << change << "$";
	else
		cout << "Invalid input";
	return 0;
}
