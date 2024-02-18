#include <iostream>
using namespace std;

/*
1. Write a program to print multiplication table of given number in reverse order.
*/
int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    // 5 X 10 = 50
    // 5 X 9 = 45
    // 5 X 8 = 40
    // ...
    // ...
    // ...
    // 5 X 1 = 5

    for (int i = 10; i >= 1; i--)
    {
        int mul = number * i; // 5 * 10 = 50
        cout << number << " X " << i << " = " << mul << endl;
    }

    return 0;
}