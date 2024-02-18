#include <iostream>
using namespace std;
/*
Write a cpp program to find and display the product of three positive integer values based on the rule mentioned below:

It should display the product of the three values except when one of the integer value is 7. In that case, 7 should not be Included in the product and the values to its left also should not be included. If there is only one value to be considered, display that value itself. If no values can be included in the product, display -1.

Note: Assume that if 7 is one of the positive integer values, then it will occur only once. Refer the sample I/O given below.

Sample Input        expected output

1, 5, 3                 15

3,7,8                   8

7,4, 3                  12

1, 5, 7                 -1


*/
int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 != 7 && n2 != 7 && n3 != 7)
    {
        cout << n1 * n2 * n3;
    }
    else if (n1 == 7)
    {
        cout << n2 * n3;
    }
    else if (n2 == 7)
    {
        cout << n3;
    }
    else if (n3 == 7)
    {
        cout << -1;
    }

    return 0;
}