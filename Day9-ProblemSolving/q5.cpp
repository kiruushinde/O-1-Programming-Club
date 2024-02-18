#include <iostream>
using namespace std;

/*
    5. Write a program to sum first n naturals numbers using while loop.
*/
int main()
{

    int n = 5;

    // ✨by using formula
    // 1 + 2 + 3 + 4 + 5 = 15
    // int sum = n * (n + 1) / 2;

    // ✨ by using loop
    int sum = 0;
    int i = 1;
    while (i <= 5)
    {
        sum = sum + i;

        i++;
    }

    cout << "The sum is : " << sum << endl;
    return 0;
}