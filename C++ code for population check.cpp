#include<iostream>
using namespace std;
int main() {
	int townA_population, townB_population, years = 1;
	double rateA, rateB;
	//Asking for population of town A
	cout << "enter the population of town A" << endl;
	//Entering the population of town A
	cin >> townA_population;
	//Asking for population of town B
	cout << "enter the population of town B" << endl;
	//Entering the population of town A
	cin >> townB_population;
	//Asking for growth rate of town A
	cout << "enter the grothw rate of town A" << endl;
	//Entering the growth rate of town A
	cin >> rateA;
	//Asking for growth rate of town B
	cout << "enter the grothw rate of town B" << endl;
	//Entering the growth rate of town A
	cin >> rateB;
	//Applying the while condition
	while (townA_population < townB_population) {
		townA_population = townA_population + (townA_population * (rateA / 100));
		townB_population = (townB_population * (rateB / 100)) + townB_population;
		//increment in years variable
		years++;
	}
	cout << "In " << years << " years the population of Town A will become greater than that of town B" << endl;

	return 0;
}
