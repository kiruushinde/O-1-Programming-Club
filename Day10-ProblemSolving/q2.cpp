#include <iostream>
using namespace std;

/*
2. perfect number

--> sum of it's divisiors is equal to that number..
but excluding that number itself..

10 input

factors--> 1, 2, 5 ==> 8 == 10 no.

1. find factors
2. sum of factors.
*/
int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int sum = 0;
    // 10
    for (int i = 1; i < num; i++)
    {
        // 10 true
        if (num % i == 0)
        {
            // yes, factor it is..
            cout << i << endl;
            // sum = sum + i;
            sum += i;
        }
    }

    if (sum == num)
    {
        cout << num << " is a perfect number";
    }
    else
        cout << num << " is a not perfect number";

    return 0;
}