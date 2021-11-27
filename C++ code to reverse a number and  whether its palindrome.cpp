#include <iostream>
using namespace std;

int main()
{
    int n, n1, n3, reverse = 0;

    cout << "Enter a 5 digit number: ";
    cin >> n1;

    n = n1;

    do
    {
        n3 = n1 % 10;
        reverse = (reverse * 10) + n3;
        n1 = n1 / 10;
    } while (n1 != 0);

    cout << " The reverse of the number is: " << reverse << endl;

    if (n == reverse)
        cout << " The number is palindrome";
    else
        cout << " The number is not palindrome";
    system("pause");
    return 0;
}