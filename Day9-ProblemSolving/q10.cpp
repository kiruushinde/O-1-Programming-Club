#include <iostream>
using namespace std;

/*
10. write a program to check whether a number is prime or not.

--> prime nubmer : having only two factors
                    1 and that number itself.

    2, 3, 4, 5, 6, 7...
    2 --> 1, 2
    3 --> 1, 3
    4 --> 1, 2, 4
    5 --> 1, 5
    6 --> 1, 2, 3, 6

*/
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    // 5
    // 1 | 2, 3, 4, 5, | 6

    if (num == 1 || num == 0)
    {
        cout << "Please enter valid numbers ";
        return 0;
    }
    bool flag = 1;
    //                    2
    for (int i = 2; i < num; i++)
    {
        // 2, 3, 4, 5
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    // flag = 1;
    if (flag == 1)
    {
        cout << "Prime number it is..";
    }
    else
    {
        cout << "Not a prime number..";
    }

    return 0;
}