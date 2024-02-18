#include <iostream>
using namespace std;

/*
    1. Arithmetic --> +, -, *, /, %
        operands + operators 
        2 + 3 --> 
        > binary (2 operands)  2+3, 2/3..
        > unary (1 operands)
          - incremenet
          - decrement
    2. logical  -> and, or, not (&&, ||, !)
    3. relational --> <, >, >=, <=   8 > 08
    4. assignment --> = 


    5. bitwise --> &, |, ~, >>, <<

                          8 4 2 1    
    1 byte = 8 bits   0000 0000 

    1                 0000 0001 
    2                 0000 0010
    3                 0000 0011
    4                 0000 0100
    5                 0000 0101


    int --> 4 bytes --> 4 * 8 = 32 bits 
    char --> 1 byes  ---> 1 * 8 = 8 bits 


    1. and ( & )

        2 & 3 => 

        2 = 10
        -------
        3 = 11

            2 1    
            10
        --> 2 
    
    2. or ( | )
    
        2 | 3

        2 = 10
        3 = 11
        ------
            11 --> 3 

    // homework
    3. complement(~)
        - how the negative numbers are stored in memory.
        -20 = take binary of 20 and then 2's of it.

        lllrly,

        x = b1 (binary)

        -x = b2 (2's)

        if we again take 2's of b2 --> it gives b1 original number.

        e.g. ~5 int (4 bytes)

        00000000 00000000 00000000 00000101
                    1's
        1 1111111 11111111 11111111 11111010 --> this is my negative 
        singned                           
        if 1, -ve


*/
int main()
{

    int a = 5, b = 3;
    int andRes = a & b;
    cout << andRes << endl;

    int orRes = a | b;
    cout << orRes << endl;

    int notRes = ~a;
    cout << notRes;
    return 0;
}