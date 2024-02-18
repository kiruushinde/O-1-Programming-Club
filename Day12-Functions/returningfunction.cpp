#include <iostream>
using namespace std;

/*
    --> one function can return only one value

    return_type name(parameters)
    {
        // code

        return return_value;
    }
*/

int addtion()
{
    return 3 + 5; // 8
}
int main()
{

    int ans;
    ans = addtion(); // -->  8;
    cout << ans;
    return 0;
}