#include <iostream>
using namespace std;

// count the no. of digits
/*
✨Approach
1. seperate the digits
2. count

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
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int digits = countDigits(n);

    cout << "No. of digits are : " << digits;
    return 0;
}