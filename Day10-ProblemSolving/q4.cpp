#include <iostream>
using namespace std;
/*
    4. palindrome it is..

    e.g. 121

    reverse --> 121

    compare --> original == reverse
*/
int main()
{

    int n;
    cout << "Enter a number : ";
    cin >> n;

    int temp = n;
    int rev = 0;

    while (n) // 123, 12, 1, 0
    {
        int digit = n % 10; // last digit
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << "reversed number is : " << rev << endl;
    cout << "original number is : " << temp << endl;

    if (rev == temp)
        cout << "palindrome number it is..";
    else
        cout << "not a palindrome number it is..";

    return 0;
}