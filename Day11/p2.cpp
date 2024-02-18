#include <iostream>
using namespace std;

/*

 *
 * *
 * * *
 * * * *
 * * * * *

 */
int main()
{
    int n;
    cin >> n;

    //      i = 2,
    for (int i = 1; i <= n; i++)
    {
        //       j=1, j<= 2
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}