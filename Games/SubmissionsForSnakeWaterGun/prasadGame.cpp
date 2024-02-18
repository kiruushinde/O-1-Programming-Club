#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

// Done ✅
int main()
{
  srand(
      time(0)); // For getting different sequence of random numbers on every run
  char choice;
  int player, computer;
  bool playAgain = true;

  cout << "Welcome to Snake, Water, Gun...... in  (Beta testing)!" << endl;

  // This is for user choice

  while (playAgain)
  {

    cout << "Enter your choice : (Press 1 : SNAKE, Press 2 : WATER , Press 3 : GUN)"
         << endl;

    cin >> choice;

    switch (choice)
    {

    case '1':
      player = 1; // for snake
      break;

    case '2':
      player = 2; // for water
      break;

    case '3':
      player = 3; // for gun
      break;

    default:
      cout << "Invalid choice : Please choice from '1' , '2' , '3' " << endl;
      continue; // This will restart the loop , if user inputs wrong value
    }

    // For computer choice
    computer = rand() % 3 + 1; // the rand() function returns the random number and %3 limits
                               // the         range of the random number to 0 , 1 or 2, While
                               // adding '+1' it will give range from 1 to 3

    // Display computer's choice
    cout << "Computer chose: ";
    switch (computer)
    {
    case 1:
      cout << "SNAKE";
      break;
    case 2:
      cout << "WATER";
      break;
    case 3:
      cout << "GUN";
      break;
    }
    cout << endl;

    if (computer == player)
    {
      cout << "It's a tie!" << endl;
    }
    else if (player == 1 && computer == 2 || player == 2 && computer == 3 ||
             player == 3 && computer == 1)
    {
      cout << "You win!" << endl;
    }
    else
    {
      cout << "You lose!" << endl;
    }

    // For playing again :

    cout << "Do you want to play again? (Press 'y' for yes and 'n' for no)" << endl;
    cin >> choice;
    if (tolower(choice) != 'y')
    {
      playAgain = false;
    }
  }

  cout << "Thanks for playing the game....! @by Prasad..." << endl;
}