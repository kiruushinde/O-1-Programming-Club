#include <iostream>
using namespace std;
/*
3. reverse the number..

input:  123
output: 321


213 --->

123 % 10  = last 1 digit
123 % 100 = last 2 digits..
123 % 1000 = last 3 digits..

123 / 10 = last 1 digit removed..
123 / 100 = last 2 digits removed
.
.

3, 2, 1

rev = 0;

rev = rev * 10 + digit;

1.  digit = 3
    rev = rev * 10 + 3;
        = 0 + 3
    rev = 3

2. digit = 2

    rev = rev * 10 + digit;
        = 3 * 10 + digit
        = 30 + 2
    rev = 32

3. digit = 1
    rev = rev * 10 + digit;
        = 32 * 10 + 1
        = 320 + 1
    rev = 321






1. 123 % 10 => 3

   123 / 10
   num = 12

   12 % 10 => 2

   12 / 10
   num = 1;

   1 % 10 => 1

   1/10
   1 / 10 => 0


*/
int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int rev = 0;

    while (n) // 123, 12, 1, 0
    {
        int digit = n % 10; // last digit
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "reversed number is : " << rev;
    return 0;
}