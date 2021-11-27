#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cout << "Enter the height = ";
    cin >> n1;
    cout << endl;
    cout << "Enter the width = ";
    cin >> n2;
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= n1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}