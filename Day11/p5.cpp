#include <iostream>
using namespace std;

/*

    * * * * *
    * * * *
    * * *
    * *
    *

    n = 5;

    row no.    print
    1   -       5
    2   -       4
    3   -       3
    4   -       2
    5   -       1

        n - i + 1;
    1.  5 - 1 + 1 = 5
    2.  5 - 2 + 1 = 4
    3.  5 - 3 + 1 = 3
    4.  5 - 4 + 1 = 2
    5.  5 - 5 + 1 = 1

    //  i = 2
    for(int i = 1; i <= n; i++)
    {
        //    j=1, j<= 5;
        for(int j=1; j <= n-i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }

*/
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        //       j=0,   j <= 5
        for (int j = 1; j <= n; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}