#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    /*
        6 -->  1-10
        15 --> 11 - 20
        28 --> 21 - 30
        39 --> 31 - 40
        48 --> 41 - 50
        
        1. 3 / 10 --> 0
        2. 12 / 10 --> 1
        3. 23 / 10 --> 2
        4. 38 / 10 --> 3
        5. 48 / 10 --> 4

    */
    if (age % 10 == 0)
        age = 10;

    switch (age / 10)
    {
    case 0:
        cout << "Your age is between 1 to 10" << endl;
        break;

    case 1:
        cout << "Your age is between 11 to 20" << endl;
        break;

    case 2:
        cout << " Your age is between 21 to 30" << endl;
        break;

    case 3:
        cout << "Your age is between 31 to 40" << endl;
        break;

    case 4:
        cout << "Your age is between 41 to 50";
        break;

    default:
        cout << "No age is matched " << endl;
        break;
    }

    return 0;
}