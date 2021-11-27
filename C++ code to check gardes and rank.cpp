#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter Marks obtained: ";
    cin >> marks;
    if (marks > 90)
        cout << "A";
    else if (marks >= 86 && marks < 90)
        cout << "A-";
    else if (marks >= 81 && marks < 86)
        cout << "B+";
    else if (marks >= 77 && marks < 81)
        cout << "B";
    else if (marks >= 72 && marks < 77)
        cout << "B-";
    else if (marks >= 68 && marks < 72)
        cout << "C+";
    else if (marks >= 63 && marks < 68)
        cout << "C";
    else if (marks >= 58 && marks < 63)
        cout << "C-";
    else if (marks >= 54 && marks < 58)
        cout << "D+";
    else if (marks >= 50 && marks < 54)
        cout << "D";
    else if (marks < 50)
        cout << "F";
    else
        cout << "Invalid!";
    cout << endl;
    return 0;
}
s