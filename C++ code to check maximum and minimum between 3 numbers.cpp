#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the third number: ";
    cin >> number3;

    cout << "\n\n The maximum number is: ";
    if ((number1 > number2) && (number1 > number3)) {
        cout << number1;
    }
    else if (number2 > number3) {
        cout << number2;
    }
    else {
        cout << number3;
    }

    cout << "\n\n The minimum number is: ";
    if ((number1 < number2) && (number1 < number3)) {
        cout << number1;
    }
    else if (number2 < number3) {
        cout << number2;
    }
    else {
        cout << number3;
    }
    return 0;
}