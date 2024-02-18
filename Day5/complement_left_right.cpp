#include <iostream>
using namespace std;

/*

    1. complement operator bitwise ~ (tilda)

        int --> 4 32 bits
        
        int x = 2;

        x = ~x;

        2 -->   00000000 00000000 00000000 00000010
                                                 +1
                ------------------------------------
                0000000 00000000 00000000 000000011
                                1's 
        1's --> 1 1111111 11111111 11111111 11111101
                                                + 1
               msb
               1 --> -ve 
               0 --> +ve 

               2's 

        
        x = b1;
            
        -x = b2; (2's )


        if i calculate 2's of b2

        x = 2;
        -3 
        ~ --> - (n+1)


    2 -->     0010
                +1
              0011 --> 3
            
            1    
    5 --> 0101
         +   1
         -----
          0110 --> 6
    ------------------------------------------------

    1. right shift 
    2. left shift

    5 -->    0000 0101 -----
             0000 0010  1         
    5 >> 1

    right shift (divide by 2) 5 / 2 = 2;

    2. left shift

    5 -->  0000 0101
           0000  1010
        5 << 1;
*/
int main()
{
    int x = 5;
    int res = ~x;
    // cout << res << endl;

    int righShift = x >> 1;
    int leftShift = x << 3;

    cout << righShift << endl;
    cout << leftShift << endl;
    return 0;
}