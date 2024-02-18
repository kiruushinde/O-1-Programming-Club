#include <iostream>
#include <cstdlib>
#include <time.h>

/* Done ✅*/
using namespace std;

int main()
{
    string name;
    int random;
    int chance = 10, computerScore = 0, userScore = 0;

    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Welcome to the Game" << endl;
    cout << "You have " << chance << " chances" << endl;
    // providing a seed value
    srand((unsigned)time(NULL));

    // providing a computer input
    // 1 to 33 --> computer choose s
    // 34 to 66 --> computer choose g
    // 67 to 100 --> computer choose w

    // Game Loop
    int i = 1;
    while (chance > 0)
    {
        char userInput, computerInput;

        // computerInput logic
        random = 1 + (rand() % 100);
        if (random > 1 && random <= 33)
        {
            computerInput = 's';
        }
        else if (random > 33 && random <= 66)
        {
            computerInput = 'g';
        }
        else if (random > 66 && random <= 100)
        {
            computerInput = 'w';
        }
        else
        {
            cout << "Invalid input" << endl;
            continue;
        }

        // User input logic
        cout << "Round " << i;
        cout << "\nEnter Your move = ";
        cin >> userInput;

        // game logic
        if (userInput == computerInput)
        {
            cout << "Computer move = " << computerInput << endl;
            cout << "Draw both choice same move\n"
                 << endl;
            userScore++;
            computerScore++;
        }

        else if (userInput == 's' && computerInput == 'g')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << "Computer win\n"
                 << endl;
            computerScore++;
        }

        else if (userInput == 's' && computerInput == 'w')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << name << " win\n"
                 << endl;
            userScore++;
        }

        else if (userInput == 'g' && computerInput == 's')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << name << " win\n"
                 << endl;
            userScore++;
        }

        else if (userInput == 'g' && computerInput == 'w')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << "Computer win\n"
                 << endl;
            computerScore++;
        }

        else if (userInput == 'w' && computerInput == 's')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << "Computer win\n"
                 << endl;
            computerScore++;
        }

        else if (userInput == 'w' && computerInput == 'g')
        {
            cout << "Computer move = " << computerInput << endl;
            cout << name << " win\n"
                 << endl;
            userScore++;
        }

        // reduce chances
        chance--;
        i++;
    }

    // declaring winner
    cout << name << " Score = " << userScore << endl;
    cout << "Computer Score = " << computerScore << endl;
    cout << "Final Winner is" << endl;

    if (userScore > computerScore)
    {
        cout << name << endl;
    }
    else if (userScore == computerScore)
    {
        cout << "Match Draw Both are winners" << endl;
    }
    else
    {
        cout << "computer" << endl;
    }
    return 0;
}