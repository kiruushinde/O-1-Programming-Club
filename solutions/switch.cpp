#include <iostream>
using namespace std;

/*
    8 --> your age is between 1 to 10
    5 --> your age is between 1 to 10
   18 --> your age is between 11 to 20
   28 --> your age is between 21 to 30
   38 --> your age is between 31 to 40
   48 --> your age is between 41 to 50


   8 / 10 --> 0 

   15 / 10 --> 1

   25 / 10 --> 2.5 --> 2

   38 / 10 --> 3

   49 / 10 --> 4

*/
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;

    switch (age)
    {
    case 1 ... 10:
        cout << "Your age is between 1 to 10" << endl;
        break;

    case 11 ... 20:
        cout << "Your age is between 11 to 20" << endl;
        break;

        // case 2:
        //     cout << "Your age is between 21 to 30" << endl;
        //     break;

        // case 3:
        //     cout << "Your age is between 31 to 40" << endl;
        //     break;

        // case 4:
        //     cout << "Your age is between 41 to 50" << endl;
        //     break;

    default:
        cout << "No age is matched...";
        break;
    }
    return 0;
}