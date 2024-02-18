#include <iostream>
using namespace std;

// reverse the number

/*
    123 --> 321
    temp = num;

    int rev = 0;

    num = 123, num % 10 = 3;
    digit = 3;
    1. rev * 10 + digit;
           0 + 3
        = 3;

    num/10 = 12

    num = 12, num % 10 = 2
    digit = 2
    2. rev * 10 + digit
        3 * 10 + 2
        32

    num/10 = 1

    num = 1; num % 10 = 1;
    digit = 1;
    3. rev * 10 + digit
        32 * 10 + 1
         320 + 1
          321


*/
int main()
{
    int num;
    cin >> num;

    int first = 0;
    int second = 1;
    for (int i = 1; i <= num; i++)
    {
        int next = first + second;
        if (i == 1)
        {
            cout << first << " ";
        }
        if (i == 2)
        {
            cout << second << " ";
        }

        if (i > 2)
        {
            cout << next << " ";
        }
        first = second;
        second = next;
    }

    return 0;
}