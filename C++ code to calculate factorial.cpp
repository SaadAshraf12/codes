#include <iostream>
using namespace std;

int main()
{
    //Declaring and initilazing the suitable variables
    int i, n, factorial = 1;
    //Asking the user to enter a positive integer
    cout << "Enter a positive integer: "<<endl;
    //User inputs the positive integer
    cin >> n;
    for (i = 1; i <= n; ++i) {    //in this case i=1 and we do preincrement in i
        factorial = factorial * i;
    }

    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}
