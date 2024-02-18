#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    // if it is century year..
    if (year % 400 == 0)
    {
        cout << "leap year";
    }
    else if (year % 100 != 0 && year % 4 == 0)
    {
        cout << "leap year";
    }
    else
        cout << " Not leap year";

    return 0;
}