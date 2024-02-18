#include <iostream>
using namespace std;

/*
    1. Arithmetic operators
        > +
        > -
        > *
        > /
        > %

        5/10  = 0.5 --> flaot
            --> int --> 0

*/
int main()
{

    // #️⃣ Arithmetic Operators
    // int num1, num2; // operands
    // int percentage = 100;

    // cout << "enter two numbers : " << endl;
    // cin >> num1 >> num2;

    // int addtion = num1 + num2;
    // int sub = num1 - num2;
    // int mul = num1 * num2;
    // int div = num1 / num2;

    // cout << "addition of two number is : " << addtion << endl;
    // cout << "addition of two number is : " << addtion << endl;
    // cout << "addition of two number is : " << addtion << endl;
    // cout << "addition of two number is : " << addtion << endl;

    // // modulo %
    // /*
    //     n1 = 10
    //     n2 = 5

    //     n1 / n2 = 10 / 5; --> 0
    //             11 / 5;  1

    //         2343 / 25;
    // */
    // int n1 = 2343, n2 = 25;
    // int remainder = n1 % n2;
    // cout << "remainder is : " << remainder;

    // #️⃣ Relational operators
    /*
        1. >
        2. <
        3. >=
        4. <=
        
    */

    // int n1 = 5, n2 = 10;

    // bool isLess = n1 < n2; // true or false
    // bool isGreater = n1 > n2;
    // bool isLessEqual = n1 <= n2;
    // bool isGreaterEqual = n1 >= n2;

    // cout << n1 << " is less than " << n2 << " " << isLess << endl;
    // cout << n1 << " is isGreater than " << n2 << " " << isGreater << endl;
    // cout << n1 << " is isLessEqual than " << n2 << " " << isLessEqual << endl;
    // cout << n1 << " is isGreaterEqual than " << n2 << " " << isGreaterEqual << endl;

    // #️⃣ Logical operators
    /*
        1. and --> && (when both are compulsory..)
        2. or  --> ||  (when any one is needed/..)
        3. not  --> !   (true --> false, false --> true)

        when you want to check two conditons 

        ✨ AND Gate
        A   B   output
        ------------
        T   T     T
        T   F     F
        F   T     F 
        F   F     F

        ✨ OR Gate
        A   B   output
        ------------
        T   T     T
        T   F     T
        F   T     T 
        F   F     F


        for and --> 
        short circuit operation: 

        F        T 
        cond1 && cond2 X
    */

    // int n1 = 5, n2 = 10;
    // //  5 < 10 --> fasle,  5 > 1 --> true  ==> true
    // int con1 = n1 < 4 && n1 > 1; // true
    // cout << con1 << endl;

    // //         5 < 10 --> true, 5 < 3 --> false => true
    // int con2 = n1 < 10 || n1 < 3;
    // cout << con2 << endl;

    // int notOperator = !(n1 < n2); // true
    // cout << notOperator;

    // #️⃣ Assignment
    // int a = 2;
    return 0;
}