#include <iostream>
using namespace std;

/*
    1. greatest of two numbers
    2. greatest of three numbers
    3. greatest of four numbers.
*/
int main()
{
    // if-else alternative

    // if (/* condition */)
    // {
    //     /* code */
    // }
    // else
    // {

    // }

    // ternary -->  ?    :   ;
    //   (condition) ? true part : flase part;
    //                  if              else

    int age;
    cout << "Enter your age : ";
    cin >> age;

    string ans = (age >= 18) ? "You can vote" : "You cannot vote";

    cout << ans;
    return 0;
}