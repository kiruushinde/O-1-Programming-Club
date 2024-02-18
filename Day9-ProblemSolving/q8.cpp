#include <iostream>
using namespace std;
// 8. write a program to find factorial of number using for loop.

/*
    Factorial: 5!
    --> 5 * 4 * 3 * 2 * 1; = 120
*/
int main()
{

    int num;
    cout << "Enter the number : ";
    cin >> num;

    int fact = 1;
    //       i = 0;   0 >= 1
    for (int i = num; i >= 1; i--)
    {
        // fact = fact * i;
        fact = fact * i; // 120
        //   =  120 * 1;
    }

    cout << "Factorial of " << num << " is : " << fact;
    return 0;
}