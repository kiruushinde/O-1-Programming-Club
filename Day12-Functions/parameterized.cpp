#include <iostream>
using namespace std;

//          5,   6
int sum(int n1, int n2)
{
    return n1 + n2; // 5+6 = 11
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    //        sum(5, 6)
    int ans = sum(n1, n2); // actual parameters // ans = 11
    cout << "addition of " << n1 << " and " << n2 << " is : " << ans;
    return 0;
}