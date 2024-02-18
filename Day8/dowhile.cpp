#include <iostream>
using namespace std;

int main()
{

    /*
        - it runs at least one time even if the condition is false...
    
    */

    // intializaiton
    int i = 0;
    int sum = 0; // 0
    do
    {
        sum = sum + i; // sum = 1 + 2 = 3
        i++;           // 2
    } while (i <= 10);
    //       2 <= 10
    cout << sum << endl;
    return 0;
}