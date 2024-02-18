#include <iostream>
using namespace std;

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

n = 5;


row no.     print
1       -   1 2 3 4 5
2       -   1 2 3 4
3       -   1 2 3
4       -   1 2
5       -   1

i=1;  1 to n-1+1;
i=2;  1 to n-1;
i=3;  1 to n-2;
i=4;  1 to n-3;
i=5;  1 to n-4;

//      i=2;
for(int i = 1; i <= n; i++)
{
    //      j=1; j<= 5-2+1;
    for(int j=1; j<= n-i+1; j++)
    {

    }
}

*/
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        //      j=1; j<= 5-2+1;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}