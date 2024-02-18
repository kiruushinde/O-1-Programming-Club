#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            // cout << "value of i is " << i << endl;
            // continue;
            break;
        }

        cout << i << endl;
    }

    cout << "breaked the loop..";
    return 0;
}