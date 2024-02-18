#include <iostream>
using namespace std;

/*
    int a = 10;
    int b = 20;

    after swaping

    a = 20;
    b = 10;


    a = 20;
    b = 10;

    temp = 20+10 = 30;

    a = temp - a = 30-20 = 10;
    b = temp - a = 30-10 = 20;
*/

void swapNumbers(int &a, int &b)
{
    int temp = a + b;

    a = temp - a;
    b = temp - a;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{
    int a = 10;
    int b = 20;

    swapNumbers(a, b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}