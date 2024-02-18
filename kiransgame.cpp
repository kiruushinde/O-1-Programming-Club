#include <iostream>
#include <stdlib.h> // srand(), rand()
#include <time.h>
using namespace std;

/*

    #️⃣ parameters --> s, w, g

    you : s, w, g
    computer: s, w, g


    #️⃣ match draw
        you     computer
        g       g
        s       s
        w       w

    #️⃣ remaining conditions

        you     computer
         g        s, w
         s        g, w
         w        s, g

    #️⃣ You win

        you  computer
         g     s
         s     w
         w     g

    #️⃣ Computer win
        you   computer
         g      w
         s      g
         w      s
*/
int main()
{

    srand(time(NULL));
    int randomNumber = rand() % 100 + 1;
    // cout << randomNumber;

    char computer;
    char you;

    if (randomNumber >= 1 && randomNumber <= 33)
    {
        computer = 's';
    }
    else if (randomNumber >= 34 && randomNumber <= 66)
    {
        computer = 'w';
    }
    else
        computer = 'g';

    cout << "Enter you choice = ";
    cin >> you;

    // conditions..
    cout << "Computer's choice is : " << computer << endl;
    cout << "Your choice is : " << you << endl;

    if (you == computer)
    {
        cout << "Match Draw..";
    }
    else
        (/*you winning*/)
        {
            cout << "You win";
        }
    else cout << "Computer win..";
    return 0;
}