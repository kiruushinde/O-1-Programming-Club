#include <iostream>
using namespace std;

// 2. count set bits

/*
    5 --> 101
    no. set bits = 2 (total no. of 1's)


    1. bianry convert
    2. use bitwise and operator


    5 --> 5 & 1

         10  1
        &    1
        ------
        count++;

        101 & 1;

        n >> 1;
        101  ==> 10
*/

int countBits(int n)
{
    int count = 0;

    while (n != 0)
    {
        int digit = n % 10; // last digit
        if (digit == 1)
            count++;

        n = n / 10;
    }

    return count;
}

int countBits2(int n)
{
    int count = 0;

    while (n != 0)
    {
        if (n & 1)
            count++;

        n = n >> 1;
    }

    return count;
}

int main()
{
    //  12 --> 1100
    int num; // 5
    cout << "Enter the number : ";
    cin >> num;

    int bits = countBits2(num);

    cout << "no. of set bits are : " << bits;
    return 0;
}