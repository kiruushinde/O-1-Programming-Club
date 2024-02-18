#include <iostream>
using namespace std;
/*
A
AB
ABC
ABCD
ABCDE
*/
int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';

        for (int ch = 0; ch <= i; ch++)
        {
            cout << ch + i;
        }
        cout << endl;
    }

    return 0;
}