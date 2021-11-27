#include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Press 1 for Monday" << endl;
    cout << "Press 2 for Tuesday" << endl;
    cout << "Press 3 for Wednesday" << endl;
    cout << "Press 4 for Thursday" << endl;
    cout << "Press 5 for Friday" << endl;
    cout << "Press 6 for Saturday" << endl;
    cout << "Press 7 for Sunday" << endl;
    cout << "Enter Day Number" << endl;
    cin >> day;
    if (day == 1) {
        cout << "Today Is Monday" << endl;
    }
    if (day == 2) {
        cout << "Today Is Tuesday" << endl;
    }
    if (day == 3) {
        cout << "Today Is Wednesday" << endl;
    }
    if (day == 4) {
        cout << "Today Is Thursday" << endl;
    }
    if (day == 5) {
        cout << "Today Is Friday" << endl;
    }
    if (day == 6) {
        cout << "Today Is Saturday" << endl;
    }
    if (day == 7) {
        cout << "Today Is Sunday" << endl;
    }

    system("pause");
    return 0;
}
