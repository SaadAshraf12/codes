#include <iostream>
using namespace std;
int main()
{
	float price = 0;
	int quantity = 0;
	float temp_price;
	float total = 0;
	cout << "How many items do you want to purchase?" << endl;
	//Asking for the amount of items the user wants to purchase
	cin >> quantity;
	//Entering the amount of items the user wants to purchase
	//Using while loop and setting statement according to given condition

	while (quantity > 9) {        //quantity of items to be purchased must not increase 9
		cout << "Try again. The number of items you want to buy cannot exceed 9." << endl;
		cout << "Reenter the quantity of items you want to purchase:" << endl;
		cin >> quantity;
	}

	for (int i = 0; i < quantity; i++)
	{
		cout << "enter the price of the item Rupees:\n";
		cin >> temp_price;
		price = price + temp_price;
	}
	//Applying the condition that if the price is greater than 200 then shipping should be free
	if (price >= 200)
	{
		cout << "Your shipping is free since your total bill is greater than 200\n";
		total = price;
	}
	else
	{
		//Applying else conditon if bill is not greater than 200
		cout << "the shipping fee is 10 rupees for one item so the total shipping fee is Rupees:" << quantity * 10 << endl;
		//if bill is not greater than 200 then
		total = price + (quantity * 10);

	}
	//Printing the total bill with/without the delievery fee
	cout << "Your total fee is Rupees:" << total << endl;
	system("pause");
	return 0;
}
