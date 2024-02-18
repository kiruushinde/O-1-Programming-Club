#include <iostream>
using namespace std;

/*

    *
  * * *
* * * * *

n = 3;

row no.     print
            s  *   s
1   -->     2  1   2
2   -->     1  3   1
3   -->     0  5   0

spaces 👇
n=3
i=1; n-i = 2;
i=2; n-i = 1;
i=3; n-i = 0;

stars 👇
i=1; --> 1 star  2 * i - 1; = 2*1-1 => 1 star
i=2; --> 3 star  2 * i - 1; = 2*2-1 => 3 star
i=3; --> 5 star  2 * i - 1; = 2*3-1 => 5 star


for(int i = 1; i <= n; i++)
{
    // space
    for(int j = 0; j < n-i; j++)
    {
        cout << " ";
    }
    // stars
    for(int j = 0; j<2*i-1; j++)
    {
        cout << "*";
    }
    // space
    for(int j = 0; j < n-i; j++)
    {
        cout << " ";
    }
}
















*/
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}