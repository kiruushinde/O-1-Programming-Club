#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;

/*
    #️⃣ parameters --> s, w, g

        you     : s, w, g
        computer: s, w, g

    #️⃣ match draw
        you   computer
        w       w
        s       s
        g       g

    #️⃣ remaining possibilities.
        you    computer
        w       s, g
        s       w, g
        g       s, w

    #️⃣ you win
        you    computer
        w        g
        s        w
        g        s

    #️⃣ Computer win
        you    computer
        w        s
        s        g
        g        w
*/
int main()
{
    srand(time(NULL));

    int randomNum = rand() % 100 + 1;

    // cout << randomNum << endl;
    cout << "\n******** let's play snake, water & gun ********" << endl;

    Sleep(1000);

    char computer;
    char you;
    if (randomNum >= 1 && randomNum <= 33)
        computer = 's';
    else if (randomNum >= 34 && randomNum <= 66)
    {
        computer = 'w';
    }
    else
        computer = 'g';

    cout << "\nComputer has made his choice !!" << endl;

    Sleep(1000);

    cout << "\nEnter your choice = ";
    cin >> you;

    Sleep(1000);

    cout << ".\n";
    Sleep(1000);
    cout << ".\n";
    Sleep(1000);
    cout << ".\n";
    Sleep(1000);

    cout << endl;

    if (you == computer)
    {
        cout << "Game draw !!\n";
    }
    else if ((you == 'g' && computer == 's') || (you == 's' && computer == 'w') || (you == 'w' && computer == 'g'))
    {
        cout << "You Win !!\n";
    }
    else
        cout << "Computer Win !!\n";

    cout << endl;

    cout << "comptuer's choice : " << computer << endl;
    cout << "your choice : " << you << endl;

    cout << "\n******** let's play snake, water & gun ********" << endl;
    return 0;
}