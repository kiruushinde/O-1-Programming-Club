#include <iostream>
using namespace std;

/*
    1. if
    2. if-else
    3. if-elseif-else (if-else ladder)
    4. nested if else
    5. switch case
*/
int main()
{
    // 1. if

    // if (age > 18)
    // {
    //     cout << "You can vote !!" << endl;
    // }
    // else
    // {
    //     cout << "You cannot vote !!" << endl;
    // }

    /*
    int age = 0;

    if (age > 50) // 10 > 50
    {
        cout << "You should not drive !!" << endl;
    }
    else if (age > 30) // 10 > 30
    {
        cout << "You can drive " << endl;
    }
    else if (age > 20) // 10 > 20
    {
        cout << "You should drive carefully " << endl;
    }
    else if (age == 0) // 10 == 0
    {
        cout << "You are not born yet " << endl;
    }
    else
    {
        cout << "No condition match" << endl;
    }

    cout << "Done" << endl;
    */

    // 3. nested if else

    int age = 14;

    if (age > 20)
    {
        if (age < 50)
        {
            cout << " You are invited to party " << endl;
        }
        else
        {
            cout << " You are not invited to the party " << endl;
        }
    }
    else
    {
        if (age > 15)
        {
            cout << "You are invited to kids party ";
        }
        else
        {
            cout << "You please sit in your home " << endl;
        }
    }

    return 0;
}