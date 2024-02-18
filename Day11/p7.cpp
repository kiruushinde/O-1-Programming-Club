#include <iostream>
using namespace std;

/*

    *
  * * *
* * * * *

n=3;

row no.  print
        s   *   s
1  -->  2   1   2
2  -->  1   3   1
3  -->  0   5   0

spaces 👇🐱

n=3;
1 --> 2  n-i
2 --> 1
3 --> 0

i=1; n-1 = 2;
i=2; n-2 = 1;
i=3; 3-3 = 0;

stars 👇 2*i - 1
1 --> 1
2 --> 3
3 --> 5

2*i - 1;

i=1; 2*1-1 = 1;
i=2; 2*2-1 = 3;
i=3; 2*3-1 = 5;













for(int i = 1; i <= n; i++)
{
    // space
    for(int j=1; j<= n-i; j++)
    {
        cout << " ";
    }

    // stars
    for(int j=1; j<= 2*i-1; j++)
    {
        cout << "*";
    }

    // space
    for(int j=1; j<= n-i; j++)
    {
        cout << " ";
    }

    cout << endl;
}

*/
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}