#include <iostream>
#include <time.h>
using namespace std;

// Done ✅
int main()
{
  int i = 0;
  string you, comp;
  srand(time(0));
  int num = (rand() % 100) + 1;
  // cout<<num<<endl;

  if (num < 33)
  {
    comp = "snake";
  }
  else if (num > 33 && num < 66)
  {
    comp = "water";
  }
  else
  {
    comp = "gun";
  }
  // cout<<comp;

  while (1)
  {
    cout << " Enter Your Choise 👍🏻" << endl;
    cin >> you;
    if (you == "snake" && comp == "snake")
    {
      cout << "Match draw 😇" << endl;
      i++;
      continue;
    }
    else if (you == "snake" && comp == "water")
    {
      cout << "you win 😍🔥" << endl;
      break;
    }
    else if (you == "snake" && comp == "gun")
    {
      cout << "computer win 😲🤨" << endl;
      i++;
      continue;
    }

    if (you == "water" && comp == "water")
    {
      cout << "Match draw 😇" << endl;
      i++;
      continue;
    }
    else if (you == "water" && comp == "gun")
    {
      cout << "you win 😍🔥" << endl;

      break;
    }
    else if (you == "water" && comp == "snake")
    {
      cout << "computer win 😲🤨" << endl;
      i++;
      continue;
    }

    if (you == "gun" && comp == "gun")
    {
      cout << "Match draw 😇" << endl;
      i++;
      continue;
    }
    else if (you == "gun" && comp == "snake")
    {
      cout << "you win 😍🔥" << endl;
      break;
    }
    else if (you == "gun" && comp == "water")
    {
      cout << "computer win 😲🤨" << endl;
      i++;
      continue;
    }
  }

  cout << "You take"
       << " " << i << " "
       << "chance to win 👏🏻";

  return 0;
}