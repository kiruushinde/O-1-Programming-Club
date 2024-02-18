#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;

    // n1 < n2 --> n2 > n1
    n1 = 100;
    n2 = 300;
    n3 = 15;
    n4 = 999;

    if (n1 > n2 && n1 > n3 && n1 > n4)
    {
        cout << n1 << " is greatest";
    }
    else if (n2 > n3 && n2 > n4)
    {
        cout << n2 << " is greatest";
    }
    else if (n3 > n4)
    {
        cout << n3 << " is greatest";
    }
    else
    {
        cout << n4 << " is greatest";
    }

    return 0;
}