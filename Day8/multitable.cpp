#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : ";
    cin >> num;

    cout << "multiplication table of " << num << " is :" << endl;

    // num * 1 = ..
    // num * 2 = ..
    // num * 3 = ..
    for (int i = 1; i <= 10; i++)
    {
        int multi = num * i;
        cout << num << " X " << i << " = " << multi << endl;
    }

    return 0;
}