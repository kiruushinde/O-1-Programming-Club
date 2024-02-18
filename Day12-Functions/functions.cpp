#include <iostream>
using namespace std;

/*
    what is funciton ?

    --> it is a block of code, which performs some task..

    how to identify ?
    --> () paranthesis
    --> it eithers returns or not the value.

    #️⃣ syntax

    return_type name(arguments)
    {
        // code

        // return value;
    }

    --> return value is dependent on return type.

    --> what can be your return type ?
        1. int
        2. float
        3. char
        4. bool
        5. string.

    --> how to call a function ?
        by usign it's name

    --> void : null (returns noting)

    --> whatever functions you write, write above main function

    --> categories
        1. returns value
        2. not retursn value

    --> Types of functions
        1. user defined
        2. in-built functions
*/

void sayGoodAfternoon()
{
    cout << "Good afternoon" << endl;
    int a = 3;
    int b = 4;
    cout << a + b << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
}

void greetigns()
{
    cout << "Good Morning.." << endl;
    sayGoodAfternoon();
}

int main()
{
    cout << "Hello" << endl;
    // calling a function
    greetigns();
    cout << "Bye" << endl;

    // sayGoodAfternoon(); // declaration

    return 0;
}
