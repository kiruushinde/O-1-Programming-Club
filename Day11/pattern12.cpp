#include <iostream>
using namespace std;

/*
A
BB
CCC
*/
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
        }

        cout << endl;
    }

    return 0;
}