#include <iostream>
using namespace std;

void print(int &a)
{
    a = 50;
    cout << a << endl; // 50
}
int main()
{
    int a = 10;
    cout << a << endl; // 10

    print(a);

    cout << a << endl; // 50
    return 0;
}