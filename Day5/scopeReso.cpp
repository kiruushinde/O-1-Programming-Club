#include <iostream>
#include <iomanip>
using namespace std;

/*
    1. scope resolution operator( :: )
        --> global scope 
    

    2. sizeof(type, int, float, etc)
        --> return size in bytes

    
    3. referece variable ( & )

    4. variables and constants

    5. manipulators
        > endl;
        > setw;

*/
int a = 32; // global scope

int main()
{
    // this is in local scope
    int a = 30;

    cout << ::a;
    cout << endl;
    cout << a << endl;

    // int size 4 bytes
    // char

    int a1;   // 4
    float b;  // 4
    char c;   // 1
    bool d;   // 1
    double e; // 8
    cout << "size of a1 is : " << sizeof(9) << " byte" << endl;
    cout << "size of b is : " << sizeof(23.3) << " byte" << endl;
    cout << "size of c is : " << sizeof(c) << " byte" << endl;
    cout << "size of d is : " << sizeof(d) << " byte" << endl;
    cout << "size of e is : " << sizeof(e) << " byte" << endl;

    // refereence variable
    int x = 3;
    int y = 5;
    float z = 3;
    cout << "address of x is : " << &x << endl; // 0x61ff08
    cout << "address of y is : " << &y << endl; // 0x61ff08
    cout << "address of z is : " << &z << endl; // 0x61ff08

    // const int num = 3;

    // num = 8;

    // num = 10;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "using setw ()" << endl;

    int num1 = 3, num2 = 50, num3 = 1234;

    cout << "num1 = " << setw(4) << num1 << endl;
    cout << "num2 = " << setw(4) << num2 << endl;
    cout << "num3 = " << setw(5) << num3 << endl;
    return 0;
}