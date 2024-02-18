#include <iostream>
using namespace std;

/*

    #️⃣ Homework - examples
        - XOR operator
    1. increment ++ (pre increment and post incremnt)
            + 1;
        
        a = 2;
        a++ = a + 1;
        a++ = 2 + 1;
        a++ = 3;
        a++ = 3;

    2. decrement -- (pre decrement and post decrement )

    a = 2;
    a-- = a - 1;
    a-- = 2 - 1;
    a-- = 1;

*/
int main()
{

    // int a = 2;
    // cout << "value of a before incrment : " << a;
    // a++;
    // // a = a + 1;
    // cout << endl;
    // cout << "value of a after increment : " << a; // 3

    // cout << endl;

    // cout << "value of a before decrement : " << a;
    // a--; // a = a- 1; 2
    // cout << endl;
    // cout << "value of a after decrement : " << a;

    // int a = 2;

    // a++; // post increment a = 3
    // cout << a << endl;

    // ++a; // pre incremnt
    // cout << a;
    // a--; // post decrement
    // --a; // pre decremnt

    int b = 10;

    ++b; // 11, b = 11
    b++; // b = 11, 12

    --b; // 11, b = 11
    b--; // b = 11, 10
    cout << b;
    return 0;
}