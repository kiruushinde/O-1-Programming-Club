#include <iostream>
using namespace std;

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1


n=5;

row no    print
1    ---> 1 2 3 4 5
2    ---> 1 2 3 4
3    ---> 1 2 3
4    ---> 1 2
5    ---> 1


1  --> 1 2 3 4 5

n-i+1

i=1; 5-1+1 = 5
i=2; 5-2+1 = 4
i=3; 5-3+1 = 3
i=4; 5-4+1 = 2
i=5; 5-5+1 = 1



for(int i=1; i<= n; i++)
{
    for(int j=1; j<= n-i+1; j++)
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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}