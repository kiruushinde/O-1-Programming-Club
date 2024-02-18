#include <iostream>
using namespace std;

/*
    2 = 1 0
    3 = 1 1
    --------
        0 1 --> 1
*/
int main()
{
    int num1 = 2, num2 = 3;
    int res = num1 ^ num2;
    cout << res;
    return 0;
}