#include <iostream>
using namespace std;

/*
    lowercase: a - z --> 97 to 122
    uppercase: A - Z --> 65 to 90
*/
int main()
{

    char ch;
    cout << "Enter a character : ";
    cin >> ch;

    if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << "lowercase character..";
    }
    else
    {
        cout << "Not lowercase chracter..";
    }

    return 0;
}