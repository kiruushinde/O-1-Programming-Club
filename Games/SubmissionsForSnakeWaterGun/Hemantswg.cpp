#include <iostream>
#include <ctime>
// Done ✅
using namespace std;
int main()
{
  string you, comp;
  srand(time(0));
  int number = rand() % 100 + 1;

  if (number < 33)
  {
    comp = "snake";
  }
  else if (number > 33 && number < 66)
  {
    comp = "water";
  }
  else
  {
    comp = "gun";
  }

  while (1)
  {
    cout << endl
         << "You Choose" << endl;
    cin >> you;

    if (you == "snake" && comp == "snake")
    {
      cout << "Game draw" << endl;
    }

    else if (you == "snake" && comp == "water")
    {
      cout << "you win" << endl;
    }

    else if (you == "snake" && comp == "gun")
    {
      cout << "computer win" << endl;
    }

    else if (you == "water" && comp == "water")
    {
      cout << "Game draw" << endl;
    }
    else if (you == "water" && comp == "gun")
    {
      cout << "you win" << endl;
    }

    else if (you == "water" && comp == "snake")
    {
      cout << "computer win" << endl;
    }

    else if (you == "gun" && comp == "gun")
    {
      cout << "Game draw" << endl;
    }

    else if (you == "gun" && comp == "snake")
    {
      cout << "you win" << endl;
    }

    else if (you == "gun" && comp == "water")
    {
      cout << "computer win" << endl;
    }
  }

  cout << "You take " << you << " chance to win" << endl;

  return 0;
}