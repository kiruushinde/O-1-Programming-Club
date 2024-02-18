#include <iostream>
using namespace std;

/*

*****
 ***
  *

n=3;

rowno.  print
        s   *   s
0 -->   0   5   0
1 -->   1   3   1
2 -->   2   1   2


spaces 👇
0 --> 0 spaces
1 --> 1 space
2 --> 2 spaces

n=3;
stars 👇
0 --> 5
1 --> 3
2 --> 1

2 * n -  (2*i + 1);

i=0; 2*3-(2*0+1) = 6-1 = 5;
i=1; 2*3-(2*1+1) = 6-3 = 3;
i=2; 2*3-(2*2+1) = 6-5 = 1;




// i = 0
for(int i=0; i< n; i++)
{
    // spaces
    //      j=0; j<0;
    for(int j=0; j<i; j++)
    {
        cout << " ";
    }

    // stars
    for(int j = 0; j< 2*n - (2*i + 1); j++)
    {
        cout << "*";
    }


    // spaces
    for(int j=0; j<i; j++)
    {
        cout << " ";
    }
}

*/
int main()
{
    int n;
    cin >> n;

    // i = 0
    for (int i = 0; i < n; i++)
    {
        // spaces
        //      j=0; j<0;
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}