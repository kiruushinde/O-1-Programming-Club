#include <iostream>
using namespace std;
/*
    1. find the factros of a number.

    e.g. num = 10

    10
    1, 2, 3, 4, 5, 6, 7, 8, 9, 10


    --> 1, 2, 5, 10
*/
int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    //          10 / 1 == 0
    cout << "Factors of " << num << " are : " << endl;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}