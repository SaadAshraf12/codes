#include<iostream>
using namespace std;
int main() {
	int  colonial, split_entry, single_story, area, price_colonial, price_split, price_single, minimum_price;
	cout << "Enter per square unit price of split_entry :" << endl;
	cin >> split_entry;
	cout << "Enter per square unit price of colonial :" << endl;
	cin >> colonial;
	cout << "Enter per square unit price of single_story :" << endl;
	cin >> single_story;
	cout << "Enter area in square feet :";
	cin >> area;
	price_single = area * single_story;
	price_colonial = area * colonial;
	minimum_price = price_colonial;
	price_split = area * split_entry;
	if (price_split < minimum_price)
		minimum_price = price_split;
	if (price_single < minimum_price)
		minimum_price = price_single;
	if (minimum_price == price_split)
		cout << "spilt_entry has the least price and it is :" << minimum_price << "$" << endl;
	if (minimum_price == price_single)
		cout << "single story has the least price and it is :" << minimum_price << "$" << endl;
	if (minimum_price == price_colonial)
		cout << "colonial story has the least price and it is :" << minimum_price << "$" << endl;
	system("pause");
	return 0;
}
