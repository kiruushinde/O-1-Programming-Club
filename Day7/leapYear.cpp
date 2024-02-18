#include <iostream>
using namespace std;
/*
    4. write a program to find whether a year entered by user is a leap year or not.

    leap year : ---> 366 days..
        Feb. 29 days..

    after every 4 years..

    1. divisible by 4 
    2. century year : 400 divisible  --> remainder 0
    3. century year : not divisilbe by 100.. --> not 0
*/
int main()
{
    int year;
    cout << "Enter the year : ";
    cin >> year;

    // 1900 --> not a leap year..
    // 2000, 2004
    if (year % 400 == 0)
    {
        cout << "Leap year";
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year" << endl;
    }

    return 0;
}