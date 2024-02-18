#include <iostream>
using namespace std;

/*
    nested loop

    if()
    {
        if()
        {

        }
    }
    else
    {

    }
*/
int main()
{
    //      i = 1, 2

    // outer loop : 5 times.
    /*
        5 + 5 + 5 + 5 + 5 = 25
    */
    for (int i = 1; i <= 5; i++) // outer loop
    {
        // i=1, j = 1, 2, 3, 4, 5
        // i=2, j = 1, 2, 3, 4, 5
        // i=3, j = 1, 2, 3, 4, 5
        for (int j = 1; j <= 5; j++) // inner loop
        {
            cout << i << " " << j << endl;
        }

        cout << endl;
    }

    /*
        why to use ?
        1. pattern printing
        2. 2D matrix, printing, operation..
    */
    return 0;
}