#include <iostream>
using namespace std;

/*
1. Write a program to print multiplication table of given number.
*/
int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    // 5 X 1 = 5
    for (int i = 1; i <= 10; i++)
    {
        int mul = number * i;
        cout << number << " X " << i << " = " << mul << endl;
    }

    return 0;
}