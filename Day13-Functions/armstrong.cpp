#include <iostream>
#include <math.h>
using namespace std;

/*

    1. armstrong number

    --> 123
        - count digits (n = 3)
        - take power of individual digit to no. of digits
        1*1*1 + 2*2*2  + 3*3*3

        sum == originalnum

*/

int countDigits(int num)
{
    int count = 0;

    //    123, 12, 1, 0
    while (num)
    {
        // int digit = num % 10;
        count++;        // 1, 2, 3
        num = num / 10; // 12, 1, 0
    }

    return count;
}
bool isArmstrong(int n)
{
    int power = countDigits(n); // 3

    int sum = 0;
    int temp = n;

    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, power); // 3^n
        n = n / 10;
    }

    if (sum == temp)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int res = isArmstrong(n);

    if (res)
    {
        cout << "Armstrong number..";
    }
    else
        cout << "not an armstrong number..";

    return 0;
}