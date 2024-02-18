#include <iostream>
using namespace std;

/*


*****
 ***
  *



n = 3;

rowno   print
        s   *    s
0   --> 0   5    0
1   --> 1   3    1
2   --> 2   1    2

spaces 👇
i=0; 0
i=1; 1
i=2; 2


stars 👇
i=0; --> 5  2*n - (2*i+1); 2*3-(0+1) = 6-1 = 5
i=1; --> 3  2*n - (2*i+1); 2*3-(2+1) = 6-3 = 3
i=2; --> 1


for(int i=0; i<n; i++)
{
    // space
    for(int j=0; j<i; j++)
    {

    }

    //stars


    // space
    for(int j=0; j<i; j++)
    {

    }
}















*/
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    return 0;
}