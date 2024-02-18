#include <iostream>
using namespace std;

/*
    1
    22
    333
    4444
    55555

    n = 5;

    row no       print..
       1    -     1
       2    -     22
       3    -     333
       4    -     4444
       5    -     55555

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i;
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
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}