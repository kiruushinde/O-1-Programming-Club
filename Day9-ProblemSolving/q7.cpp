#include <iostream>
using namespace std;

/*
7. Write a program to calculate the sum of the nubmers occurring in the multiplication table of 8.

8
16
24
.
.
.
.
80
*/
int main()
{
    int num = 8, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int muli = num * i;
        sum = sum + muli;
    }

    cout << "\nSum of numbers in table of 8 is : " << sum << endl;
    cout << endl;
    return 0;
}