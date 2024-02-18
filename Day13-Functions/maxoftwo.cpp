#include <iostream>
using namespace std;

/*
1. maximum of two numbers
*/

//               55       7
int findMaximum(int n1, int n2)
{
    if (n1 > n2) // 55 > 7
        return n1;

    return n2;
}

int main()
{

    int n1, n2;
    cout << "Enter two numbers : " << endl;

    cin >> n1 >> n2;

    int maxi = findMaximum(n1, n2);

    cout << "maximum number is : " << maxi << endl;
    return 0;
}