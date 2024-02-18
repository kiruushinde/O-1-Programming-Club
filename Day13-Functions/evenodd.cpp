#include <iostream>
using namespace std;

// 4. even or odd

bool evevOrOdd(int n)
{
    //         1
    return (n % 2 == 0);

    return 0;
}
int main()
{
    int n;
    cin >> n;

    bool ans = evevOrOdd(n);

    if (ans)
    {
        cout << "even";
    }
    else
        cout << "odd";

    return 0;
}