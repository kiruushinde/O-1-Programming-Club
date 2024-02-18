#include <iostream>
using namespace std;

// 3. calculate sum of digits of number

/*
    input : 123
    digits : 1 + 2 + 3 = 6

    1. digit seperate..
    2. add digit to sum
    3. return sum;
*/

int sumOfDigits(int n)
{
    int sum = 0;
    // 123
    while (n)
    {
        int digit = n % 10; // 3
        sum += digit;       // sum = sum + digit;
        n = n / 10;
    }

    return sum;
}
int main()
{
    int n;
    cin >> n;

    int sum = sumOfDigits(n);

    cout << "sum of digits is : " << sum;
    return 0;
}