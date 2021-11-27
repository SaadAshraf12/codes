#include<iostream>
using namespace std;
int main()
{
    //creating desired suitable variables
    int i, j, height, width;
    //Asking user to input the height of rectangle
    cout << "Enter the number of height lines" << endl;
    //user enters the height of rectangle
    cin >> height;
    //Asking user to input the width of rectangle
    cout << "Enter the number of width lines" << endl;
    //user enters the width of rectangle
    cin >> width;
    //using for nested loop
    for (i = 1; i <= height; i++) //increment i++
    {
        for (j = 1; j <= width; j++) //increment j++
        {
            if (i == 1 || i == height || j == 1 || j == width) //using check statement "=="
                cout << "*"; //printing *
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;

}


