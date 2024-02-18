#include <iostream>
using namespace std;
/*
    5. find the sum of digit's of a number..

    e.g. num = 233

    digits --> 2, 3, 3
    sum = 2 + 3 + 3
    sum = 8
*/
int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int sum = 0;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit; // 8
        num = num / 10;
    }

    cout << "sum of digits of number is : " << sum;
    return 0;
}