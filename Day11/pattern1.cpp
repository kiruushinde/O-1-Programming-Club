#include <iostream>
using namespace std;

/*

 0  * * * *
 1  * * * *
 2  * * * *
 3  * * * *

 row = 4;
 */
int main()
{
    int n;
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}