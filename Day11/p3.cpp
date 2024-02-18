#include <iostream>
using namespace std;

/*
    1
    12
    123
    1234
    12345

    n = 5;

    1 - 1
    2 - 1 2
    3 - 1 2 3
    4 - 1 2 3 4
    5 - 1 2 3 4 5

    // i = 2
    for(int i=1; i<=5; i++)
    {
        //      j=1, j<=3
        for(int j=1; j <= i; j++)
        {
            cout << j ;
        }
    }

*/
int main()
{
    int n;
    cin >> n;

    // i = 1
    for (int i = 1; i <= n; i++)
    {
        //       j=1, j<=1
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}