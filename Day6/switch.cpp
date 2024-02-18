#include <iostream>
using namespace std;

/*
    1. integer variable
    2. character 
*/
int main()
{
    // 8 --> your age is between 1 to 10
    // 18 --> your age is between 11 to 20
    // 28 --> your age is between 21 to 30
    // 38 --> your age is between 31 to 40
    // 48 --> your age is between 41 to 50

    int age = 23;

    switch (age)
    {
    case 10:
        cout << "Your age is 20 " << endl;
        break;

    case 1:
        cout << "Your age is 10" << endl;
        break;

    default:
        cout << "No age matched " << endl;
        break;

    case 30:
        cout << "Your age is 30 " << endl;
        break;
    }
    return 0;
}